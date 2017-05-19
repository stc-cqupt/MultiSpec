// WMapCDlg.cpp : implementation file
//
// Revised by Larry Biehl on 03/25/2017
//
// Note that m_adjustUpperLeftMapPointFlag has not been fully integrated in this code
// yet. See Mac version for more info. Is not being used right now till a better
// method is made available for the user to control.

#include "SMulSpec.h"
#include "WMapCDlg.h" 
#include	"SExtGlob.h"	
//#include ".\wmapcdlg.h"
#include "WMapCDlg.h"

									
extern void 					CoordinateDialogInitialize (
										DialogPtr							dialogPtr,
										MapProjectionInfoPtr				mapProjectionInfoPtr,
										SInt16*								mapUnitsSelectionPtr,
										double*								xMapCoordinate11Ptr,
										double*								yMapCoordinate11Ptr,
										double*								horizontalPixelSizePtr,
										double*								verticalPixelSizePtr,
										double*								mapOrientationAnglePtr,
										SInt16*								referenceSystemSelectionPtr,
										SInt16*								epsgCodePtr,
										SInt16*								projectionSelectionPtr,
										SInt16*								datumSelectionPtr,
										SInt16*								ellipsoidSelectionPtr,
										double*								radiusSpheroidPtr,
										double*								semiMajorAxisPtr,
										double*								semiMinorAxisPtr,
										SInt16*								gridZonePtr,
										UCharPtr								gridZoneDirectionPtr,
										SInt16*								gridZoneWithDirectionPtr,
										UCharPtr								epsgNamePtr,
										UCharPtr								datumNamePtr,
										UCharPtr								ellipsoidNamePtr,
										double*								longitudeCentralMeridianPtr,
										double*								latitudeOriginPtr,
										double*								falseEastingPtr,
										double*								falseNorthingPtr,
										double*								scaleFactorOfCentralMeridianPtr,
										double*								standardParallel1Ptr,
										double*								standardParallel2Ptr,
										DoublePoint*						upperLeftLatitudeLongitudePointPtr);	

extern SInt16					CoordinateDialogCheckIfZoneIsValid (
										DialogPtr							dialogPtr,
										SInt16								referenceSystemCode,
										UCharPtr								gridZoneDirection);

extern Boolean					CoordinateDialogIsZoneDirectionEditable (
										SInt16								referenceSystemSelection);

extern void 					CoordinateDialogOK (
										DialogPtr							dialogPtr,
										FileInfoPtr							fileInfoPtr,
										MapProjectionInfoPtr				mapProjectionInfoPtr,
										SInt16								mapUnitsSelection,
										double								xMapCoordinate11,
										double								yMapCoordinate11,
										double								horizontalPixelSize,
										double								verticalPixelSize,
										double								mapOrientationAngle,
										SInt16								referenceSystemSelection,
										SInt16								epsgCode,
										SInt16								projectionCodeSelection,
										SInt16								datumCode,
										SInt16								ellipsoidCode,
										double								radiusSpheroid,
										double								semiMajorAxis,
										double								semiMinorAxis,
										SInt16								gridZone,
										UCharPtr								gridZoneDirectionPtr,
										UCharPtr								epsgNamePtr,
										UCharPtr								datumNamePtr,
										UCharPtr								ellipsoidNamePtr,
										double								longitudeCentralMeridian,
										double								latitudeOrigin,
										double								falseEasting,
										double								falseNorthing,
										double								scaleFactorOfCentralMeridian,
										double								standardParallel1,
										double								standardParallel2,
										DoublePoint							upperLeftLatLongPoint,
										Boolean								adjustUpperLeftMapPointFlag);
										
extern void						CoordinateDialogGetMinMaxZone (
										SInt16								referenceSystemSelection,
										SInt16*								minZonePtr,
										SInt16*								maxZonePtr,
										UCharPtr								gridZoneDirectionPtr);

extern void 					CoordinateDialogHideShowProjectionParameters (
										DialogPtr							dialogPtr,
										SInt16								referenceSystemSelection,
										SInt16								projectionSelection,
										Boolean								initialFlag,
										SInt16*								datumSelectionPtr,
										SInt16*								ellipsoidSelectionPtr,
										Boolean								setDatumParametersFlag);
