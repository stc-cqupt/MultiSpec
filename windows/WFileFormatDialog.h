//	 									MultiSpec
//
//					Laboratory for Applications of Remote Sensing
//									Purdue University
//								West Lafayette, IN 47907
//								 Copyright (1995-2020)
//							(c) Purdue Research Foundation
//									All rights reserved.
//
//	File:						WFileFormatDialog.h
//	Implementation:		WFileFormatDialog.cpp
//
//	Authors:					Larry L. Biehl
//
//	Language:				C++
//
//	System:					Windows Operating System
//
//	Brief description:	Header file for the CMFileFormatSpecsDlg class.
//
//	Written By:				Larry L. Biehl			Date: ??/??/1995?
//	Revised By:				Larry L. Biehl			Date: 12/12/2019
//
//------------------------------------------------------------------------------------

#pragma once
	     
#include "WDialog.h"


class CMFileFormatSpecsDlg : public CMDialog
{
	// Construction
	public:
		CMFileFormatSpecsDlg (	// standard constructor
				CWnd* 								pParent = NULL);
			
		Boolean DoDialog (
				Handle								fileInfoHandle,
				Handle								windowInfoHandle,
				Handle*								mapInformationHandlePtr,
				Handle*								hfaHandlePtr,
				Handle*								newChannelToHdfDataSetHandlePtr,
				Boolean*								parameterChangedFlagPtr);

		// Dialog Data
		//{{AFX_DATA (CMFileFormatSpecsDlg)
		enum { IDD = IDD_FileFormatSpecs };
	
		CString								m_imageName;
	
		double								m_fillDataValue;
	
		SInt32								m_startColumnNumber,
												m_startLineNumber;
	
		UInt32								m_blockHeight,
												m_blockWidth,
												m_headerBytes,
												m_numberChannels,
												m_numberColumns,
												m_numberLines,
												m_postChannelBytes,
												m_postLineBytes,
												m_preChannelBytes,
												m_preLineBytes,
												m_trailerBytes;
	
		int									m_bandInterleave,
												m_collapseClassSelection,
												m_dataValueType,
												m_hdfDataSetSelection;
	
		BOOL									m_computeNumClasses,
												m_fillDataValueExistsFlag,
												m_linesBottomToTopFlag,
												m_swapBytesFlag;
		//}}AFX_DATA
		
		int			m_eightBitsPerDataSelection;

	// Implementation
	protected:
		virtual void DoDataExchange (
				CDataExchange* 					pDX);	// DDX/DDV support

		// Generated message map functions
		//{{AFX_MSG (CMFileFormatSpecsDlg)
		afx_msg void OnBnClickedFillDataValueExists ();
	
		afx_msg void OnBnClickedHdfdatasethelp ();
	
		afx_msg void OnBnClickedLinebottomtotop ();
	
		afx_msg void OnDetermineNumClasses ();
	
		virtual BOOL OnInitDialog ();
	
		afx_msg void OnPaint ();
	
		afx_msg void OnSelendokBandInterleave ();
	
		afx_msg void OnSelendokDataValueType ();
	
		afx_msg void OnSelendokHDFDataSet ();
	
		afx_msg void OnStnClickedHdfdatasetprompt ();
		//}}AFX_MSG
		DECLARE_MESSAGE_MAP ()
	
	
		FileInfoPtr							m_fileInfoPtr;
		WindowInfoPtr						m_windowInfoPtr;
	
		Handle								m_fileInfoHandle,
												m_hfaHandle,
												m_mapInformationHandle,
												m_newChannelToHdfDataSetHandle,
												m_windowInfoHandle;
	
		UInt32								m_maxNumberChannelsClasses;

		SInt16								m_dataSetIndex,
												m_gdalDataTypeCode;

		UInt16								m_dataCompressionCode;
	
		Boolean								m_callGetHDFLineFlag,
												m_forceGroupTableUpdateFlag,
												m_initializedFlag,
												m_showMessagesFlag;
	
};	// end class CMFileFormatSpecsDlg
