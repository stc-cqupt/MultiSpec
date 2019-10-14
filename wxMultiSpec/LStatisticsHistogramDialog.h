//	 									MultiSpec
//
//					Laboratory for Applications of Remote Sensing
//									Purdue University
//								West Lafayette, IN 47907
//								 Copyright (2009-2019)
//							(c) Purdue Research Foundation
//									All rights reserved.
//
//	File:						LStatisticsHistogramDialog.h
//	Implementation:		LStatisticsHistogramDialog.cpp
//
//	Authors:					Larry L. Biehl, Abdur Rahman Maud
//
//	Language:				C++
//
//	System:					Linux and MacOS Operating Systems
//
//	Brief description:	Header file for the CMStatHistogramSpecsDlg class
//
//	Written By:				Abdur Rahman Maud		Date: ??/??/2009
//	Revised By:				Larry L. Biehl			Date: 06/21/2017
//
//------------------------------------------------------------------------------------
//
#include "LDialog.h"

class CMStatHistogramSpecsDlg : public CMDialog
	{
			// Construction
	public:
				// standard constructor
		CMStatHistogramSpecsDlg (
				wxWindow* 					pParent = NULL,
		 		wxWindowID 					id = wxID_ANY,
		 		const wxString& 			title = wxT("StatHistogramSpecsDlg"));
		~CMStatHistogramSpecsDlg ();
	
		void OnInitDialog (wxInitDialogEvent& event);
		Boolean DoDialog (
				StatHistogramSpecsPtr	statHistogramSpecsPtr,
				FileInfoPtr   				fileInfoPtr);

		bool TransferDataToWindow ();
		bool TransferDataFromWindow ();

		enum { IDD = IDD_StatHistogram };
		Boolean	m_featureTransformationFlag;
		Boolean	m_includeEmptyBinsFlag;
		Boolean	m_blankValuesFlag;
		Boolean	m_overlayDensityFunctionFlag;
		SInt32	m_lineInterval;
		SInt32	m_columnInterval;

		Boolean	m_histogramClassFieldCode;
		Boolean     m_histogramClassCode;
		Boolean     m_histogramFieldCode;

		Boolean	m_listPlotCode;
		Boolean     m_listCode;
		Boolean     m_plotCode;

		Boolean	m_channelsClassesCode;
		Boolean	m_channelsCode;
		Boolean	m_classesCode;

		Boolean	m_matrixColumnCode;
		Boolean	m_matrixCode;
		Boolean	m_columnCode;

		int         m_channelSelection_Saved;

			// Implementation
	protected:
		void OnClassesRadio(wxCommandEvent& event);
		void OnFieldsRadio(wxCommandEvent& event);
		void OnListRadio(wxCommandEvent& event) ;
		void OnPlotRadio(wxCommandEvent& event);
		void OnChannelComboSelendok (wxCommandEvent& event);
		void OnFeatureTransformation(wxCommandEvent& event);

		void CreateControls();

		StatHistogramSpecsPtr 	m_statHistogramSpecsPtr;
		FileInfoPtr                 m_fileInfoPtr;
		SInt16			m_savedMatrixColumnCode;
		Boolean                     m_featureTransformAllowedFlag,
				m_overlayDFAllowedFlag;

		DECLARE_EVENT_TABLE();

		wxRadioButton*  m_radioBtn33;
		wxRadioButton*  m_radioBtn34;
		wxRadioButton*  m_radioBtn66;
		wxRadioButton*  m_radioBtn47;
		wxRadioButton*  m_radioBtn52;
		wxRadioButton*  m_radioBtn48;
		wxRadioButton*  m_radioBtn49;
		wxRadioButton*  m_radioBtn50;
		wxRadioButton*  m_radioBtn51;

		wxCheckBox*     m_checkBox73;
		wxCheckBox*     m_checkBox74;
		wxCheckBox*     m_checkBox75;
		wxCheckBox*     m_checkBox66;


		wxStaticText*   m_staticText290;
		wxStaticText*   m_staticText287;
		wxStaticText*   m_staticText288;
		wxStaticText*   m_staticText300;
		wxStaticText*   m_staticText301;
		wxStaticText*   m_staticText302;
		wxStaticText*   m_staticText303;

		wxTextCtrl*     m_textCtrl142;
		wxTextCtrl*     m_textCtrl143;
		wxComboBox*     m_comboBox36;

		wxButton*       m_button20;
		wxButton*       m_button21;
	
	};
