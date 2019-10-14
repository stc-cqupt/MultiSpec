//                               MultiSpec
//
//               Laboratory for Applications of Remote Sensing
//                         Purdue University
//                        West Lafayette, IN 47907
//                         Copyright (2009-2019)
//                     (c) Purdue Research Foundation
//                           All rights reserved.
//
//   File:                 LStatisticsDialog.cpp : class implementation file
//   Class Definition:     LStatisticsDialog.h
//
//   Authors:              Abdur Rahman Maud, Larry L. Biehl
//
//   Revision date:        10/14/2019
//
//   Language:					C++
//
//   System:               Linux and MacOS Operating Systems
//
//   Brief description:  	This file contains functions that relate to the
//                       	CMReformatTransformDlg class.
//
/* Template for debugging for MultiSpec Online on mygeohub.org.
	int numberChars = sprintf ((char*)&gTextString3,
								" LStatisticsDialog::xxx () %s",
								gEndOfLine);
	ListString ((char*)&gTextString3, numberChars, gOutputTextH);
*/
//------------------------------------------------------------------------------------

#include "SMultiSpec.h"

#include	"LChannelsDialog.h"
#include "LImageView.h"
#include "LStatisticsDialog.h"
#include "LStatisticsOptionsDialog.h"



BEGIN_EVENT_TABLE (CMStatisticsDialog, CMDialog)
	EVT_BUTTON (IDC_StatisticsOptions, CMStatisticsDialog::OnStatisticsOptions)
	//EVT_BUTTON (IDC_ChannelsSubset, CMStatisticsDialog::OnChannelsSubset)

	EVT_CHECKBOX (IDC_ShowClassNames, CMStatisticsDialog::OnShowClassNames)
	EVT_CHECKBOX (IDC_ShowFieldNames, CMStatisticsDialog::OnShowFieldNames)
	EVT_CHECKBOX (IDC_ShowTrainTestLabel, CMStatisticsDialog::OnShowTrainTestLabel)
	EVT_CHECKBOX (IDC_TestFields, CMStatisticsDialog::OnTestFields)
	EVT_CHECKBOX (IDC_TrainingFields, CMStatisticsDialog::OnTrainingFields)

	EVT_COMBOBOX (IDC_ChannelCombo, CMStatisticsDialog::OnChannelComboSelendok)
	EVT_COMBOBOX (IDC_ProjectChanges, CMStatisticsDialog::OnProjectChangesSelendok)
	EVT_COMBOBOX (IDC_TestMaskPopUp, CMStatisticsDialog::OnTestMaskComboSelendok)
	EVT_COMBOBOX (IDC_TrainMaskPopUp, CMStatisticsDialog::OnTrainMaskComboSelendok)

	EVT_COMBOBOX_CLOSEUP (IDC_ChannelCombo, CMStatisticsDialog::OnChannelComboCloseUp)

	EVT_COMBOBOX_DROPDOWN (IDC_ChannelCombo, CMStatisticsDialog::OnChannelComboDropDown)
	EVT_COMBOBOX_DROPDOWN (IDC_ProjectChanges, CMStatisticsDialog::OnProjectChangesDropDown)

	EVT_INIT_DIALOG (CMStatisticsDialog::OnInitDialog)
END_EVENT_TABLE()



CMStatisticsDialog::CMStatisticsDialog (
				wxWindow* 							pParent,
				wxWindowID 							id,
				const wxString& 					title)
		: CMDialog (CMStatisticsDialog::IDD, pParent, title)

{
   m_showFieldNames = FALSE;
   m_showTestFields = FALSE;
   m_showTrainingFields = FALSE;
   m_projectCommands = 0;
   m_showClassNames = FALSE;
   m_showTrainTestText = FALSE;
   m_outlineColorSelection = -1;
   m_testMaskCombo = -1;
   m_trainMaskCombo = -1;

   m_totalNumberChannels = 0;

   m_initializedFlag = CMDialog::m_initializedFlag;
   CreateControls();
   SetSizerAndFit (bSizer_v1);

}	// end "CMStatisticsDialog"



void CMStatisticsDialog::CreateControls (void)