/*
extern void 					CoordinateDialogSetProjectionParameters (
										DialogPtr							dialogPtr,
										SInt16								projectionCode,
										double								longitudeCentralMeridian,
										double								latitudeOrigin,
										double								scaleFactorOfCentralMeridian,
										double								falseEasting,
										double								falseNorthing,
										double								standardParallel1,
										double								standardParallel2,
										double								falseOriginLongitude,
										double								falseOriginLatitude,
										double								falseOriginEasting,
										double								falseOriginNorthing);	
*/
extern Boolean					CoordinateDialogIsZoneDisplayed (
										SInt16								referenceSystemSelection);		

extern SInt16					CoordinateDialogSetDatumParameters (
										DialogPtr							dialogPtr,
										SInt16								datumCode,
										SInt16								ellipsoidCode,
										Boolean								initialFlag);

extern void						CoordinateDialogSetEllipsoidParameters (
										DialogPtr							dialogPtr,
										SInt16								ellipsoidCode);

extern Boolean					CoordinateDialogSetParametersFromEPSGCode (
										DialogPtr							dialogPtr,
										SInt16								epsgCode,
										Boolean								lastEPSGCodeValidFlag,
										UCharPtr								epsgNamePtr,
										UCharPtr								datumNamePtr,
										UCharPtr								ellipsoidNamePtr,
										SInt16*								mapUnitsSelectionPtr,
										SInt16*								projectionSelectionPtr);

extern void 					CoordinateDialogSetReferenceSystemParameters (
										DialogPtr							dialogPtr,
										SInt16								referenceSystemCode,
										UCharPtr								gridZoneDirectionPtr,
										Boolean								initialFlag,
										SInt16*								projectionSelectionPtr,
										SInt16*								datumSelectionPtr,
										SInt16*								ellipsoidSelectionPtr,
										SInt16*								mapUnitsSelectionPtr);

extern void 					CoordinateDialogSetParametersFromRS (
										DialogPtr							dialogPtr,
										SInt16								referenceSystemSelection,
										SInt16*								projectionSelectionPtr,
										UCharPtr								gridZoneDirectionPtr,
										SInt16								gridZoneWithDirection,
										SInt16								datumCode,
										SInt16								ellipsoidCode,
										SInt16*								gridZonePtr);

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMMapCoordinateDlg dialog


CMMapCoordinateDlg::CMMapCoordinateDlg(CWnd* pParent /*=NULL*/)
	: CMDialog(CMMapCoordinateDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CMMapCoordinateDlg)
	m_referenceSystemSelection = 0;
	m_ellipsoidSelection = 0;
	m_projectionSelection = 0;
	m_mapUnitsSelection = 0;
	m_horizontalPixelSize = 0.0;
	m_verticalPixelSize = 0.0;
	m_xMapCoordinate11 = 0.0;
	m_yMapCoordinate11 = 0.0;
	m_falseEasting = 0.0;
	m_falseNorthing = 0.0;
	m_latitudeOrigin = 0.0;
	m_longitudeCentralMeridian = 0.0;
	m_semiMinorAxis = 0.0;
	m_radiusSpheroid = 0.0;
	m_scaleFactorOfCentralMeridian = 0.0;
	m_gridZoneDirection = _T(" ");
	m_datumSelection = -1;
	m_mapOrientationAngle = 0.0;
	m_standardParallel1 = 0.0;
	m_standardParallel2 = 0.0;
	//}}AFX_DATA_INIT

	m_areaUnitsCode = 0;
	m_epsgCode = 0;
	m_datumCode = 0;
	m_referenceSystemCode = 0;
	m_projectionCode = 0;
	m_semiMajorAxis = 0;
	m_ellipsoidCode = 0;
	m_gridZoneDirectionString[0] = 'N';
	m_gridZoneDirectionString[1] = 0;
	m_epsgName[0] = 0;
	m_datumName[0] = 0;
	m_ellipsoidName[0] = 0;
	m_validEPSGCodeFlag = TRUE;
	
	m_initializedFlag = CMDialog::m_initializedFlag;
	
}		// end "CMMapCoordinateDlg"


