//	 									MultiSpec
//
//					Laboratory for Applications of Remote Sensing
// 								Purdue University
//								West Lafayette, IN 47907
//								 Copyright (1995-2020)
//							(c) Purdue Research Foundation
//									All rights reserved.
//
//	File:						WGaussianParameterDialog.cpp : implementation file
//
//	Authors:					Larry L. Biehl
//
//	Revision date:			01/04/2018
//
//	Language:				C++
//
//	System:					Windows Operating System
//
//	Brief description:	This file contains functions that relate to the
//								CAboutDlg class.
//
//------------------------------------------------------------------------------------

#include "SMultiSpec.h"

#include "WGaussianParameterDialog.h"

#ifdef _DEBUG
	#define new DEBUG_NEW
	#undef THIS_FILE
	static char THIS_FILE[] = __FILE__;
#endif



BEGIN_MESSAGE_MAP (CMGaussianParameterDlg, CMDialog)
	//{{AFX_MSG_MAP (CMGaussianParameterDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP ()



CMGaussianParameterDlg::CMGaussianParameterDlg (
				CWnd* 								pParent /*=NULL*/)
		: CMDialog (CMGaussianParameterDlg::IDD, pParent)

{
	//{{AFX_DATA_INIT(CMGaussianParameterDlg)
	m_gaussianStretch = 0.0;
	//}}AFX_DATA_INIT

	m_initializedFlag = CMDialog::m_initializedFlag;
	
}	// end "CMGaussianParameterDlg"


void CMGaussianParameterDlg::DoDataExchange (
				CDataExchange* 					pDX)

{
	CDialog::DoDataExchange (pDX);
	
	//{{AFX_DATA_MAP (CMGaussianParameterDlg)
	DDX_Text2 (pDX, IDC_GaussianStretch, m_gaussianStretch);
	DDV_MinMaxDouble (pDX, m_gaussianStretch, 1.e-004, 1000.);
	//}}AFX_DATA_MAP
	
}	// end "DoDataExchange"



//------------------------------------------------------------------------------------
//								 Copyright (1995-2020)
//							(c) Purdue Research Foundation
//									All rights reserved.
//
//	Function name:		void DoDialog
//
//	Software purpose:	The purpose of this routine is to present the display
//							gaussian parameter dialog box to the user and copy the
//							revised parameter to the display specification dialog 
//							variables if the user selected OK.
//
//	Parameters in:		None
//
//	Parameters out:	None
//
//	Value Returned:	None		
// 
//	Called By:			Dialog in MDisplayMultispectral.cpp
//
//	Coded By:			Larry L. Biehl			Date: 05/07/2003
//	Revised By:			Larry L. Biehl			Date: 05/26/2017	

Boolean CMGaussianParameterDlg::DoDialog (
				double*								gaussianStretchPtr)

{  
	INT_PTR								returnCode;

	Boolean								continueFlag = FALSE;
	 
	                          
			// Make sure intialization has been completed.
							                         
	if (!m_initializedFlag)
																							return (FALSE);
																			
	m_gaussianStretch = *gaussianStretchPtr;																		 
																					
	returnCode = DoModal ();
	
	if (returnCode == IDOK)
		{   		
		*gaussianStretchPtr = m_gaussianStretch;																		 
		 
		continueFlag = TRUE;
		
		}	// end "if (returnCode == IDOK)"
		
	return (continueFlag);
		
}	// end "DoDialog"



BOOL CMGaussianParameterDlg::OnInitDialog ()

{
	CMDialog::OnInitDialog ();
	
			// Set default text selection to first edit text item	
		                                       
	SelectDialogItemText (this, IDC_GaussianStretch, 0, SInt16_MAX); 
	
	return FALSE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
	
}	// end "OnInitDialog"