{
	wxBoxSizer*							bSizer_v1h1;
	wxBoxSizer*							bSizer_v1h1v1;
	wxBoxSizer*							bSizer_v1h1v1h2;
   wxBoxSizer*							bSizer_v1h1v2h6;
   wxBoxSizer*							bSizer_v1h2;
   wxBoxSizer*							bSizer_v1h2v1;
	wxBoxSizer*							bSizer_v1h2v2;
   wxBoxSizer*							bSizer_v1h2v3;
   //wxBoxSizer*							bSizer_v1h3;
   //wxBoxSizer*							bSizer_v1h3h1;
	
	wxButton*							m_button_v1h1v1_3;

	wxCheckBox*							m_checkBox_v1h1v2_1;
	wxCheckBox*							m_checkBox_v1h1v2_2;
	wxCheckBox*							m_checkBox_v1h1v2_3;
	wxCheckBox*							m_checkBox_v1h1v2_4;
	wxCheckBox*							m_checkBox_v1h1v2_5;

	wxComboBox*							m_comboBox_v1h1v1_1;
	wxComboBox*							m_comboBox_v1h1v1h2_2;
	wxComboBox*							m_comboBox_v1h1v2h6_2;
	wxComboBox*							m_comboBox_v1h2v2_2;
	wxComboBox*							m_comboBox_v1h2v2_3;
	
   wxStaticBoxSizer*					sbSizer_v1h1v2;

	wxStaticText*						m_staticText_v1h1v1h2_1;
	wxStaticText*						m_staticText_v1h1v2h6_1;
	wxStaticText*						m_staticText_v1h2v1_1;
	wxStaticText*						m_staticText_v1h2v1_2;
	wxStaticText*						m_staticText_v1h2v1_3;
	wxStaticText*						m_staticText_v1h2v2_1;
	wxStaticText*						m_staticText_v1h2v3_1;

	wxTextCtrl*							m_textCtrl_v1h2v3_2;
	wxTextCtrl*							m_textCtrl_v1h2v3_3;


   this->SetSizeHints(wxDefaultSize, wxDefaultSize);

   bSizer_v1 = new wxBoxSizer (wxVERTICAL);

   bSizer_v1h1 = new wxBoxSizer (wxHORIZONTAL);

   bSizer_v1h1v1 = new wxBoxSizer (wxVERTICAL);

   m_comboBox_v1h1v1_1 = new wxComboBox (this,
   													IDC_ProjectChanges,
   													wxT("Combo!"),
   													wxDefaultPosition,
   													wxSize (160, -1),
   													0,
   													NULL,
   													wxCB_READONLY);
   m_comboBox_v1h1v1_1->Append (wxT("Project Changes"));
   m_comboBox_v1h1v1_1->Append (wxT("Clear Statistics..."));
   SetUpToolTip (m_comboBox_v1h1v1_1, IDS_ToolTip105);
   bSizer_v1h1v1->Add (m_comboBox_v1h1v1_1,
   							wxSizerFlags(0).Border(wxTOP|wxBOTTOM, 10));

   bSizer_v1h1v1h2 = new wxBoxSizer (wxHORIZONTAL);

   m_staticText_v1h1v1h2_1 = new wxStaticText (this,
   															wxID_ANY,
   															wxT("Channels to Use:"),
   															wxDefaultPosition,
   															wxDefaultSize,
   															0);
   m_staticText_v1h1v1h2_1->Wrap (-1);
   SetUpToolTip (m_staticText_v1h1v1h2_1, IDS_ToolTip8601);
   bSizer_v1h1v1h2->Add (m_staticText_v1h1v1h2_1,
   								wxSizerFlags(0).Center().Border(wxTOP|wxRIGHT|wxBOTTOM,5));

   m_comboBox_v1h1v1h2_2 = new wxComboBox (this,
   														IDC_ChannelCombo,
   														wxT("Combo!"),
   														wxDefaultPosition,
   														wxDefaultSize,
   														0,
   														NULL,
   														wxCB_READONLY);
   m_comboBox_v1h1v1h2_2->Append (wxT("All"));
   m_comboBox_v1h1v1h2_2->Append (wxT("Subset..."));
   SetUpToolTip (m_comboBox_v1h1v1h2_2, IDS_ToolTip8601);
   bSizer_v1h1v1h2->Add (m_comboBox_v1h1v1h2_2,
   								wxSizerFlags(0).Border(wxTOP|wxRIGHT|wxBOTTOM, 5));
	/*
	m_hiddenChannelSubset = new wxButton (this,
												IDC_ChannelsSubset,
												wxT("For Channel Subset Event"),
												wxDefaultPosition,
												wxDefaultSize,
												0);
   bSizer_v1h1v1h2->Add (m_hiddenChannelSubset, wxSizerFlags(0).Border(wxTOP|wxRIGHT|wxBOTTOM,5));
   m_hiddenChannelSubset->Show (false);
	*/
   bSizer_v1h1v1->Add (bSizer_v1h1v1h2,
   							wxSizerFlags(0).Expand().Border(wxTOP|wxBOTTOM,5));

   m_button_v1h1v1_3 = new wxButton (this,
   												IDC_StatisticsOptions,
   												wxT("Project Statistics Options..."),
   												wxDefaultPosition,
   												wxDefaultSize,
   												0);
   SetUpToolTip (m_button_v1h1v1_3, IDS_ToolTip106);
   bSizer_v1h1v1->Add (m_button_v1h1v1_3,
   							wxSizerFlags(0).Left().Border(wxTOP|wxRIGHT|wxBOTTOM, 10));

   bSizer_v1h1->Add (bSizer_v1h1v1, wxSizerFlags(0).Expand());

   sbSizer_v1h1v2 = new wxStaticBoxSizer (new wxStaticBox (
																		this,
																		wxID_ANY,
																		wxT("Outline selected areas:")),
															wxVERTICAL);

   m_checkBox_v1h1v2_1 = new wxCheckBox (sbSizer_v1h1v2->GetStaticBox (),
   													IDC_TrainingFields,
   													wxT("Training fields"),
   													wxDefaultPosition,
   													wxDefaultSize,
   													0);
   SetUpToolTip (m_checkBox_v1h1v2_1, IDS_ToolTip109);
   sbSizer_v1h1v2->Add (m_checkBox_v1h1v2_1, wxSizerFlags(0).Border(wxLEFT, 15));

   m_checkBox_v1h1v2_2 = new wxCheckBox (sbSizer_v1h1v2->GetStaticBox(),
   													IDC_TestFields,
   													wxT("Test Fields"),
   													wxDefaultPosition,
   													wxDefaultSize,
   													0);
   SetUpToolTip (m_checkBox_v1h1v2_2, IDS_ToolTip110);
   sbSizer_v1h1v2->Add (m_checkBox_v1h1v2_2, wxSizerFlags(0).Border(wxLEFT, 15));

   m_checkBox_v1h1v2_3 = new wxCheckBox (sbSizer_v1h1v2->GetStaticBox(),
   													IDC_ShowClassNames,
   													wxT("Show class names"),
   													wxDefaultPosition,
   													wxDefaultSize,
   													0);
   SetUpToolTip (m_checkBox_v1h1v2_3, IDS_ToolTip111);
   sbSizer_v1h1v2->Add (m_checkBox_v1h1v2_3, wxSizerFlags(0).Border(wxLEFT|wxTOP, 15));

   m_checkBox_v1h1v2_4 = new wxCheckBox (sbSizer_v1h1v2->GetStaticBox(),
   													IDC_ShowFieldNames,
   													wxT("Show field names"),
   													wxDefaultPosition,
   													wxDefaultSize,
   													0);
   SetUpToolTip (m_checkBox_v1h1v2_4, IDS_ToolTip112);
   sbSizer_v1h1v2->Add (m_checkBox_v1h1v2_4, wxSizerFlags(0).Border(wxLEFT, 15));

   m_checkBox_v1h1v2_5 = new wxCheckBox (sbSizer_v1h1v2->GetStaticBox(),
   													IDC_ShowTrainTestLabel,
   													wxT("Show Train/Test Label"),
   													wxDefaultPosition,
   													wxDefaultSize,
   													0);
   SetUpToolTip (m_checkBox_v1h1v2_5, IDS_ToolTip113);
   sbSizer_v1h1v2->Add (m_checkBox_v1h1v2_5,
									wxSizerFlags(0).Border(wxLEFT|wxRIGHT,15));

   bSizer_v1h1v2h6 = new wxBoxSizer (wxHORIZONTAL);

   m_staticText_v1h1v2h6_1 = new wxStaticText (sbSizer_v1h1v2->GetStaticBox(),
   															IDC_ColorPrompt,
   															wxT("Color:"),
   															wxDefaultPosition,
   															wxDefaultSize,
   															0);
   m_staticText_v1h1v2h6_1->Wrap (-1);
   bSizer_v1h1v2h6->Add (m_staticText_v1h1v2h6_1,
   								wxSizerFlags(0).Center().Border(wxLEFT, 20));

   m_comboBox_v1h1v2h6_2 = new wxComboBox (sbSizer_v1h1v2->GetStaticBox(),
   														IDC_ColorCombo,
   														wxT("Combo!"),
   														wxDefaultPosition,
   														wxSize (100, -1),
   														0,
   														NULL,
   														wxCB_READONLY);
   m_comboBox_v1h1v2h6_2->Append (wxT("Black"));
   m_comboBox_v1h1v2h6_2->Append (wxT("White"));
   SetUpToolTip (m_comboBox_v1h1v2h6_2, IDS_ToolTip114);
   bSizer_v1h1v2h6->Add (m_comboBox_v1h1v2h6_2, wxSizerFlags(0).Border(wxALL, 5));

   sbSizer_v1h1v2->Add (bSizer_v1h1v2h6,
								wxSizerFlags(0).Expand().Border(wxTOP|wxRIGHT|wxBOTTOM, 10));
	
   bSizer_v1h1->Add (sbSizer_v1h1v2, wxSizerFlags(0).Expand().Border(wxLEFT, 25));
	bSizer_v1->Add (bSizer_v1h1,
							wxSizerFlags(0).Expand().Border(wxLEFT|wxTOP|wxRIGHT, 12));
	

   bSizer_v1h2 = new wxBoxSizer (wxHORIZONTAL);
   bSizer_v1h2v1 = new wxBoxSizer (wxVERTICAL);

   m_staticText_v1h2v1_1 = new wxStaticText (this,
   														wxID_ANY,
   														wxEmptyString,
   														wxDefaultPosition,
   														wxSize(-1, 20),
   														0);
   bSizer_v1h2v1->Add (m_staticText_v1h2v1_1, wxSizerFlags(0).Left());

   m_staticText_v1h2v1_2 = new wxStaticText (this,
   														IDC_TrainMaskPrompt,
   														wxT("Training mask file: "),
   														wxDefaultPosition,
   														wxSize(-1, 28),
   														0);
   m_staticText_v1h2v1_2->Wrap (-1);
   SetUpToolTip (m_staticText_v1h2v1_2, IDS_ToolTip107);
   bSizer_v1h2v1->Add (m_staticText_v1h2v1_2, wxSizerFlags(0).Border(wxTOP, 12));
  
   m_staticText_v1h2v1_3 = new wxStaticText (this,
   														IDC_TestMaskPrompt,
   														wxT("Test mask file:"),
   														wxDefaultPosition,
   														wxSize (-1, 28),
   														0);
   m_staticText_v1h2v1_3->Wrap (-1);
   SetUpToolTip (m_staticText_v1h2v1_3, IDS_ToolTip108);
   bSizer_v1h2v1->Add (m_staticText_v1h2v1_3, wxSizerFlags(0).Border(wxTOP, 10));
	
   bSizer_v1h2->Add (bSizer_v1h2v1, wxSizerFlags(0).Expand().Left());

   bSizer_v1h2v2 = new wxBoxSizer (wxVERTICAL);
	
   m_staticText_v1h2v2_1 = new wxStaticText (this,
   														wxID_ANY,
   														wxEmptyString,
   														wxDefaultPosition,
   														wxSize (-1, 20),
   														0);
   bSizer_v1h2v2->Add (m_staticText_v1h2v2_1, wxSizerFlags(0).Left());

   m_comboBox_v1h2v2_2 = new wxComboBox (this,
   													IDC_TrainMaskPopUp,
   													wxT("Combo!"),
   													wxDefaultPosition,
   													wxSize (307, 28),
   													0,
   													NULL,
   													0);
   m_comboBox_v1h2v2_2->Append (wxT("None"));
   m_comboBox_v1h2v2_2->Append (wxT("Select mask image..."));
   SetUpToolTip (m_comboBox_v1h2v2_2, IDS_ToolTip107);
   bSizer_v1h2v2->Add (m_comboBox_v1h2v2_2, wxSizerFlags(0).Border(wxALL, 5));

   m_comboBox_v1h2v2_3 = new wxComboBox (this,
   													IDC_TestMaskPopUp,
   													wxT("Combo!"),
   													wxDefaultPosition,
   													wxSize (307, 28),
   													0,
   													NULL,
   													0);
   m_comboBox_v1h2v2_3->Append (wxT("None"));
   m_comboBox_v1h2v2_3->Append (wxT("Select mask image..."));
   SetUpToolTip (m_comboBox_v1h2v2_3, IDS_ToolTip108);
   bSizer_v1h2v2->Add (m_comboBox_v1h2v2_3, wxSizerFlags(0).Border(wxALL, 5));
	
   bSizer_v1h2->Add (bSizer_v1h2v2, wxSizerFlags(0).Expand().Left());

   bSizer_v1h2v3 = new wxBoxSizer (wxVERTICAL);
	
   m_staticText_v1h2v3_1 = new wxStaticText (this,
   														IDC_LayerPrompt,
   														wxT("Layer"),
   														wxDefaultPosition,
   														wxSize(60, 20),
   														0);
   bSizer_v1h2v3->Add (m_staticText_v1h2v3_1, wxSizerFlags(0).Left().Border(wxLEFT, 5));

   m_textCtrl_v1h2v3_2 = new wxTextCtrl (this,
   													IDC_TrainMaskLayer,
   													wxEmptyString,
   													wxDefaultPosition,
   													wxSize (60, 28),
   													0);
   bSizer_v1h2v3->Add (m_textCtrl_v1h2v3_2,
								0,
								wxALIGN_LEFT|wxALIGN_CENTER | wxLEFT|wxTOP|wxBOTTOM,
								5);
   m_textCtrl_v1h2v3_3 = new wxTextCtrl (this,
   													IDC_TestMaskLayer,
   													wxEmptyString,
   													wxDefaultPosition,
   													wxSize (60, 28),
   													0);
	bSizer_v1h2v3->Add (m_textCtrl_v1h2v3_3,
								0,
								wxALIGN_LEFT|wxALIGN_CENTER | wxLEFT|wxTOP|wxBOTTOM,
								5);
   bSizer_v1h2->Add (bSizer_v1h2v3, 0, wxEXPAND | wxLEFT, 0);
	
   bSizer_v1->Add (bSizer_v1h2,
   						wxSizerFlags(0).Expand().Border(wxLEFT|wxTOP|wxRIGHT, 12));

	CreateStandardButtons (bSizer_v1);

   this->SetSizer (bSizer_v1);
   this->Layout ();

   this->Centre (wxBOTH);

}	// end "CreateControls"