void CMMapCoordinateDlg::DoDataExchange(CDataExchange* pDX)
{
	USES_CONVERSION;

	CMDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMMapCoordinateDlg)
	DDX_CBIndex(pDX, IDC_ReferenceSystemCombo, m_referenceSystemSelection);
	DDX_CBIndex(pDX, IDC_EllipsoidCombo, m_ellipsoidSelection);
	DDX_CBIndex(pDX, IDC_ProjectionCombo, m_projectionSelection);
	DDX_CBIndex(pDX, IDC_MapUnitsCombo, m_mapUnitsSelection);
	DDX_Text(pDX, IDC_Zone, m_gridZone);
	DDX_Text(pDX, IDC_EPSGCode, m_epsgCode);
	DDX_Text(pDX, IDC_HorizontalSize, m_horizontalPixelSize);
	DDX_Text(pDX, IDC_VerticalSize, m_verticalPixelSize);
	DDX_Text(pDX, IDC_X11Coordinate, m_xMapCoordinate11);
	DDX_Text(pDX, IDC_Y11Coordinate, m_yMapCoordinate11);
	DDX_Text(pDX, IDC_FalseEasting, m_falseEasting);
	DDX_Text(pDX, IDC_FalseNorthing, m_falseNorthing);
	DDX_Text(pDX, IDC_Latitude, m_latitudeOrigin);
	DDX_Text(pDX, IDC_Longitude, m_longitudeCentralMeridian);
	DDX_Text(pDX, IDC_MinorAxis, m_semiMinorAxis);
	DDX_Text(pDX, IDC_Radius, m_radiusSpheroid);
	DDX_Text(pDX, IDC_ScaleFactor, m_scaleFactorOfCentralMeridian);
	DDX_Text(pDX, IDC_StandardParallel1, m_standardParallel1);
	DDX_Text(pDX, IDC_StandardParallel2, m_standardParallel2);
	DDX_Text(pDX, IDC_ZoneDirection, m_gridZoneDirection);
	DDV_MaxChars(pDX, m_gridZoneDirection, 1);
	DDX_CBIndex(pDX, IDC_DatumCombo, m_datumSelection);
	DDX_Text(pDX, IDC_OrientationAngle, m_mapOrientationAngle);
	DDV_MinMaxDouble(pDX, m_mapOrientationAngle, -180., 180.);
	//}}AFX_DATA_MAP

	if (pDX->m_bSaveAndValidate)
		{
/*		CComboBox*				comboBoxPtr;

		comboBoxPtr = (CComboBox*)GetDlgItem(IDC_ReferenceSystemCombo);
		m_referenceSystemCode = (SInt16)comboBoxPtr->GetItemData(m_referenceSystemSelection);

		comboBoxPtr = (CComboBox*)GetDlgItem(IDC_ProjectionCombo);
		m_projectionCode = (SInt16)comboBoxPtr->GetItemData(m_projectionSelection);

		comboBoxPtr = (CComboBox*)GetDlgItem(IDC_DatumCombo);
		m_datumCode = (SInt16)comboBoxPtr->GetItemData(m_datumSelection);

		comboBoxPtr = (CComboBox*)GetDlgItem(IDC_EllipsoidCombo);
		m_ellipsoidCode = 
			(SInt16)comboBoxPtr->GetItemData(m_ellipsoidSelection);
*/			
		m_referenceSystemCode = abs(m_referenceSystemSelection);
		m_projectionCode = abs(m_projectionSelection);
		m_datumCode = abs(m_datumSelection);
		m_ellipsoidCode = abs(m_ellipsoidSelection);

				// Verify that the grid zone parameter is within range if it is being
				// used.
				
		if (!CoordinateDialogCheckIfZoneIsValid (this,
																m_referenceSystemCode,
//																(UCharPtr)T2A((LPCWSTR)m_gridZoneDirectionString)))
																m_gridZoneDirectionString))
			{			
			pDX->PrepareEditCtrl(IDC_Zone);
			pDX->Fail();

			}		// end "if (!CoordinateDialogCheckIfZoneIsValid (dialogPtr, ..."

		}		// end "if (pDX->m_bSaveAndValidate)"

}		// end "DoDataExchange"


