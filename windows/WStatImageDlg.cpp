#include	"SMulSpec.h"
#include "WMultiSpec.h"
#include	"WStatImageDlg.h"
#include	"SExtGlob.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

extern void			StatisticsImageDialogInitialize(
	DialogPtr							dialogPtr,
	StatisticsImageSpecsPtr			statisticsImageSpecsPtr,
	DialogSelectArea*					dialogSelectAreaPtr,
	WindowInfoPtr						imageWindowInfoPtr,
	WindowPtr							activeImageWindow,
	SInt16*								channelSelectionPtr,
	UInt16*								localNumberChannelsPtr,
	UInt16*								localFeaturesPtr,
	UInt16*								localTransformFeaturesPtr,
	Boolean*								channelsAllAvailableFlagPtr,
	UInt16**								projectChannelsPtrPtr,
	SInt16*								maxNumberChannelsPtr,
	SInt16*								classSelectionPtr,
	UInt32*								localNumberClassesPtr,
	UInt16*								localClassPtr,
	SInt16*								minMaxSettingCodePtr,
	double*								userMinimumPtr,
	double*								userMaximumPtr,
	SInt16*								areaCodePtr,
	SInt16*								selectItemPtr,
	Boolean*								featureTransformationFlagPtr,
	Boolean*								featureTransformAllowedFlagPtr);

extern void			StatisticsImageDialogOK(
	DialogPtr							dialogPtr,
	StatisticsImageSpecsPtr			statisticsImageSpecsPtr,
	DialogSelectArea*					dialogSelectAreaPtr,
	SInt16								classCode,
	SInt16								areaCode,
	SInt16								channelSelection,
	Boolean								featureTransformationFlag,
	SInt16*								featurePtr,
	SInt16                        localNumberFeatures,
	SInt16								maxNumberChannels,
	SInt16								classSelection,
	SInt32                        localNumberClasses,
	SInt16*								classListPtr,
	SInt16								perClassCode,
	SInt16								perFieldCode,
	SInt16								overallMinMaxCode,
	SInt16								individualMinMaxCode,
	SInt16								userMinMaxCode,
	double								userMinimum,
	double								userMaximum);

CMStatImageDialog::CMStatImageDialog(CWnd* pParent /*=NULL*/)
	: CMDialog(CMStatImageDialog::IDD, pParent)
{
#if 1
	UInt16**					classPtrPtr;

	m_classPtr = NULL;
	m_featurePtr = NULL;
	m_channelsPtr = NULL;

	m_channelSelection = 0;
	m_featureTransformationFlag = FALSE;

	m_classCode = 0;

	m_perClassCode = 0;
	m_perFieldCode = 0;

	m_areaCode = 0;

	m_overallMinMaxCode = 0;
	m_individualMinMaxCode = 0;
	m_userMinMaxCode = 0;
	m_userMinimum = 0.0;
	m_userMaximum = 0.0;

	m_initializedFlag = CMDialog::m_initializedFlag;

	m_channelsAllAvailableFlag = FALSE;

	if (gStatisticsImageSpecsPtr->areaCode == kTrainingType)
		classPtrPtr = &m_classListPtr;
	else
		classPtrPtr = NULL;

	m_initializedFlag = GetDialogLocalVectors(&m_localFeaturesPtr,
			&m_localTransformFeaturesPtr,
			classPtrPtr,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL);
#endif

}

CMStatImageDialog::~CMStatImageDialog() {

	if (m_classListPtr != NULL)
	{
		ReleaseDialogLocalVectors(m_localFeaturesPtr,
			m_localTransformFeaturesPtr,
			m_classListPtr,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL);
	}
}

void CMStatImageDialog::DoDataExchange(CDataExchange* pDX)
{
	CMDialog::DoDataExchange(pDX);

	DDX_Text(pDX, IDC_LineStart, m_LineStart);
	DDX_Text(pDX, IDC_LineEnd, m_LineEnd);
	DDX_Text(pDX, IDC_LineInterval, m_LineInterval);
	DDX_Text(pDX, IDC_ColumnStart, m_ColumnStart);
	DDX_Text(pDX, IDC_ColumnEnd, m_ColumnEnd);
	DDX_Text(pDX, IDC_ColumnInterval, m_ColumnInterval);

	DDX_Check(pDX, IDC_FeatureTransformation, m_featureTransformationFlag);
	DDX_Radio(pDX, IDC_ClassesRadio, m_classCode);
	DDX_Radio(pDX, IDC_SelectedClassRadio, m_perClassCode);
	DDX_Radio(pDX, IDC_SelectedFieldRadio, m_perFieldCode);
	DDX_Radio(pDX, IDC_SelectedAreaRadio, m_areaCode);

	DDX_Radio(pDX, IDC_OverallRadio, m_overallMinMaxCode);
	DDX_Radio(pDX, IDC_IndividualRadio, m_individualMinMaxCode);
	DDX_Radio(pDX, IDC_UserSettingRadio, m_userMinMaxCode);

	DDX_CBIndex(pDX, IDC_ChannelCombo, m_channelSelection);
	DDX_CBIndex(pDX, IDC_ClassCombo, m_classSelection);
	//DDX_CBIndex(pDX, IDC_Fields, m_classSelection);
	DDX_Text(pDX, IDC_StatisticMin, m_userMinimum);
	DDX_Text(pDX, IDC_StatisticMax, m_userMaximum);



}