//------------------------------------------------------------------------------------
//								 Copyright (1988-2019)
//								(c) Purdue Research Foundation
//									All rights reserved.
//
//	Function name:		void DoDialog
//
//	Software purpose:	The purpose of this routine is to present the display
//							specification dialog box to the user and copy the
//							revised back to the display specification structure if
//							the user selected OK.
//
//	Parameters in:		None
//
//	Parameters out:	None
//
//	Value Returned:	None		
// 
//	Called By:			StatisticsDialog in SStatist.cpp
//
//	Coded By:			Abdur Rachman Maud	Date: ??/??/2015
//	Revised By:			Larry L. Biehl			Date: 06/21/2017	

SInt16 CMStatisticsDialog::DoDialog (
				SInt16*								featurePtr,
				SInt16								totalNumberChannels,
				Handle*								trainMaskFileInfoHandlePtr,
				Handle*								testMaskFileInfoHandlePtr)

{
	Boolean								continueFlag = FALSE;

   SInt16								returnCode,
											statisticsRequest;


			// Make sure intialization has been completed.

   if (!m_initializedFlag)
      return (FALSE);

   m_localFeaturesPtr = (UInt16*) featurePtr;
   m_totalNumberChannels = totalNumberChannels;
   m_trainMaskFileInfoHandle = *trainMaskFileInfoHandlePtr;
   m_testMaskFileInfoHandle = *testMaskFileInfoHandlePtr;

   returnCode = ShowModal ();

   if (returnCode == wxID_OK) 
		{
      statisticsRequest = 1;

      StatisticsDialogOK (m_channelSelection,
									m_totalNumberChannels,
									m_localActiveFeaturesPtr,
									m_localActiveNumberFeatures,
									m_showTrainingFields,
									m_showTestFields,
									m_showClassNames,
									m_showFieldNames,
									m_showTrainTestText,
									m_outlineColorSelection + 1,
									m_localStatCode,
									m_keepClassStatsFlag,
									m_variance,
									m_minLogDeterminant,
									m_useCommonCovarianceInLOOCFlag);

      continueFlag = TRUE;

		}	// end "if (returnCode == IDOK)"

   CheckAndUnlockHandle(gProjectInfoPtr->windowInfoHandle);

   *trainMaskFileInfoHandlePtr = m_trainMaskFileInfoHandle;
   *testMaskFileInfoHandlePtr = m_testMaskFileInfoHandle;

   return (continueFlag);

}	// end "DoDialog"