BEGIN_MESSAGE_MAP(CMMapCoordinateDlg, CMDialog)
	//{{AFX_MSG_MAP(CMMapCoordinateDlg)
	ON_CBN_SELENDOK(IDC_MapUnitsCombo, OnSelendokMapUnitsCombo)
	ON_CBN_SELENDOK(IDC_ReferenceSystemCombo, OnSelendokReferenceSystemCombo)
	ON_EN_CHANGE(IDC_ZoneDirection, OnChangeZoneDirection)
	ON_CBN_SELENDOK(IDC_ProjectionCombo, OnSelendokProjectionCombo)
	ON_CBN_SELENDOK(IDC_DatumCombo, OnSelendokDatumCombo)
	ON_CBN_SELENDOK(IDC_EllipsoidCombo, OnSelendokEllipsoidCombo)
	//}}AFX_MSG_MAP
	ON_EN_CHANGE(IDC_Zone, OnEnChangeZone)
	ON_EN_CHANGE(IDC_EPSGCode, OnEnChangeEPSGCode)
END_MESSAGE_MAP()


/////////////////////////////////////////////////////////////////////////////
// CMMapCoordinateDlg message handlers



//-----------------------------------------------------------------------------
//								 Copyright (1988-1998)
//								c Purdue Research Foundation
//									All rights reserved.
//
//	Function name:		void DoDialog
//
//	Software purpose:	The purpose of this routine is to present the reformat
//							options dialog box to the user so that the user can
//							selection which reformat function is to be run.
//
//	Parameters in:		None
//
//	Parameters out:	None
//
//	Value Returned:	None		
// 
//	Called By:			Dialog in MDisMult.cpp
//
//	Coded By:			Larry L. Biehl			Date: 12/12/2000
//	Revised By:			Larry L. Biehl			Date: 04/05/2004	

Boolean 
CMMapCoordinateDlg::DoDialog(
			FileInfoPtr							fileInfoPtr,
			MapProjectionInfoPtr				mapProjectionInfoPtr)

{                              
	Boolean					OKFlag = FALSE;
	
	INT_PTR					returnCode;
	

	USES_CONVERSION;
	
			// Make sure intialization has been completed.
							                         
	if (!m_initializedFlag)
																			return(FALSE);
	
	m_fileInfoPtr = fileInfoPtr;
	m_mapProjectionInfoPtr = mapProjectionInfoPtr;
																				            																			
	returnCode = (SInt16)DoModal ();
	
	if (returnCode == IDOK)
		{ 
		OKFlag = TRUE; 
		
		m_gridZoneDirectionString[0] = 1;

		if (m_gridZoneDirection.GetLength() > 0)
			m_gridZoneDirectionString[1] = (UInt8)m_gridZoneDirection[0];
		else		//
			m_gridZoneDirectionString[1] = 0;

		m_gridZoneDirectionString[2] = 0;
				
		CoordinateDialogOK (this,
									m_fileInfoPtr,
									m_mapProjectionInfoPtr,
									abs(m_mapUnitsSelection),
									m_xMapCoordinate11,
									m_yMapCoordinate11,
									m_horizontalPixelSize,
									m_verticalPixelSize,
									m_mapOrientationAngle,
									m_referenceSystemSelection,
									m_epsgCode,
									m_projectionCode,
									m_datumCode,
									m_ellipsoidCode,
									m_radiusSpheroid,
									m_semiMajorAxis,
									m_semiMinorAxis,
									m_gridZone,
									m_gridZoneDirectionString,
									m_epsgName,
									m_datumName,
									m_ellipsoidName,
									m_longitudeCentralMeridian,
									m_latitudeOrigin,
									m_falseEasting,
									m_falseNorthing,
									m_scaleFactorOfCentralMeridian,
									m_standardParallel1,
									m_standardParallel2,
									m_upperLeftLatitudeLongitudePoint,
									m_adjustUpperLeftMapPointFlag);
		
		}		// end "if (returnCode == IDOK)"
		
	return (OKFlag);
		
}		// end "DoDialog"



