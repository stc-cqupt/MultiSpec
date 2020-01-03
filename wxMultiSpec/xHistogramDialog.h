//	 									MultiSpec
//
//					Laboratory for Applications of Remote Sensing
//									Purdue University
//								West Lafayette, IN 47907
//								 Copyright (2009-2020)
//							(c) Purdue Research Foundation
//									All rights reserved.
//
//	File:						xHistogramDialog.h
//	Implementation:		xHistogramDialog.cpp
//
//	Authors:					Larry L. Biehl, Abdur Rahman Maud
//
//	Language:				C++
//
//	System:					Linux and MacOS Operating Systems
//
//	Brief description:	Header file for the CMHistogramSpecsDlg class
//
//	Written By:				Abdur Rahman Maud		Date: ??/??/2009
//	Revised By:				Larry L. Biehl			Date: 11/07/2019
//
//------------------------------------------------------------------------------------

#pragma once

#include "SMultiSpec.h"

#include "xDialog.h"
#include "wx/wx.h"


class CMHistogramSpecsDlg : public CMDialog
{
	DECLARE_DYNAMIC_CLASS (CMHistogramSpecsDlg)
		 // Construction
	public:
		 CMHistogramSpecsDlg (); // standard constructor
		 CMHistogramSpecsDlg (
		 		wxWindow* 							parent,
		 		wxWindowID 							id = wxID_ANY,
		 		const wxString& 					title =
													wxT("Set Histogram Specifications for:"));

		 ~CMHistogramSpecsDlg (void); // standard desctructor

		 Boolean DoDialog (
				HistogramSpecsPtr 				histogramSpecsPtr,
				WindowInfoPtr 						windowInfoPtr,
				FileInfoPtr 						fileInfoPtr);

		 SInt16 GetItemCode (
		 		wxString 							selection);


		 enum { IDD = IDD_HistogramSpecs };
	

		 // Implementation
	protected:
				// Generated message map functions
	
		void OnComputeOnly (
				wxCommandEvent& 					event);
	
		void OnDiskFile (
				wxCommandEvent& 					event);
	
		void OnEmptyBins (
				wxCommandEvent& 					event);
	
		void OnInitDialog (
				wxInitDialogEvent& 				event);

		void OnListHistogram (
				wxCommandEvent& 					event);
	
		void OnSelendokChannels (
				wxCommandEvent& 					event);
	
		void OnSelendokColumnLineFormat (
				wxCommandEvent& 					event);
	
		void OnSelendokMethod (
				wxCommandEvent& 					event);
	
		void OnTextWindow (
				wxCommandEvent& 					event);
		DECLARE_EVENT_TABLE ()

		void CheckWriteResultsToSettings (void);
	
		void CreateControls (void);

		void SetListAndEmptyBinsDialogBoxes (
				DialogPtr 							dialogPtr,
				Boolean 								minMaxetcOnlyFlag,
				Boolean 								listHistogramFlag,
				Boolean 								includeEmptyBinsFlag,
				Boolean 								lineFormatHistFlag);

		void ShowAreaHistogramItems (void);
	
		bool TransferDataFromWindow ();
	
		bool TransferDataToWindow ();

		Boolean UpdateAllChannelsAtOnceFlag (
				DialogPtr 							dialogPtr,
				SInt16 								numberChannels);

		void UpdateListAndEmptyBinsDialogBoxes (void);
	
	
		wxString 							m_fileName,
		 										m_supportFileName;
	
		FileInfoPtr 						m_fileInfoPtr;
		HistogramSpecsPtr 				m_histogramSpecsPtr;
		WindowInfoPtr 						m_windowInfoPtr;
	
		wxButton								*m_button26,
												*m_button27;
	
		wxCheckBox							*m_checkBox18,
												*m_checkBox19,
												*m_checkBox20,
												*m_checkBox21,
												*m_checkBox22,
		 										*m_checkBox23;
	
		wxComboBox							*m_comboBox19;
	
		#if defined multispec_wxmac
			wxChoice								*m_methodCtrl;
		#endif
	
		#if defined multispec_wxlin
			wxComboBox							*m_methodCtrl;
		#endif
	
		wxStaticText						*m_staticText60,
												*m_staticText62,
												*m_staticText63,
												*m_staticText64,
												*m_staticText65,
												*m_staticText66,
												*m_staticText77,
												*m_staticText78,
												*m_staticText79,
												*m_staticText80,
												*m_staticText81,
												*m_staticText94,
												*m_staticText95,
												*m_staticText96;
	
		int 									m_columnsLinesFormat,
		 										m_histogramMethod;
	
		SInt16 								m_histogramMethodCode;
	
		bool 									m_computeOnlyMinMaxFlag,
		 	 									m_diskFileFlag,
		 	 									m_includeEmptyBinsFlag,
		 	 									m_listHistogramSummaryFlag,
		 	 									m_listHistogramValuesFlag,
		 	 									m_textWindowFlag;

		Boolean 								m_allChannelsAtOnceFlag,
												m_defaultStatFileChangedFlag,
												m_initializedFlag,
												m_lineFormatOnlyFlag,
												m_updateListHistogramItemsFlag;

};	// end "class CMHistogramSpecsDlg"