void CMStatisticsDialog::OnActivate (
				wxActivateEvent&								event)
{
	if (event.GetActive ())
		SetFocus ();
	
}	// end "OnActivate"



void CMStatisticsDialog::OnChannelComboDropDown (
				wxCommandEvent&					event) 
{
   UpdateAllSubsetList (IDC_ChannelCombo);

}	// end "OnChannelComboDropDown"



void CMStatisticsDialog::OnChannelComboSelendok (
				wxCommandEvent&					event)
{
   HandleChannelsMenu (IDC_ChannelCombo,
								kNoTransformation,
								m_totalNumberChannels,
								kImageChannelType,
								TRUE);
	
	//event.Skip (true);

}	// end "OnChannelComboSelendok"



void CMStatisticsDialog::OnInitDialog (
				wxInitDialogEvent&				event)
{
	SInt16								localChannelSelection,
											localLabelFieldCode,
											localOutlineColorSelection,
											localOutlineFieldType,
											localTestMaskCombo,
											localTrainMaskCombo;


   //CMDialog::OnInitDialog();

			// Initialize dialog variables.

	StatisticsDialogInitialize (this,
											m_totalNumberChannels,
											&m_localStatCode,
											&m_keepClassStatsFlag,
											&m_useCommonCovarianceInLOOCFlag,
											&m_variance,
											&m_minLogDeterminant,
											&localChannelSelection,
											&m_channelListType,
											m_localFeaturesPtr,
											&m_localNumberFeatures,
											&localOutlineFieldType,
											&localLabelFieldCode,
											&localOutlineColorSelection,
											&localTrainMaskCombo,
											&localTestMaskCombo,
											&m_maxNumberTrainLayers,
											&m_maxNumberTestLayers);

			// Set feature parameters

   m_localActiveNumberFeatures = m_localNumberFeatures;
   m_localActiveFeaturesPtr = m_localFeaturesPtr;
   m_channelSelection = localChannelSelection;

			// Outline training areas.

   m_showTrainingFields = (localOutlineFieldType & 0x0001);

			// Outline test areas.

   m_showTestFields = (localOutlineFieldType & 0x0002);

			// Put labels with the area outlines.

   m_showClassNames = (localLabelFieldCode & 0x0001);

   m_showFieldNames = FALSE;
   if (localLabelFieldCode & 0x0002)
      m_showFieldNames = TRUE;

   m_showTrainTestText = FALSE;
   if (localLabelFieldCode & 0x0004)
      m_showTrainTestText = TRUE;

   m_outlineColorSelection = localOutlineColorSelection;

			// Make the train and test mask combo variables to be 0 based.

   m_trainMaskCombo = localTrainMaskCombo - 1;
   m_testMaskCombo = localTestMaskCombo - 1;

			// Make the outline color combo variable to be 0 based.

   m_outlineColorSelection--;

			// Update the dialog box parameters and then center the dialog.

   if (TransferDataToWindow ())
      PositionDialogWindow ();

   SetOutlineAreaOptions ();

}	// end "OnInitDialog"