BOOL CMMapCoordinateDlg::OnInitDialog() 
{
	SInt16						datumSelection,
									ellipsoidSelection,
									gridZone,
									mapUnitsSelection,
									projectionSelection,
									referenceSystemSelection;


	CDialog::OnInitDialog();
	
			// Initialize dialog variables.
	
	CoordinateDialogInitialize (this,
											m_mapProjectionInfoPtr,
											&mapUnitsSelection,
											&m_xMapCoordinate11,
											&m_yMapCoordinate11,
											&m_horizontalPixelSize,
											&m_verticalPixelSize,
											&m_mapOrientationAngle,
											&referenceSystemSelection,
											&m_epsgCode,
											&projectionSelection,
											&datumSelection,
											&ellipsoidSelection,
											&m_radiusSpheroid,
											&m_semiMajorAxis,
											&m_semiMinorAxis,
											&gridZone,
											(UCharPtr)&m_gridZoneDirectionString,
											&m_gridZoneWithDirection,
											(UCharPtr)&m_epsgName,
											(UCharPtr)&m_datumName,
											(UCharPtr)&m_ellipsoidName,
											&m_longitudeCentralMeridian,
											&m_latitudeOrigin,
											&m_falseEasting,
											&m_falseNorthing,
											&m_scaleFactorOfCentralMeridian,
											&m_standardParallel1,
											&m_standardParallel2,
											&m_upperLeftLatitudeLongitudePoint);

	m_mapUnitsSelection = mapUnitsSelection;
	m_referenceSystemSelection = referenceSystemSelection;
	m_projectionSelection = abs(projectionSelection);
	m_datumSelection = abs(datumSelection);
	m_ellipsoidSelection = abs(ellipsoidSelection);

	m_referenceSystemCode = abs(referenceSystemSelection);
	m_projectionCode = abs(m_projectionSelection);
	m_datumCode = abs(m_datumSelection);
	m_ellipsoidCode = abs(m_ellipsoidSelection);

	m_gridZone = gridZone;

/*	m_referenceSystemSelection = GetComboListSelection(
													IDC_ReferenceSystemCombo,
													m_referenceSystemCode);

	m_projectionSelection = GetComboListSelection(
													IDC_ProjectionCombo,
													m_projectionCode);

	m_datumSelection = GetComboListSelection(
													IDC_DatumCombo,
													m_datumCode);

	m_ellipsoidSelection = GetComboListSelection(
													IDC_EllipsoidCombo,
													m_ellipsoidCode);
*/
	m_gridZoneDirection = CString(&m_gridZoneDirectionString[1]);

			// This is needed because m_radiusSpheroid is what is used for
			// the major axis box.

	if (abs(m_ellipsoidCode) != kSphereEllipsoidCode)
		m_radiusSpheroid = m_semiMajorAxis;
	                 
	if (UpdateData(FALSE) )                   
		PositionDialogWindow ();
	
			// Set default text selection to first edit text item	
		                                                     
	SelectDialogItemText (this, IDC_X11Coordinate, 0, SInt16_MAX);        
	
	return FALSE;  // return TRUE  unless you set the focus to a control
	              
}		// end "OnInitDialog"



void CMMapCoordinateDlg::OnSelendokMapUnitsCombo() 
{
	// TODO: Add your control notification handler code here
	
}

void CMMapCoordinateDlg::OnSelendokEllipsoidCombo() 
{
//	CComboBox*				comboBoxPtr;

	int						lastEllipsoidSelection;


	lastEllipsoidSelection = m_ellipsoidSelection;
	DDX_CBIndex(m_dialogFromPtr, IDC_EllipsoidCombo, m_ellipsoidSelection);

	if (lastEllipsoidSelection != m_ellipsoidSelection)
		{
		CoordinateDialogSetEllipsoidParameters (
											this,
											m_ellipsoidSelection);

		}		// end "if (lastEllipsoidSelection != m_ellipsoidSelection)"
	
}		// end "OnSelendokEllipsoidCombo"



