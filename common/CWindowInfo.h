//	 									MultiSpec
//
//					Laboratory for Applications of Remote Sensing
//									Purdue University
//								West Lafayette, IN 47907
//							 Copyright (1988-2019)
//						(c) Purdue Research Foundation
//								All rights reserved.
//
//	File:						CWindowInfo.h
//	Implementation:		CWindowInfo.cpp
//
//	Authors:					Larry L. Biehl
//
//	Revision date:			08/20/2019
//
//	Language:				C++
//
//	System:					Linux, MacOS, and Windows Operating Systems
//
//	Brief description:	This file is the definition for the CMWindowInfo class.
//
//------------------------------------------------------------------------------------

#if !defined __MWININFO_H__  
	#define __MWININFO_H__ 

class	CMWindowInfo
	{
	public:
									CMWindowInfo ();						// constructor
									
									CMWindowInfo (							// constructor
										Handle								fileInfoHandle);
										
		virtual 					~CMWindowInfo ();		// destructor stubBoolean
		
		Handle 					GetWindowInfoHandle (void);
										
		void						ReleaseOffscreenSupportMemory (void);

		void						SetImageWindowCPtrInWindowInfo (
										CMImageWindow*						imageWindowCPtr);
		
		Boolean					m_initializedFlag; 
	
	protected:
		Handle					m_windowInfoHandle;
		
	};
#endif	// !defined __MWININFO_H__ 