void CMStatisticsDialog::OnProjectChangesDropDown (
				wxCommandEvent&					event) 
{
   if (gProjectInfoPtr->statsLoaded || gProjectInfoPtr->pixelDataLoadedFlag)
		{
				// Make sure that the clear statistics command is in the list.

      wxComboBox* projchange = (wxComboBox*)FindWindow (IDC_ProjectChanges);
      if (projchange->GetCount() == 1)
         projchange->Append(wxT("Clear Statistics..."));

		}	// end "if (gProjectInfoPtr->statsLoaded || ..."

   else // !gProjectInfoPtr->statsLoaded && ...
		{
				// Make sure that the clear statistics command is not in the list.

      wxComboBox* projchange = (wxComboBox*)FindWindow (IDC_ProjectChanges);
      if (projchange->GetCount() == 2)
         projchange->Delete(1);

		}	// end "else !gProjectInfoPtr->statsLoaded && ..."

}	// end "OnProjectChangesDropDown"


void CMStatisticsDialog::OnProjectChangesSelendok (
				wxCommandEvent&					event)

{
   wxComboBox* projchange = (wxComboBox*)FindWindow (IDC_ProjectChanges);
   m_projectCommands = projchange->GetSelection();

   if (m_projectCommands == 1) 
		{
      SInt16 returnCode = m_channelListType;
      if (ProjectMenuClearStatistics())
         returnCode = 1;

				// If project stats were cleared, then reload the local	
				// feature vector to include all channels.					

      if (m_channelListType == kSelectedItemsListOnly && returnCode == 1) 
			{
         SInt16 index;

         m_channelListType = 1;
         m_channelSelection = kAllMenuItem;
         for (index=0; index<gProjectInfoPtr->numberStatisticsChannels; index++)
            m_localFeaturesPtr[index] = index;
         m_localActiveNumberFeatures = gProjectInfoPtr->numberStatisticsChannels;

         UpdateAllSubsetList (IDC_ChannelCombo);

			wxComboBox* channsel = (wxComboBox*)FindWindow(IDC_ChannelCombo);
         channsel->SetSelection (m_channelSelection);
			
			}	// end "if (m_channelListType == ..."

      m_projectCommands = 0;
      projchange->SetSelection (m_projectCommands);
		
		}	// end "if (m_projectCommands == 1)"

}	// end "OnProjectChangesSelendok"