void CMMapCoordinateDlg::OnSelendokReferenceSystemCombo() 
{
//	CComboBox*				comboBoxPtr;

	int						lastReferenceSelection;

	SInt16					datumSelection,
								ellipsoidSelection,
								gridZone,
								mapUnitsSelection,
								projectionSelection;

	USES_CONVERSION;
	
	lastReferenceSelection = m_referenceSystemSelection;
	DDX_CBIndex(m_dialogFromPtr, IDC_ReferenceSystemCombo, m_referenceSystemSelection);

	if (lastReferenceSelection != m_referenceSystemSelection)
		{
//		comboBoxPtr = (CComboBox*)GetDlgItem(IDC_ReferenceSystemCombo);
//		m_referenceSystemCode = (SInt16)comboBoxPtr->GetItemData(m_referenceSystemSelection);
		m_referenceSystemCode = abs(m_referenceSystemSelection);

		projectionSelection = m_projectionSelection;
		datumSelection = m_datumSelection;
		ellipsoidSelection = m_ellipsoidSelection;
		mapUnitsSelection = m_mapUnitsSelection;

		CoordinateDialogSetReferenceSystemParameters (
														this, 
														m_referenceSystemCode,
														m_gridZoneDirectionString,
														FALSE,
														&projectionSelection,
														&datumSelection,
														&ellipsoidSelection,
														&mapUnitsSelection);

		if (m_projectionSelection != abs(projectionSelection))
			{
			m_projectionSelection = abs(projectionSelection);
			DDX_CBIndex(m_dialogToPtr, IDC_ProjectionCombo, m_projectionSelection);

			m_projectionCode = m_projectionSelection;

			}		// end "if (m_projectionSelection != projectionSelection)"
		
		if (m_datumSelection != abs(datumSelection))
			{
			m_datumSelection = abs(datumSelection);
			DDX_CBIndex(m_dialogToPtr, IDC_DatumCombo, m_datumSelection);

			m_datumCode = m_datumSelection;

			}		// end "if (m_datumSelection != datumSelection)"

		if (m_ellipsoidSelection != abs(ellipsoidSelection))
			{
			m_ellipsoidSelection = abs(ellipsoidSelection);
			DDX_CBIndex(m_dialogToPtr, IDC_EllipsoidCombo, m_ellipsoidSelection);

			m_ellipsoidCode = m_ellipsoidSelection;

			}		// end "if (m_ellipsoidSelection != abs(ellipsoidSelection))"

		if (m_mapUnitsSelection != abs(mapUnitsSelection))
			{
			m_mapUnitsSelection = abs(mapUnitsSelection);
			DDX_CBIndex(m_dialogToPtr, IDC_MapUnitsCombo, m_mapUnitsSelection);

			}		// end "if (m_mapUnitsSelection != abs(mapUnitsSelection))"

				// Set the projection parameters based on the selected reference system
				
		gridZone = m_gridZone;
		CoordinateDialogSetParametersFromRS (this,
															m_referenceSystemSelection,
															&projectionSelection,
															m_gridZoneDirectionString,
															m_gridZoneWithDirection,
															m_datumCode,
															m_ellipsoidCode,
															&gridZone);
	
		if (m_projectionSelection != abs(projectionSelection))
			{
			m_projectionSelection = abs(projectionSelection);
			DDX_CBIndex(m_dialogToPtr, IDC_ProjectionCombo, m_projectionSelection);

			m_projectionCode = m_projectionSelection;

			}		// end "if (m_projectionSelection != abs(projectionSelection))"
		
		if (m_gridZone != gridZone)
			DDX_Text(m_dialogToPtr, IDC_Zone, m_gridZone);
																			
		if (m_referenceSystemSelection == kByEPSGCodeCode)	
			{
			m_validEPSGCodeFlag = CoordinateDialogSetParametersFromEPSGCode (
																		this,
																		m_epsgCode,
																		m_validEPSGCodeFlag,
																		m_epsgName,
																		m_datumName,
																		m_ellipsoidName,
																		&mapUnitsSelection,
																		&projectionSelection);
	
			if (m_projectionSelection != abs(projectionSelection))
				{
				m_projectionSelection = abs(projectionSelection);
				DDX_CBIndex(m_dialogToPtr, IDC_ProjectionCombo, m_projectionSelection);

				m_projectionCode = m_projectionSelection;

				}		// end "if (m_projectionSelection = projectionSelection)"
	
			if (m_mapUnitsSelection != abs(mapUnitsSelection))
				{
				m_mapUnitsSelection = abs(mapUnitsSelection);
				DDX_CBIndex(m_dialogToPtr, IDC_MapUnitsCombo, m_mapUnitsSelection);

				}		// end "if (m_mapUnitsSelection != abs(mapUnitsSelection)"

			}		// end "if (m_referenceSystemSelection == kByEPSGCodeCode)"

		m_adjustUpperLeftMapPointFlag = TRUE;

		}		// end "if (lastReferenceSelection != m_referenceSystemSelection)"
	
}		// end "OnSelendokReferenceSystemCombo"