BOOL CMStatImageDialog::DoDialog()
{

	SInt16		returnCode;

	BOOL			continueFlag = FALSE;

	// Make sure intialization has been completed.							                         
	if (!m_initializedFlag)
		return (continueFlag);

	returnCode = DoModal();
#if 1
	if (returnCode == IDOK)
	{
		continueFlag = TRUE;
		StatisticsImageDialogOK(
			this,
			gStatisticsImageSpecsPtr,
			&m_dialogSelectArea,
			m_classCode,
			m_areaCode,
			m_channelSelection,
			m_featureTransformationFlag,
			(SInt16*)m_localActiveFeaturesPtr,
			m_localActiveNumberFeatures,
			m_maximumNumberChannels,
			m_classSelection,
			m_localNumberClasses,
			(SInt16*)m_classListPtr,
			m_perClassCode,
			m_perFieldCode,
			m_overallMinMaxCode,
			m_individualMinMaxCode,
			m_userMinMaxCode,
			m_userMinimum,
			m_userMaximum);

		
	}
#endif

	return (continueFlag);
}

BOOL CMStatImageDialog::OnInitDialog() {

	SInt16			areaCode,
						channelsPopUpMenuID,
						channelSelection,
						selectItem;

	CMDialog::OnInitDialog();
#if 1
	StatisticsImageDialogInitialize(this,
		gStatisticsImageSpecsPtr,
		&m_dialogSelectArea,
		gImageWindowInfoPtr,
		gActiveImageWindow,
		&channelSelection,
		&m_localNumberFeatures,
		m_localFeaturesPtr,
		m_localTransformFeaturesPtr,
		&m_channelsAllAvailableFlag,
		(UInt16**)&m_channelsPtr,
		&m_maximumNumberChannels,
		(Boolean*)&m_classSelection,
		&m_localNumberClasses,
		(UInt16*)m_classListPtr,
		&m_MinMaxCode,
		&m_userMinimum,
		&m_userMaximum,
		(SInt16*)&m_areaCode,
		&selectItem,
		(Boolean*)&m_featureTransformationFlag,
		&m_featureTransformAllowedFlag);

	m_LineStart = m_dialogSelectArea.lineStart;
	m_LineEnd = m_dialogSelectArea.lineEnd;
	m_LineInterval = m_dialogSelectArea.lineInterval;
	m_ColumnStart = m_dialogSelectArea.columnStart;
	m_ColumnEnd = m_dialogSelectArea.columnEnd;
	m_ColumnInterval = m_dialogSelectArea.columnInterval;

	// Set feature parameters

	m_localActiveNumberFeatures = m_localNumberFeatures;
	m_localActiveFeaturesPtr = m_localFeaturesPtr;
	m_channelSelection = channelSelection;
#endif
	return TRUE;
}

BEGIN_MESSAGE_MAP(CMStatImageDialog, CMDialog)
#if 1
ON_EN_CHANGE(IDC_ColumnEnd, CheckColumnEnd)
ON_EN_CHANGE(IDC_ColumnStart, CheckColumnStart)
ON_EN_CHANGE(IDC_LineEnd, CheckLineEnd)
ON_EN_CHANGE(IDC_LineStart, CheckLineStart)
ON_CBN_SELENDOK(IDC_ClassCombo, OnSelendokClassCombo)
ON_CBN_SELENDOK(IDC_ChannelCombo, OnSelendokChannelCombo)
ON_BN_CLICKED(IDC_UserSettingRadio, OnClickUserSettingRadio)
ON_BN_CLICKED(IDC_IndividualRadio, OnClickIndividualRadio)
ON_BN_CLICKED(IDC_OverallRadio, OnClickOverallRadio)
ON_BN_CLICKED(IDEntireImage, ToEntireImage)
ON_BN_CLICKED(IDSelectedImage, ToSelectedImage)
#endif
END_MESSAGE_MAP()


void CMStatImageDialog::OnSelendokClassCombo()
{
	HandleClassesMenu(&m_localNumberClasses,
		(SInt16*)m_classListPtr,
		(SInt16)1,
		(SInt16)gProjectInfoPtr->numberStatisticsClasses,
		IDC_ClassCombo,
		(int*)&m_classSelection);
}// end "OnSelendokClassCombo"
#if 1
void CMStatImageDialog::OnSelendokChannelCombo()
{
	HandleChannelsMenu(IDC_ChannelCombo,
		kNoTransformation,
		(SInt16)gImageWindowInfoPtr->totalNumberChannels,
		2,
		TRUE);
	//m_channelsAllAvailableFlag);


}		// end "OnSelendokChannelCombo"

void CMStatImageDialog::OnClickUserSettingRadio()
{
	ShowDialogItem(this, IDC_MinPrompt);
	ShowDialogItem(this, IDC_StatisticMin);
	ShowDialogItem(this, IDC_MaxPrompt);
	ShowDialogItem(this, IDC_StatisticMax);

}

void CMStatImageDialog::OnClickIndividualRadio() {
	HideDialogItem(this, IDC_MinPrompt);
	HideDialogItem(this, IDC_StatisticMin);
	HideDialogItem(this, IDC_MaxPrompt);
	HideDialogItem(this, IDC_StatisticMax);
}

void CMStatImageDialog::OnClickOverallRadio() {
	HideDialogItem(this, IDC_MinPrompt);
	HideDialogItem(this, IDC_StatisticMin);
	HideDialogItem(this, IDC_MaxPrompt);
	HideDialogItem(this, IDC_StatisticMax);
}

#endif