void CMStatisticsDialog::OnShowClassNames (
				wxCommandEvent&					event) 
{
   wxCheckBox* classname = (wxCheckBox*) FindWindow(IDC_ShowClassNames);
   m_showClassNames = classname->GetValue();

}	// end "OnShowClassNames"



void CMStatisticsDialog::OnShowFieldNames (
				wxCommandEvent&					event) 
{
   wxCheckBox* fieldname = (wxCheckBox*) FindWindow(IDC_ShowFieldNames);
   m_showFieldNames = fieldname->GetValue();

}	// end "OnShowFieldNames" 



void CMStatisticsDialog::OnShowTrainTestLabel (
				wxCommandEvent&					event) 
{
   wxCheckBox* traintest = (wxCheckBox*) FindWindow(IDC_ShowTrainTestLabel);
   m_showTrainTestText = traintest->GetValue();
	
}	// end "OnShowTrainTestLabel" 



void CMStatisticsDialog::OnStatisticsOptions (
				wxCommandEvent&					event) 
{
   SetDLogControlHilite (NULL, wxID_OK, 255);

   StatisticsOptionsDialog (&m_localStatCode,
										&m_keepClassStatsFlag,
										&m_variance,
										&m_minLogDeterminant,
										&m_useCommonCovarianceInLOOCFlag);

   SetDLogControlHilite (NULL, wxID_OK, 0);

}	// end "OnStatisticsOptions" 



void CMStatisticsDialog::OnTestFields (
				wxCommandEvent&					event) 
{
   wxCheckBox* testfield = (wxCheckBox*) FindWindow(IDC_TestFields);
   m_showTestFields = testfield->GetValue();
   SetOutlineAreaOptions();

}	// end "OnTestFields"