void CMMapCoordinateDlg::OnSelendokProjectionCombo() 
{
//	CComboBox*				comboBoxPtr;

	int						lastProjectionSelection;

	SInt16					datumSelection,
								ellipsoidSelection;


	lastProjectionSelection = m_projectionSelection;
	DDX_CBIndex(m_dialogFromPtr, IDC_ProjectionCombo, m_projectionSelection);

	if (lastProjectionSelection != m_projectionSelection)
		{
//		comboBoxPtr = (CComboBox*)GetDlgItem(IDC_ProjectionCombo);
//		m_projectionCode = (SInt16)comboBoxPtr->GetItemData(m_projectionSelection);
		m_projectionCode = abs(m_projectionSelection);

		datumSelection = m_datumSelection;
		ellipsoidSelection = m_ellipsoidSelection;

		CoordinateDialogHideShowProjectionParameters (
									this, 
									m_referenceSystemCode,
									m_projectionCode,
									FALSE,
									&datumSelection,
									&ellipsoidSelection,
									FALSE);
		
		if (m_datumSelection != abs(datumSelection))
			{
			m_datumSelection = abs(datumSelection);
			DDX_CBIndex(m_dialogToPtr, IDC_DatumCombo, m_datumSelection);

			m_datumCode = m_datumSelection;

			}		// end "if (m_datumSelection != datumSelection)"

		if (m_ellipsoidSelection != ellipsoidSelection)
			{
			m_ellipsoidSelection = abs(ellipsoidSelection);
			DDX_CBIndex(m_dialogToPtr, IDC_EllipsoidCombo, m_ellipsoidSelection);

			m_ellipsoidCode = m_ellipsoidSelection;

			}		// end "if (m_ellipsoidSelection != ellipsoidSelection)"

		m_adjustUpperLeftMapPointFlag = TRUE;

		}		// end "if (lastGridSystemCode != m_gridSystemCode)"
	
}		// end "OnSelendokProjectionCombo"



void CMMapCoordinateDlg::OnSelendokDatumCombo() 
{
//	CComboBox*				comboBoxPtr;

	int						lastDatumSelection;


	lastDatumSelection = m_datumSelection;
	DDX_CBIndex(m_dialogFromPtr, IDC_DatumCombo, m_datumSelection);

	if (lastDatumSelection != m_datumSelection)
		{
		m_ellipsoidSelection = CoordinateDialogSetDatumParameters (
											this,
											m_datumSelection,
											abs (m_ellipsoidSelection),
											FALSE);
		
		m_ellipsoidSelection = abs(m_ellipsoidSelection);
		m_ellipsoidCode = m_ellipsoidSelection;

		DDX_CBIndex(m_dialogToPtr, 
							IDC_EllipsoidCombo, 
							m_ellipsoidSelection);

//		comboBoxPtr = (CComboBox*)GetDlgItem(IDC_DatumCombo);
//		m_datumCode = (SInt16)comboBoxPtr->GetItemData(m_datumSelection);
		m_datumCode = abs(m_datumSelection);
		
		m_adjustUpperLeftMapPointFlag = TRUE;

		}		// end "if (lastDatumSelection != m_datumSelection)"
	
}		// end "OnSelendokDatumCombo"

void CMMapCoordinateDlg::OnChangeZoneDirection() 
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CMDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	SInt16				projectionSelection;


	USES_CONVERSION;
	
	TBYTE lastGridZoneDirection = m_gridZoneDirection[0];
	
	DDX_Text(m_dialogFromPtr, IDC_ZoneDirection, m_gridZoneDirection);

	if (m_gridZoneDirection != 'N' && m_gridZoneDirection != 'S' &&
			m_gridZoneDirection != 'n' && m_gridZoneDirection != 's')
		{
		m_gridZoneDirection = lastGridZoneDirection;
		DDX_Text(m_dialogToPtr, IDC_ZoneDirection, m_gridZoneDirection);

		}		// end "if (m_gridZoneDirection != 'N' && m_gridZoneDirection != 'S')"

	else	// okay
		{
//		CComboBox*				comboBoxPtr;
		SInt16					gridZone;

//		comboBoxPtr = (CComboBox*)GetDlgItem(IDC_DatumCombo);
//		m_datumCode = (SInt16)comboBoxPtr->GetItemData(m_datumSelection);
		m_datumCode = abs(m_datumSelection);
		
				// Set up gridZoneDirectionString to be used in the shared routines.

		//m_gridZoneDirectionString[1] = (UInt8)T2A((LPTSTR)m_gridZoneDirection[0]);
		m_gridZoneDirectionString[1] = (UInt8)m_gridZoneDirection[0];

		m_gridZoneWithDirection = m_gridZone;
		if (m_gridZoneDirection == 'S')
			m_gridZoneWithDirection = -m_gridZone;

		projectionSelection = m_projectionSelection;
		CoordinateDialogSetParametersFromRS (this,
															m_referenceSystemCode,
															&projectionSelection,
															m_gridZoneDirectionString,
															m_gridZoneWithDirection,
															m_datumCode,
															m_ellipsoidCode,
															&gridZone);
	
		if (m_projectionSelection != abs(projectionSelection))
			{
			m_projectionSelection = abs(projectionSelection);
			DDX_CBIndex(m_dialogToPtr, IDC_ProjectionCombo, m_projectionSelection);

			}		// end "if (m_projectionSelection = projectionSelection)"

		}		// end "else okay"
	
}		// end "OnChangeZoneDirection"



void CMMapCoordinateDlg::OnEnChangeZone()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CMDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	SInt16							gridZone,
										maxZone,
										minZone,
										projectionSelection,
										savedGridZone;


	USES_CONVERSION;

	savedGridZone = m_gridZone;
	DDX_Text(m_dialogFromPtr, IDC_Zone, m_gridZone);
	
	CoordinateDialogGetMinMaxZone (m_referenceSystemCode,
												&minZone,
												&maxZone,
												m_gridZoneDirectionString);
		
	if (m_gridZone >= minZone && m_gridZone <= maxZone)
		{
		m_gridZoneWithDirection = m_gridZone;
		if (m_gridZoneDirection == 'S')
			m_gridZoneWithDirection = -m_gridZone;
		gridZone = m_gridZone;
	
		projectionSelection = m_projectionSelection;
		CoordinateDialogSetParametersFromRS (this,
															m_referenceSystemCode,
															&projectionSelection,
															m_gridZoneDirectionString,
															m_gridZoneWithDirection,
															m_datumCode,
															m_ellipsoidCode,
															&gridZone);
	
		if (m_projectionSelection != abs(projectionSelection))
			{
			m_projectionSelection = abs(projectionSelection);
			DDX_CBIndex(m_dialogToPtr, IDC_ProjectionCombo, m_projectionSelection);

			}		// end "if (m_projectionSelection = projectionSelection)"
																
		}		// end "else grid zone is within the proper range

}		// end "OnEnChangeZone"



void CMMapCoordinateDlg::OnEnChangeEPSGCode()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CMDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	SInt16							mapUnitsSelection,
										projectionSelection,
										savedEPSGCode;


	USES_CONVERSION;
	
	savedEPSGCode = m_epsgCode;
	DDX_Text(m_dialogFromPtr, IDC_EPSGCode, m_epsgCode);
	
	if (m_epsgCode != savedEPSGCode)
		{
		projectionSelection = m_projectionSelection;
		mapUnitsSelection = m_mapUnitsSelection;
																			
		m_validEPSGCodeFlag = CoordinateDialogSetParametersFromEPSGCode (
																	this,
																	m_epsgCode,
																	m_validEPSGCodeFlag,
																	m_epsgName,
																	m_datumName,
																	m_ellipsoidName,
																	&mapUnitsSelection,
																	&projectionSelection);
	
		if (m_projectionSelection != abs(projectionSelection))
			{
			m_projectionSelection = abs(projectionSelection);
			DDX_CBIndex(m_dialogToPtr, IDC_ProjectionCombo, m_projectionSelection);

			}		// end "if (m_projectionSelection = projectionSelection)"
	
		if (m_mapUnitsSelection != abs(mapUnitsSelection))
			{
			m_mapUnitsSelection = abs(mapUnitsSelection);
			DDX_CBIndex(m_dialogToPtr, IDC_MapUnitsCombo, m_mapUnitsSelection);

			}		// end "if (m_mapUnitsSelection != abs(mapUnitsSelection)"
																
		}		// end "else grid zone is within the proper range

}		// end "OnEnChangeEPSGCode"