void CMStatisticsDialog::OnTestMaskComboSelendok (
				wxCommandEvent&					event)
{
	SInt16								itemHit,
											savedTestMaskCombo;


   savedTestMaskCombo = m_testMaskCombo;

   wxComboBox* testmask = (wxComboBox*)FindWindow (IDC_TestMaskPopUp);
   m_testMaskCombo = testmask->GetSelection();

   if (m_testMaskCombo >= 0)
		{
      itemHit = StatisticsDialogSelectMaskItem (
								&m_testMaskFileInfoHandle,
								this,
								NULL,
								m_testMaskCombo + 1,
								savedTestMaskCombo + 1,
								IDS_FileIO96,
								IDC_TestMaskPopUp,
								IDC_TestMaskLayer,
								&m_maxNumberTestLayers);

      m_testMaskCombo = itemHit - 1;

      testmask->SetSelection(m_testMaskCombo);
		
		if (m_trainMaskCombo != 0 ||  m_testMaskCombo != 0)
			ShowDialogItem (this, IDC_LayerPrompt);
		else
			HideDialogItem (this, IDC_LayerPrompt);

		}	// end "if (m_testMaskCombo >= 0)"

}	// end "OnTestMaskComboSelendok"
   


void CMStatisticsDialog::OnTrainingFields (
				wxCommandEvent&					event) 
{
   wxCheckBox* trainfield = (wxCheckBox*) FindWindow(IDC_TrainingFields);
   m_showTrainingFields = trainfield->GetValue();

   SetOutlineAreaOptions();

}	// end "OnTrainingFields"



void CMStatisticsDialog::OnTrainMaskComboSelendok (
				wxCommandEvent&					event)
{
	SInt16								itemHit,
											savedTrainMaskCombo;


   savedTrainMaskCombo = m_trainMaskCombo;

   wxComboBox* trainmask = (wxComboBox*)FindWindow (IDC_TrainMaskPopUp);
   m_trainMaskCombo = trainmask->GetSelection();

   if (m_trainMaskCombo >= 0)
		{
      itemHit = StatisticsDialogSelectMaskItem (&m_trainMaskFileInfoHandle,
																this,
																NULL,
																m_trainMaskCombo + 1,
																savedTrainMaskCombo + 1,
																IDS_FileIO95,
																IDC_TrainMaskPopUp,
																IDC_TrainMaskLayer,
																&m_maxNumberTrainLayers);

      m_trainMaskCombo = itemHit - 1;

      trainmask->SetSelection (m_trainMaskCombo);
		
		if (m_trainMaskCombo != 0 ||  m_testMaskCombo != 0)
			ShowDialogItem (this, IDC_LayerPrompt);
		else
			HideDialogItem (this, IDC_LayerPrompt);
		
		//SetFocus ();
		//Activate (true);
		/*
		wxWindow* dialogObject = FindWindow (wxID_OK);
		if (dialogObject != NULL)
			dialogObject->SetFocus ();
		*/
		}	// end "if (m_trainMaskCombo >= 0)"

}	// end "OnTrainMaskComboSelendok"



void CMStatisticsDialog::SetOutlineAreaOptions (void)
{
   if (m_showTrainingFields || m_showTestFields) 
		{
      wxCheckBox* classname = (wxCheckBox*) FindWindow(IDC_ShowClassNames);
      wxCheckBox* showlabel = (wxCheckBox*) FindWindow(IDC_ShowTrainTestLabel);
      wxCheckBox* fieldname = (wxCheckBox*) FindWindow(IDC_ShowFieldNames);
      classname->SetValue(m_showClassNames);
      showlabel->SetValue(m_showTrainTestText);
      fieldname->SetValue(m_showFieldNames);

      SetDLogControlHilite(this, IDC_ShowClassNames, 0);
      SetDLogControlHilite(this, IDC_ShowFieldNames, 0);
      SetDLogControlHilite(this, IDC_ShowTrainTestLabel, 0);

      ShowDialogItem (this, IDC_ColorPrompt);
      ShowDialogItem (this, IDC_ColorCombo);

		}	// end "if (m_showTrainingFields || m_showTestFields)"

   else // !m_showTrainingFields && !m_showTestFields 
		{
      wxCheckBox* classname = (wxCheckBox*) FindWindow(IDC_ShowClassNames);
      wxCheckBox* showlabel = (wxCheckBox*) FindWindow(IDC_ShowTrainTestLabel);
      wxCheckBox* fieldname = (wxCheckBox*) FindWindow(IDC_ShowFieldNames);
      classname->SetValue (false);
      showlabel->SetValue (false);
      fieldname->SetValue (false);

      SetDLogControlHilite (this, IDC_ShowClassNames, 255);
      SetDLogControlHilite (this, IDC_ShowFieldNames, 255);
      SetDLogControlHilite (this, IDC_ShowTrainTestLabel, 255);

      HideDialogItem (this, IDC_ColorPrompt);
      HideDialogItem (this, IDC_ColorCombo);

		}	// end "else !m_showTrainingFields && !m_showTestFields"

}	// end "SetOutlineAreaOptions"



bool CMStatisticsDialog::TransferDataFromWindow ()
{
	SInt16								itemHit = 1;
	
	UInt16								testLayerNumber,
											trainLayerNumber;
											
											
   wxCheckBox* fieldname = (wxCheckBox*)FindWindow(IDC_ShowFieldNames);
   wxCheckBox* testfield = (wxCheckBox*)FindWindow(IDC_TestFields);
   wxCheckBox* trainfield = (wxCheckBox*)FindWindow(IDC_TrainingFields);
   wxCheckBox* classname = (wxCheckBox*)FindWindow(IDC_ShowClassNames);
   wxCheckBox* showlabel = (wxCheckBox*)FindWindow(IDC_ShowTrainTestLabel);

   wxComboBox* projchange = (wxComboBox*)FindWindow(IDC_ProjectChanges);
   wxComboBox* colorcombo = (wxComboBox*)FindWindow(IDC_ColorCombo);
   wxComboBox* channelcb = (wxComboBox*)FindWindow(IDC_ChannelCombo);
   wxComboBox* testmask = (wxComboBox*)FindWindow(IDC_TestMaskPopUp);
   wxComboBox* trainmask = (wxComboBox*)FindWindow(IDC_TrainMaskPopUp);

   m_showFieldNames = fieldname->GetValue();
   m_showTestFields = testfield->GetValue();
   m_showTrainingFields = trainfield->GetValue();
   m_showClassNames = classname->GetValue();
   m_showTrainTestText = showlabel->GetValue();

   m_projectCommands = projchange->GetSelection();
   m_outlineColorSelection = colorcombo->GetSelection();
   m_channelSelection = channelcb->GetSelection();
   m_testMaskCombo = testmask->GetSelection();
   m_trainMaskCombo = trainmask->GetSelection();

			// Check channels used for train and test mask

	trainLayerNumber = 1;
	if (m_trainMaskCombo == 2 && m_maxNumberTrainLayers > 1)
		{
		itemHit = CheckMaxValue (this,
										  IDC_TrainMaskLayer,
										  1,
										  m_maxNumberTrainLayers,
										  kDisplayRangeAlert);
											  
		trainLayerNumber =  GetDItemValue (this, IDC_TrainMaskLayer);
											  
		}	// end "if (itemHit == 1 && gMaskTrainImageSelection == 3 && ..."
											  
	testLayerNumber = 1;
	if (itemHit == 1 && m_testMaskCombo == 2 && m_maxNumberTestLayers > 1)
		{
		itemHit = CheckMaxValue (this,
										  IDC_TestMaskLayer,
										  1,
										  m_maxNumberTestLayers,
										  kDisplayRangeAlert);	
											  
		testLayerNumber =  GetDItemValue (this, IDC_TestMaskLayer);
					
		}	// end "if (itemHit == 1 && gMaskTestImageSelection == 3 && ..."

	if (itemHit == 1)
		itemHit = StatisticsDialogMaskCheck (
									m_trainMaskFileInfoHandle,
									m_testMaskFileInfoHandle,
									m_trainMaskCombo + 1,
									m_testMaskCombo + 1,
									trainLayerNumber,
									testLayerNumber);

   if (itemHit == 1)
      return true;
   else
      return false;
		
}	// end "TransferDataFromWindow"



bool CMStatisticsDialog::TransferDataToWindow ()
{
   wxCheckBox* testfield = (wxCheckBox*) FindWindow(IDC_TestFields);
   wxCheckBox* trainfield = (wxCheckBox*) FindWindow(IDC_TrainingFields);
   wxCheckBox* classname = (wxCheckBox*) FindWindow(IDC_ShowClassNames);
   wxCheckBox* showlabel = (wxCheckBox*) FindWindow(IDC_ShowTrainTestLabel);
   wxCheckBox* fieldname = (wxCheckBox*) FindWindow(IDC_ShowFieldNames);

   wxComboBox* projchange = (wxComboBox*) FindWindow(IDC_ProjectChanges);
   wxComboBox* colorcombo = (wxComboBox*) FindWindow(IDC_ColorCombo);
   wxComboBox* channelcb = (wxComboBox*) FindWindow(IDC_ChannelCombo);
   wxComboBox* testmask = (wxComboBox*) FindWindow(IDC_TestMaskPopUp);
   wxComboBox* trainmask = (wxComboBox*) FindWindow(IDC_TrainMaskPopUp);

   testfield->SetValue(m_showTestFields);
   trainfield->SetValue(m_showTrainingFields);
   classname->SetValue(m_showClassNames);
   showlabel->SetValue(m_showTrainTestText);
   fieldname->SetValue(m_showFieldNames);

   projchange->SetSelection(m_projectCommands);
   colorcombo->SetSelection(m_outlineColorSelection);
   channelcb->SetSelection(m_channelSelection);
   testmask->SetSelection(m_testMaskCombo);
   trainmask->SetSelection(m_trainMaskCombo);

   return true;
	
}	// end "TransferDataToWindow"
