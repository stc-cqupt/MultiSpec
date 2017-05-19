//------------------------------------------------------------------------------------
//
//	SProtype.h
//	
//	(C) Copyright Purdue Research Foundation 1988-2017.  All rights reserved.
//	
//	Header file for MultiSpec which contain the function prototype information.
//	
//	Written 03/29/1988 by Larry L. Biehl
//	Revised 03/22/2017 by Larry L. Biehl
// Revised 06/24/2013 by Abdur Maud
// Revised 09/23/2015 by Tsung Tai Yeh
//	
//------------------------------------------------------------------------------------

#ifndef __SPROTOTYPE__
#define __SPROTOTYPE__

#include "SGraphic.h"

#if defined multispec_lin
	#include <wx/docview.h>
#endif

		// Function Prototypes for those routines that are called by routines
		// in other files.

//-----------------------------------------------------------------------------
#if defined multispec_lin
	#include <wx/combobox.h>
	#include <wx/panel.h>

	//		Linux Routines  in CStubs.cpp
	extern void	AnimateEntry (
					CMPaletteInfo						paletteObject,
					UInt16								startIndex,
					RGBColor*							newRGBColorPtr);

	extern void AppendMenu (
					MenuHandle							menuHandle,
					Str255								textString);

	extern void AreasToThematicFileControl (void);

	extern void BlockMove(
			  const void *textStringPtr,
			  void *textString2Ptr,
			  UInt32 numberBytes);

	extern void BlockMoveData(
			  const void* inStringPtr,
			  void* outStringPtr,
			  UInt32 numberBytes);

	extern Boolean ChangeImageFormatDialog(
			  FileInfoPtr fileInfoPtr,
			  FileInfoPtr outFileInfoPtr,
			  ReformatOptionsPtr reformatOptionsPtr);

	extern Boolean ChangeProjectChannelsList(
			  SInt16 numberChannels);

	extern SInt16 CharWidth(
			  char character);

	extern Boolean CheckSomeEvents(
			  SInt16 code);

	extern void ClipRect(
			  Rect* clipRectanglePtr);

	extern void CloseGraphicsWindow(
			  WindowPtr theWindow);

	extern void CloseWindow(
			  WindowPtr windowPtr);

	extern Boolean CopyFileInfoFromProject(
			  Handle fileInfoHandle);

	extern SInt16 CountMenuItems(
			  MenuHandle menuHandle);

	extern void CovertMultispectralToThematicControl(
			  WindowInfoPtr inputWindowInfoPtr);

	extern void CTab2Palette(
			  CTabHandle cTableHandle,
			  CMPaletteInfo paletteObject,
			  SInt16 useage,
			  SInt16 srcTolerance);

	extern void DeactivateProject(void);

	extern void DecisionTreeControl(
			  FileInfoPtr fileInfoPtr);

	extern void DeleteMenuItem(
			  MenuHandle menuHandle,
			  SInt16 itemNumber);

	extern void DisableItem(
			  MenuHandle menuHandle,
			  SInt16 itemNumber);

	extern void DisplayPImage(
			  DisplaySpecsPtr displaySpecsPtr);

	extern void DisposePalette(
			  PaletteHandle resourcePHandle);

	extern void DisposeRgn(
			  RgnHandle rgnHandle);

	extern void DrawDialog(
			  DialogPtr dialogPtr);

	extern void EllipsePlotV(
			  GraphPtr graphRecPtr,
			  SInt32* error);

	extern void EnableItem(
			  MenuHandle menuHandle,
			  SInt16 itemNumber);

	extern void EraseRect(
			  Rect* rectPtr);

	extern Boolean FindProjectImageWindows(
			  Boolean loadFileAndLayerInfoFlag);

	extern void ForceFieldOutlineUpdate(
			  Boolean forceFlag);

	extern void ForeColor(
			  SInt16 color);

	extern WindowPtr FrontWindow(void);

	extern void GetBiPlotGraphTitle(
			  GraphPtr graphRecordPtr);

	extern SInt32 GetCTSeed(void);

	extern void GetDialogItem(
			  DialogPtr dialogPtr,
			  SInt16 itemNumber,
			  SInt16* theTypePtr,
			  Handle* theHandlePtr,
			  Rect* theBoxPtr);

	extern DialogPtr GetDialogWindow(
			  DialogPtr windowPtr);

	extern Boolean GetEigenStatisticsFeatures(
			  SInt16* statEigenFeaturePtr);

	extern void GetEntryColor(
			  CMPaletteInfo srcPalette,
			  SInt16 srcEntry,
			  RGBColor* dstRGBPtr);

	extern void GetFieldNameWithType(
			  SInt16 field,
			  Str255* stringPtr);

//	extern FileStringPtr GetFileNamePPointer(
//				ProjectInfoPtr						projectInfoPtr,
//				Boolean								returnASCIIFlag);

	extern CMPaletteInfo GetNewPalette(
			  SInt16 paletteId);

	extern SInt16 GetOffscreenForNonGWorld(
			  DisplaySpecsPtr displaySpecsPtr,
			  Rect* rectPtr);

	extern SInt16 GetPopUpMenuBitsPerDataValue(void);

	extern void GetPort(
			  GrafPtr* savedPortPtr);

	extern void GetProjectSelectionWindow(void);

	extern SInt16 HandToHand(
			  Handle* handle);

	extern void HideDialogItem(
			  DialogPtr dialogPtr,
			  SInt16 itemNumber);

	extern void HiliteControl(
			  ControlHandle controlHandle,
			  SInt16 hiliteCode);

	extern void InvalWindowRect(
			  WindowPtr windowPtr,
			  Rect* invalRectanglePtr);

	extern void LActivate(
			  Boolean flag,
			  CListBox* listBoxCPtr);

	extern SInt16 LAddRow(
			  SInt16 numberRows,
			  SInt16 startRow,
			  CListBox* listBoxCPtr);

	extern SInt16 LAddRow(
			  SInt16 numberRows,
			  SInt16 startRow,
			  wxListBox* listBoxCPtr);

	extern void LAutoScroll(
			  wxListBox* listBoxCPtr);

	extern void LSetCell(
			  Ptr dataPtr,
			  SInt16 dataLength,
			  Cell cell,
			  wxListBox* listBoxCPtr);

	extern void LSetDrawingMode(
			  Boolean flag,
			  wxListBox* listBoxCPtr);

	extern void LSetSelect(
			  Boolean setItFlag,
			  Cell cell,
			  wxListBox* listBoxCPtr);

	extern void LAutoScroll(
			  CListBox* listBoxCPtr);

	extern Boolean LClick(
			  Point location,
			  SInt16 modifiers,
			  CListBox* listHandle);

	extern void LDelRow(
			  SInt16 numberRows,
			  SInt16 startRow,
			  CListBox* listBoxCPtr);

	extern void LDelRow(
			  SInt16 numberRows,
			  SInt16 startRow,
			  wxListBox* listBoxCPtr);

	extern void LDispose(
			  CListBox* listBoxCPtr);

	extern void LGetCell(
			  char* stringPtr,
			  SInt16* stringLengthPtr,
			  Cell cell,
			  CListBox* listBoxCPtr);
	extern void LGetCell(
			  char* stringPtr,
			  SInt16* stringLengthPtr,
			  Cell cell,
			  wxListBox* listBoxCPtr);

	extern Boolean LGetSelect(
			  Boolean nextFlag,
			  Cell* cellPtr,
			  CListBox* listBoxCPtr);
	extern Boolean LGetSelect(
			  Boolean nextFlag,
			  Cell* cellPtr,
			  wxListBox* listBoxCPtr);

	extern void LSetCell(
			  Ptr dataPtr,
			  SInt16 dataLength,
			  Cell cell,
			  CListBox* listBoxCPtr);

	extern void LSetCell(
			  int mvindex,
			  int targetindex,
			  CListBox* listBoxCPtr);

	extern void LSetDrawingMode(
			  Boolean flag,
			  CListBox* listBoxCPtr);

	extern void LSetSelect(
			  Boolean setItFlag,
			  Cell cell,
			  CListBox* listBoxCPtr);

	extern void MosaicImagesSideBySideControl(void);

	extern void NewFieldStatMode(void);

	extern RgnHandle NewRgn(void);

	extern void OpenProjectImageWindow(void);

	extern Boolean PixMap32Bit(
			  Handle offScreenPixMapH);

	extern Boolean PtInRgn(
			  Point point,
			  RgnHandle rgnHandle);

	extern void RectifyImageControl(void);

	extern SInt16 ReformatDialog(
			  SInt16* channelDescriptionRequestPtr);

	extern void ReleaseResource(
			  Handle handle);

	extern SInt16 ResError(void);

	extern short int SaveProjectFile(
			  SInt16 saveCode);

	extern void SelectDialogItemText(
			  DialogPtr dialogPtr,
			  SInt16 itemNumber,
			  SInt16 startSelection,
			  SInt16 endSelection);

	extern void SetControlValue(
			  ControlHandle controlHandle,
			  SInt16 setting);

	extern void SetDialogItemText(
			  Handle theHandle,
			  ConstStr255Param textStringPtr);

	extern void SetEntryUsage(
			  CMPaletteInfo paletteObject,
			  SInt16 paletteIndex,
			  SInt16 srcUsage,
			  SInt16 srcTolerance);

	extern void SetFileReadOnly(
			  FileInfoPtr fileInfoPtr);

	extern void SetMenuItemText(
					MenuHandle								menuHandle,
					SInt16									menuItem,
					UCharPtr									stringPtr);

	extern void SetPalette(
			  WindowPtr windowPtr,
			  CMPaletteInfo paletteObject,
			  Boolean activateFlag);

	extern void SetPort(
			  DialogPtr dialogPtr);

	extern void SetPort(
			  GrafPtr windowPtr);

	extern void SetPort(
			  WindowPtr windowPtr);

	extern void SetPortDialogPort(
			  DialogPtr dialogPtr);

	extern void SetPortWindowPort(
			  WindowPtr windowPtr);


	extern void SetWTitle(
			  DialogPtr dialogPtr,
			  unsigned char* textStringPtr);

	extern void ShowDialogItem(
			  DialogPtr dialogPtr,
			  SInt16 itemNumber);

	extern void ShowDialogWindow(
			  DialogPtr dialogPtr,
			  SInt16 dialogID,
			  Boolean setUpFilterTableFlag);

	extern void ShowSelection(
			  Handle windowInfoHandle);

	extern void ShowSelection(
			  WindowPtr windowPtr);

	extern void ShowStatusDialogItemSet(
			  SInt16 setNumber);

	extern void ShowStatusDialogWindow(
			  SInt16 statusInfoID);

	extern SInt16 SetThreadState(
			  UInt32 asyncIOThread,
			  SInt16 threadState,
			  UInt32 IOThread);

	extern SInt16 StatHistogramPopUpMenu(
			  SInt16 statsWindowMode);

	extern Boolean StillDown(void);

	extern SInt16 StringWidth(
			  UCharPtr stringPtr);

	extern void SysBeep(
			  SInt16 beepLength);

	extern void UnloadSeg(
			  Ptr funtionPointer);

	extern void UpdateImageZoomControls(
			  WindowPtr theWindow,
			  double magnification,
			  Boolean updateZoomsFlag);

	extern void UpdateOutputWScrolls(
			  WindowPtr theWindow,
			  SInt16 scrollToSelStart,
			  Boolean displayMessageFlag);

	extern void UpdateOverlayControl(
			  WindowPtr theWindow);

	extern void ValidRect(
			  Rect* rectPtr);

	extern SInt16 YieldToThread(
			  UInt32 wakeUpThread);

	//			end CStubs.cpp 


	//		Linux Routines  in CUtility.c
	extern void CopyOffScreenImage(
			  CMImageView *imageViewCPtr,
			  CDC* pDC,
			  CMImageWindow *imageWindowCPtr,
			  RgnHandle invalidRgn,
			  Rect *inSourceRect,
			  SInt16 copyType);

	extern void CreateClassNameComboBoxList(
			  wxComboBox* comboBoxCPtr);

	extern SInt16 GetComboListSelection(
			  wxWindow* cWindowPtr,
			  UInt16 dialogItemNumber,
			  SInt32 selectedListItemData);

	extern void GetFieldBoundary(
			  ProjectInfoPtr classProjectInfoPtr,
			  AreaDescriptionPtr areaDescriptionPtr,
			  SInt16 fieldNumber);

	extern void GetImageClipRectangle(
			  CMImageView* imageViewCPtr,
			  Boolean imageOnlyFlag,
			  Rect* outRect);

	extern void GetMenuItemText(
			  MenuHandle menuHandle,
			  SInt16 menuItem,
			  UCharPtr stringPtr);

	extern UInt16 GetPopUpMenuBitsPerDataValue(
			  UInt16 bitsPerDataValueSelection);

	extern void GetProjectStatisticsPointers(
			  SInt16 classFieldCode,
			  SInt32 storageIndex,
			  HChannelStatisticsPtr* chanStatsPtrPtr,
			  HSumSquaresStatisticsPtr* sumSquaresStatsPtrPtr,
			  HChannelStatisticsPtr* modChanStatsPtrPtr,
			  HCovarianceStatisticsPtr* modCovStatsPtrPtr);

	extern void GetScreenRect(
			  Rect* screenRectPtr);

	extern void GetScrollOffset(
			  Handle windowInfoHandle,
			  LongPoint* longPointPtr);

	extern void NumToString(
			  SInt32 numberValue,
			  UCharPtr stringPtr);

	extern void NumToString(
			  UInt32 numberValue,
			  UCharPtr stringPtr);

	extern CharPtr PtoCstr(
			  UCharPtr textStringPtr);

	extern void StringToNum(
			  ConstStr255Param theString,
			  SInt32 *outputNumberPtr);

	extern SInt16 TextWidth(
			  UCharPtr tringPtr,
			  SInt16 firstByte,
			  SInt16 byteCount);

	extern void SetUpToolTip(
			  wxControl* control, 
			  SInt16 stringnumber);

	// 		end CUtility.cpp


	//		Linux Routines in MultiSpec2.cpp
	extern time_t				LinGetTime (void);


	//		Routines in SDlgUtil.cpp
	extern void PositionDialogWindow(
			  wxDialog* dialogPtr);

	// 		end SDlgUtil.cpp    


	//		Linux Routines  in SMemUtil.c
	extern void MemoryMessage(
			  UInt32 numberBytes,
			  UInt16 messageCode);

	extern int getsize(void* ptr);

	//			end SMemUtil.cpp  


	//		Linux Routines in SDisThem.cpp
	extern void LoadThematicClassNamesIntoList(
			  wxListBox* listHandle);

	extern void LoadThematicGroupNamesIntoList(
			  wxListBox* listHandle);

	//			end SDisThem.cpp

#endif // defined multispec_lin

#if defined multispec_mac
		//		Routines in appleEvents.c
		extern pascal OSErr DummyAEHandler(
				  AppleEvent* theAppleEventPtr,
				  AppleEvent* replyPtr,
				  SInt32 refCon);
		/*											
		extern pascal OSErr 			HandleAEOpenApplication (
												const AppleEvent*					appleEventPtr,
												AEDescList*							replyPtr,
												UInt32	 							handlerRefcon);
													
		extern pascal OSErr 			HandleAEOpenDocument (
												const AppleEvent*					appleEventPtr,
												AEDescList*							replyPtr, 
												UInt32								handlerRefcon);
		 
		extern pascal OSErr 			HandleAEPrintDocument (	
												const AppleEvent*					appleEventPtr,
												AEDescList*							replyEventPtr, 
												UInt32	 							handlerRefcon);
		 
		extern pascal OSErr			HandleAEQuitApplication (
												const AppleEvent*					appleEventPtr,
												AEDescList*							replyPtr, 
												UInt32				 				handlerRefcon);
		 */
		extern OSErr					SendAEOpenOrPrintDocument(
												FSSpec*								fileFSSpecPtr,
												AEEventID							theAEEventID);

		extern OSErr SendAEQuitApplication(void);

		//		end appleEvents.c


		//		Routines in controls.c
		pascal SInt32 ControlDefinition(
				  SInt16 varCode,
				  ControlHandle theControl,
				  SInt16 message,
				  SInt32 longInt);

		extern void DrawCoordinateViewControls(
				  Handle windowInfoHandle);

		extern void DrawPopupControl(
				  ControlHandle theControl,
				  SInt16 popUpIconID);

		extern void GetHorAndVerControlMaximums(
				  WindowPtr windowPtr,
				  SInt32* horizontalMaximumPtr,
				  SInt32* verticalMaximumPtr);

		extern MenuHandle GetPopUpMenuHandle(
				  ControlHandle controlHandle);

		extern void HandScrollImage(
				  WindowPtr theWindow,
				  Point oldPt);

		extern void ImageWControlEvent(
				  ControlHandle theControl,
				  WindowPtr theWindow,
				  Point location,
				  SInt16 partCode);

		extern void ImageWindowSelectionScroll(
				  Point newPt,
				  Rect* viewRectPtr);

		extern pascal void ImageWScroll(
				  ControlHandle theControl,
				  SInt16 partCode);

		// extern pascal void 			ImageWThumbScrollAction (void);

		extern pascal void ImageWThumbScrollAction(
				  ControlHandle theControl,
				  SInt16 partCode);

		extern pascal void ImageZoomControlEvent(
				  ControlHandle theControl,
				  SInt16 partCode);

		extern pascal void OutputAutoScroll(
		#if use_mlte_for_text_window 
				  TXNObject textH,
		#endif
		#if !use_mlte_for_text_window 
				  WEReference textH,
		#endif 
				  Point mousePoint);

		extern void OutputWControlEvent(
				  ControlHandle theControl,
				  WindowPtr theWindow,
				  Point location,
				  SInt16 partCode);

		extern pascal void OutputWScroll(
				  ControlHandle theControl,
				  short int partCode);

		extern SInt16 StandardControlPopUpMenu(
				  ControlHandle theControl,
				  MenuHandle popUpMenu,
				  SInt16 currentSelection,
				  SInt16 popUpMenuID,
				  Boolean checkItemFlag);

		extern pascal void TextScrolled(
		#if use_mlte_for_text_window 
				  TXNObject textH);
		#endif
		#if !use_mlte_for_text_window 
		WEReference textH);
		#endif

		extern pascal void ThematicLegendControlEvent(
				  ControlHandle theControl,
				  SInt16 partCode);

		extern void UnhiliteImageWControls(
				  WindowPtr theWindow);

		extern void UpdateImageWScrolls(
				  WindowPtr theWindow);

		extern void UpdateImageZoomControls(
				  WindowPtr theWindow,
				  double magnification,
				  Boolean updateZoomsFlag);

		extern void UpdateOverlayControl(
				  WindowPtr theWindow);

		extern void UpdateOutputWScrolls(
				  WindowPtr theWindow,
				  SInt16 scrollToSelStart,
				  Boolean displayMessageFlag);

		extern void UpdateScrolls(
				  WindowPtr theWindow);

		//			end controls.c


		//		Routines in dialogUtilities.c

		extern void ChangeDLogCheckBox(
				  ControlHandle theHandle);

		extern void ChangeDLogCheckBox(
				  DialogPtr dialogPtr,
				  SInt16 itemNumber);

		extern void CheckEndLCValue(
				  SInt32 newValue,
				  SInt32* endLineCol,
				  SInt32 maxLineCol,
				  DialogPtr dialogPtr,
				  Handle theHandle,
				  SInt16 itemHit);

		extern SInt32 CheckIntervalValue(
				  SInt32 newValue,
				  SInt32 currentInterval,
				  SInt32 minimumValue,
				  SInt32 maximumValue,
				  DialogPtr dialogPtr,
				  SInt16 itemHit,
				  Handle theHandle);

		extern SInt16 CheckMaxRealValue(
				  DialogPtr dialogPtr,
				  SInt16 itemNumber,
				  double maxValue,
				  Boolean zeroAllowedFlag,
				  Boolean showAlertMessageFlag);

		extern Boolean CheckKeyDownDialogFilter(
				  DialogPtr theDialog,
				  EventRecord* theEventPtr,
				  SInt16* itemHitPtr);

		extern SInt16 CheckLineColValues(
				  DialogSelectAreaPtr newSelectAreaPtr,
				  SInt32 oldStartLine,
				  SInt32 oldStartCol,
				  DialogPtr dialogPtr);

		extern SInt16 CheckRealValue(
				  DialogPtr dialogPtr,
				  SInt16 itemNumber,
				  double minValue,
				  SInt16 decimalPlaces);

		extern void CheckStartValue(
				  SInt32 newValue,
				  SInt32* startValuePtr,
				  SInt32 minimumValue,
				  SInt32 maximumValue,
				  DialogPtr dialogPtr,
				  SInt16 itemHit);

		extern void CloseRequestedDialog(
				  DialogPtr dialogPtr,
				  Boolean setUpFilterTableFlag);

		extern void CloseStatusDialog(
				  Boolean showMenuBarFlag);

		extern pascal void CreateOneColumnList1(
				  DialogPtr dialogPtr,
				  SInt16 itemNumber);

		extern pascal void CreateOneColumnList2(
				  DialogPtr dialogPtr,
				  SInt16 itemNumber);

		extern short int DialogKeyFilter(
				  DialogPtr dialogPtr,
				  EventRecord* theEvent,
				  SInt16* itemHitPtr,
				  SInt16 theValue);

		extern void DialogLineColumnHits(
				  DialogSelectAreaPtr dialogSelectAreaPtr,
				  DialogPtr dialogPtr,
				  SInt16 itemHit,
				  Handle theHandle,
				  SInt32 theNum,
				  Boolean intervalEditBoxesExistFlag = TRUE);

		extern pascal Boolean DialogListFilter(
				  DialogPtr theDialogPtr,
				  EventRecord* theEventPtr,
				  SInt16* itemHitPtr);

		extern PascalVoid DrawColorBoxInDialogWindow(
				  DialogPtr dialogPtr,
				  SInt16 itemNumber);

		extern pascal void DrawGraphicsBox(
				  DialogPtr dialogPtr,
				  SInt16 itemNumber);

		extern void FlashDLogItem(
				  DialogPtr dialogPtr,
				  SInt16 dialogItem);

		extern double GetDItemRealValue(
				  DialogPtr dialogPtr,
				  SInt16 itemNumber);

		extern short int GetDLogControl(
				  DialogPtr dialogPtr,
				  SInt16 itemNumber);

		extern void GetDlogOrigin(short int, Point*);

		extern ListHandle GetOneColumnDialogListHandle(
				  DialogRef theDialog,
				  SInt16 itemNumber);

		extern pascal void HiliteOKButton(
				  DialogPtr dialogPtr,
				  SInt16 item);

		extern void InvalidateDialogItemRect(
				  DialogPtr dialogPtr,
				  SInt16 item);

		extern DialogPtr LoadRequestedDialog(
				  SInt16 specificationID,
				  Boolean copyScrapFlag,
				  SInt16 defaultItemNumber,
				  SInt16 cancelItemNumber);

		extern Boolean ModalOneColListDialog(
				  DialogPtr dialogPtr,
				  SInt16 numberInputVecItems,
				  UInt32* numberOutputVecItemsPtr,
				  SInt16* vectorPtr,
				  SInt16 minimumItemsRequired);

		extern void NumberDefault(Handle, SInt32, Str255*);

		extern pascal Boolean ProcessorDialogFilter(
				  DialogPtr theDialog,
				  EventRecord* theEvent,
				  SInt16 * itemHitPtr);

		extern void RealNumberErrorAlert(
				  double theRealValue,
				  DialogPtr dialogPtr,
				  SInt16 itemHit,
				  SInt16 decimalPlaces);

		extern void RealNumberErrorAlert(
				  double theRealValue,
				  DialogPtr dialogPtr,
				  SInt16 itemHit,
				  SInt16 numberFDecimalDigits,
				  SInt16 numberEDecimalDigits);

		extern void SetDialogItemDrawRoutine(
				  DialogPtr dialogPtr,
				  SInt16 itemNumber,
				  UserItemUPP userItemProcPtr);

		extern void SetDialogItemDrawRoutine(
				  DialogPtr dialogPtr,
				  SInt16 itemNumber,
				  Rect* boxPtr,
				  UserItemUPP userItemProcPtr);

		extern void SetDialogItemDrawRoutine(
				  DialogPtr dialogPtr,
				  Rect* rectPtr,
				  SInt16 promptItemNumber,
				  SInt16 itemNumber,
				  UserItemProcPtr drawRoutinePtr,
				  UserItemUPP* userItemProcPtrPtr,
				  SInt16 appearanceItemNumber,
				  MenuHandle popupMenuHandle,
				  SInt16 popupMenuSetting);

		extern void SetDItemValue(
				  DialogPtr dialogPtr,
				  SInt16 itemNumber,
				  SInt32 controlValue);

		extern pascal void SetEntireImageIcon(
				  DialogPtr,
				  short int);

		extern void ShowDialogItems(
				  DialogPtr dialogPtr,
				  SInt16 startTime,
				  SInt16 lastItem);

		extern void ShowDialogWindow(
				  DialogPtr dialogPtr,
				  short int dialogID,
				  Boolean setUpFilterTableFlag);

		extern void ShowHideDialogItems(
				  DialogPtr dialogPtr,
				  SInt16 startItem,
				  SInt16 lastItem,
				  Boolean showFlag);

		extern void ShowStatusDialogItemSet(short int);

		extern void ShowStatusDialogWindow(
				  SInt16 statusInfoID);

		extern void UpdateEntireIconButton(
				  DialogSelectAreaPtr dialogSelectAreaPtr,
				  DialogPtr dialogPtr);

		extern void UpdateLineColumnValues(
				  WindowInfoPtr windowInfoPtr,
				  WindowPtr windowPtr,
				  DialogPtr dialogPtr,
				  Rect* theBoxPtr,
				  SInt16 itemStart,
				  SInt32* lineStart,
				  SInt32* lineEnd,
				  SInt32* columnStart,
				  SInt32* columnEnd,
				  Boolean adjustToBaseImageFlag);

		//			end dialogUtilities.c


		//		Routines in display.c
		pascal Boolean DisplayDialogFilter(
				  DialogPtr,
				  EventRecord*,
				  short int*);

		//			end display.c


		//		Routines in displayp.c
		extern void DisplayPImage(DisplaySpecsPtr);

		//			end displayp.c


		//		Routines in fieldToThematicFile.c (SFieldTo.cpp)
		extern void AreasToThematicFileControl(void);

		extern void CovertMultispectralToThematicControl(
				  WindowInfoPtr inputWindowInfoPtr);

		extern void ENVI_ASCII_ROI_ToThematicFileControl(void);

		//			end fieldToThematicFile.c (SFieldTo.cpp)


		//		Routines in fileIO.c											
		extern pascal Boolean DialogFileSpecFilter(
				  DialogPtr,
				  EventRecord*,
				  short int*);

		//extern pascal void 			DrawBitsPerDataValuePopUp (
		//										DialogPtr							dialogPtr, 
		//										SInt16								itemNumber);

		extern pascal void DrawDataValueTypePopUp(
				  DialogPtr dialogPtr,
				  SInt16 itemNumber);

		extern pascal short int GetFileHook(
				  short int,
				  DialogPtr);

		extern void GetImageFile(void);

		extern void NavSetImageWindowFileFlagToFalse(
				  DialogPtr dialogPtr,
				  SInt16 customStart);

		extern short int OpenMultiSpecDocument(
				  LocalAppFilePtr localAppFilePtr);

		extern pascal short int PutFileHook(
				  short int,
				  DialogPtr);

		extern Boolean ReadMultiSpecClassNames(
				  FileInfoPtr fileInfoPtr,
				  Handle windowInfoHandle,
				  char* classNamePtr);

		//			end fileIO.c


		//		Routines in forceCodeSeg2Load.c												
		extern void ForceCodeSeg2Load(void);

		//		Routines in forceCodeSeg3Load.c												
		extern void ForceCodeSeg3Load(void);

		//		Routines in forceCodeSeg4Load.c												
		extern void ForceCodeSeg4Load(void);

		//		Routines in forceCodeSeg5Load.c												
		extern void ForceCodeSeg5Load(void);

		//		Routines in forceCodeSeg6Load.c												
		extern void ForceCodeSeg6Load(void);

		//		Routines in forceCodeSeg7Load.c												
		extern void ForceCodeSeg7Load(void);

		//		Routines in forceCodeSeg8Load.c												
		extern void ForceCodeSeg8Load(void);

		//		Routines in forceHDFSegmentLoad.c	

		extern void ForceHDFSegmentLoad(void);

		//			end forceHDFSegmentLoad.c


		//		Routines in histogram.c
		extern Boolean HistogramDialog(
				  FileInfoPtr fileInfoPtr,
				  HistogramSpecsPtr histogramSpecsPtr);

		//			end histogram.c


		//		Routines in initialize.c
		extern void InitializeMultiSpec(void);

		#if !TARGET_API_MAC_CARBON
		extern THPrint InitPrinter(void);
		#endif	// !TARGET_API_MAC_CARBON

		//			end initialize.c


		//		Routines in longControls.c
		extern OSErr LCAttach(
				  ControlHandle inControl);

		extern void LCDetach(
				  ControlHandle inControl);

		extern SInt32 LCGetMax(
				  ControlHandle inControl);

		extern SInt32 LCGetMin(
				  ControlHandle inControl);

		extern SInt32 LCGetValue(
				  ControlHandle inControl);

		extern void LCSetMax(
				  ControlHandle inControl,
				  SInt32 inMax);

		extern void LCSetMin(
				  ControlHandle inControl,
				  SInt32 inMin);

		extern void LCSetValue(
				  ControlHandle inControl,
				  SInt32 inValue);

		extern void LCSynch(
				  ControlHandle inControl);

		//			end longControls.c


		//		Routines in macOSXsupport.cpp
		#if TARGET_API_MAC_CARBON	
		extern OSErr CreateFrameworkBundleFromName(
				  CFStringRef theFrameworkName,
				  CFBundleRef* theBundle);
		#endif	// TARGET_API_MAC_CARBON

		//			end macOSXsupport.cpp


		//		Routines in mathConversionUtilities.c
		extern void nonx96tox96(
				  double* doublePtr,
				  extended96* extended96Ptr);

		extern void x96tononx96(
				  extended96* extended96Ptr,
				  double* doublePtr);

		//			end mathConversionUtilities.c


		//		Routines in menus.c
		extern void DoOpenProjectFile(short int projectVersionCode);

		extern void ForceMenuCodeResourceLoad(void);

		extern void ForceProjectSegmentsToBeLoaded(void);

		extern void HideMultiSpecMenuBar(void);

		extern void Menus(SInt32);

		extern void ShowHideCoordinateView(
				  Handle windowInfoHandle);

		extern void ShowMultiSpecMenuBar(void);

		extern void UpdateMenuBeforeSelection(void);

		//extern void						UpdatePaletteWindow (Boolean, Boolean); 

		//			end menus.c


		//		Routines in multiSpec.c
		extern Boolean CheckSomeEvents(
				  short int);

		extern void ClearCoordinates(void);

		extern void CopyOffScreenImage(
				  WindowPtr theWindow,
				  RgnHandle invalidRgn,
				  Rect* inSourceRect,
				  SInt16 copyType,
				  Boolean fromImageWindowUpdateFlag);

		extern void DoActivateEvent(
				  WindowPtr,
				  Boolean);

		extern void DoCoordinateViewUpdateEvent(
				  WindowPtr window,
				  Handle windowInfoHandle);

		extern void DoMultiSpec(void);

		extern void DoSuspendResume(
				  EventRecord* theEventPtr);

		extern void DoUpdateEvent(
				  EventRecord* theEventPtr);

		extern void DragMultiSpecWindow(
				  WindowPtr theWindow,
				  Point startPoint);

		extern void ExitMultiSpec(Boolean);


		extern GDHandle GetDevicePointIsIn(
				  Point* locationPtr);

		extern void GetDisplayRegionRectangle(
				  Rect* displayRegionRect);

		extern void GetMaximumSizeForDevicePointIsIn(
				  Point* locationPtr,
				  Rect* maximumRectPtr);

		extern void GetMinimumDisplaySizeForImage(
				  Handle windowInfoHandle,
				  LongPoint* minimumWindowSizePointPtr);

		extern void GrowNonGraphWindow(
				  WindowPtr theWindow,
				  Handle windowInfoHandle,
				  SInt16 height,
				  SInt16 width);

		extern pascal OSErr MultiSpecQuitAppleEvent(
				  AppleEvent,
				  SInt32);

		extern pascal long int MyGrowZone(
				  Size);

		extern pascal Boolean MyWSErrorProc(
				  Size cbNeeded);

		extern void UpdateCursorCoordinates(
				  Point mousePt);

		extern pascal Boolean WSErrorRoutine(
				  Size);

		//			end multiSpec.c  


		//		Routines in multiSpecUtilities.c
		extern Boolean ButtonDownEvent(
				  Rect* rectPtr,
				  Boolean waitOnMouseUpFlag);

		extern Boolean ListSpecifiedString(
				  short int stringID,
				  CMFileStream* resultsFileStreamPtr,
				  short int outputCode);

		extern SInt32 MGetPixRowBytes(
				  PixMapHandle pixMapHandle);

		extern void UpdateDeskScrap(
				  Boolean clearTextEditScrapFlag);

		extern void UpdateTextEditScrap(void);

		//			end multiSpecUtilities.c 


		//		Routines in popMenuUtilities.c
		extern short int ChannelsPopUpMenu(
				  DialogPtr dialogPtr,
				  SInt16 dialogItem,
				  SInt16 allType,
				  SInt16 currentChannelSelection,
				  SInt16 listType);

		extern pascal void DrawBandInterleavePopUp(
				  DialogPtr dialogPtr,
				  SInt16 itemNumber);

		extern pascal void DrawBytesPerDataValuePopUp(
				  DialogPtr dialogPtr,
				  SInt16 itemNumber);

		extern pascal void DrawChannelsPopUp(
				  DialogPtr dialogPtr,
				  SInt16 itemNumber);

		extern pascal void DrawDialogClassPopUp(
				  DialogPtr dialogPtr,
				  SInt16 itemNumber);

		extern void DrawDropDownTriangle(
				  Rect* theRectPtr);

		extern void DrawDropDownTriangle2(
				  Rect* theRectPtr);

		extern pascal void DrawImageFilePopUp(
				  DialogPtr dialogPtr,
				  SInt16 itemNumber);

		extern pascal void DrawImageOverlayPopUp(
				  DialogPtr dialogPtr,
				  SInt16 itemNumber);

		extern pascal void DrawLinkOptionsPopUp(
				  DialogPtr dialogPtr,
				  SInt16 itemNumber);

		extern void DrawPopUpMenuItem(
				  DialogPtr dialogPtr,
				  short int,
				  MenuHandle,
				  short int,
				  Boolean);

		extern pascal void DrawSymbolsPopUp(
				  DialogPtr dialogPtr,
				  SInt16 itemNumber);

		extern pascal void DrawWeightsPopUp(
				  DialogPtr dialogPtr,
				  SInt16 itemNumber);

		extern SInt16 GetPopUpMenuBitsPerDataValue(void);

		extern SInt16 StandardPopUpMenu(
				  DialogPtr dialogPtr,
				  SInt16 promptDialogItem,
				  SInt16 popupDialogItem,
				  MenuHandle popUpMenu,
				  SInt16 currentSelection,
				  SInt16 popUpMenuID);

		//			end popMenuUtilities.c   


		//		Routines in print.c																
		extern void DoPageSetup(
				  WindowPtr windowPtr);

		extern void DoPrint(Boolean, WindowPtr);

		extern void ForcePrintSegmentLoad(void);

		//			end print.c  


		//		Routines in SProjUtl.cpp (projectUtilities.c)
		extern SInt16 ClassDialog(
				  UInt32* numberOutputClassesPtr,
				  SInt16* classPtr,
				  SInt16 minimumNumberClasses,
				  SInt16 numberInputClasses,
				  SInt16 currentSelection,
				  Handle parentOKHandle);

		extern short int DiskFilePopUpMenu(
				  DialogPtr dialogPtr,
				  MenuHandle diskFilePopUpMenu,
				  SInt16 itemNumber);

		extern pascal void DrawChannelsPopUp2(
				  DialogPtr dialogPtr,
				  SInt16 itemNumber);

		extern pascal void DrawInterClassWeightsPopUp(
				  DialogPtr dialogPtr,
				  SInt16 itemNumber);

		extern pascal void DrawProjectChangesPopUp(
				  DialogPtr dialogPtr,
				  SInt16 itemNumber);

		extern pascal void DrawSeparabilityDistancePopUp(
				  DialogPtr dialogPtr,
				  SInt16 itemNumber);

		extern SInt16 ProjectChangesPopUpMenu(
				  DialogPtr dialogPtr,
				  Rect* popUpProjectChangesBoxPtr,
				  Boolean* newProjectFlag,
				  SInt16 currentListType);

		extern SInt16 StatHistogramPopUpMenu(
				  SInt16 statsWindowMode);

		extern SInt16 StatListPopUpMenu(
				  SInt16 statsWindowMode);

		extern Boolean SymbolsDialog(
				  unsigned short int,
				  short int*,
				  unsigned char*,
				  Boolean);

		//			end SProjUtl.cpp (projectUtilities.c)  


		//		Routines in rectification.c (SRectify.cpp)
		extern void RectifyImageControl(void);

		//			end rectification.c 


		//		Routines in selectionArea.c
		extern void SelectArea(
				  Point);

		extern void ShowSelection(
				  Handle);

		//			end selectionArea.c 


		//		Routines in submslee.c
		extern void FS_make_half_STI(
				  double* cov,
				  double* var,
				  unsigned char* image,
				  SInt32 n);

		//			end submslee.c 


		//		Routines in thematicWindow.c
		extern void AddCellsToLegendList(
				  ListHandle legendListHandle,
				  SInt16 classGroupCode,
				  SInt16* classToGroupPtr,
				  UInt16 imageNumberClasses,
				  UInt16 imageNumberGroups);

		extern void AdjustLegendListLength(
				  WindowPtr theWindow,
				  Boolean invalFlag);

		extern void ChangeLegendWidth(
				  WindowPtr,
				  Point);

		extern void DoThematicMouseDnContent(
				  WindowPtr theWindow,
				  Point mousePt);

		extern void DoThematicWUpdateEvent(
				  WindowPtr window,
				  Handle windowInfoHandle);

		extern pascal void DragScrollList(void);

		extern void DrawThematicLegend(
				  WindowPtr window,
				  CGrafPtr cGraphPtr,
				  WindowInfoPtr windowInfoPtr,
				  ListHandle legendListHandle,
				  SInt16 legendLeftStart,
				  SInt16 legendTopStart,
				  Boolean drawPopUpBoxFlag);

		extern pascal void LegendListDefinition(
				  SInt16 lMessage,
				  Boolean lSelect,
				  Rect* lRectPtr,
				  Cell lCell,
				  SInt16 lDataOffset,
				  SInt16 lDataLen,
				  ListHandle listHandle);

		extern Boolean LoadLocalClassToGroupInfo(
				  DisplaySpecsPtr,
				  FileInfoPtr,
				  short int**);

		//			end thematicWindow.c 


		//		Routines in wePrint.c	
		extern OSStatus DoWePageSetup(
		#if use_mlte_for_text_window 
				  TXNObject we);
		#endif
		#if !use_mlte_for_text_window 
		WEReference we);
		#endif

		//			end wePrint.c 



		//		Routines in wePrintDialogs.c	

		// extern Boolean 				DoPrintDialog (
		// 										THPrint 									inPrintRecord, 
		// 										PageMarginRecHandle 					inMargins, 
		// 										PrintDialogStyle 						inStyle);

		//			end wePrintDialogs.c 


		//		Routines in windows.c	

		extern void CalcTextRect(
				  WindowPtr window,
				  LongRect* textRectPtr);

		extern void CloseCoordinateWindow(void);

		extern void CloseGraphicsWindow(
				  WindowPtr theWindow);

		extern Boolean CloseImageWindow(WindowPtr);

		extern void CloseOutputWindow(WindowPtr);

		//extern void 					ClosePaletteWindow (WindowPtr);

		extern Boolean CreateImageWindow(Handle, Boolean);

		extern Boolean CreateOutputWControls(WindowPtr, Boolean);

		//extern WindowPtr 				CreatePaletteWindow (void);

		extern void DisposeOfImageWindowSupportMemory(WindowInfoPtr);

		extern void DrawScrollBars(WindowPtr);

		extern Handle GetImageWindowRecord(void);

		extern void ReleaseWindowRecord(Handle);

		//			end windows.c
#endif	// defined multispec_mac


//-----------------------------------------------------------------------------
#if defined multispec_win
			//	Windows Routines in CStubs.cpp
			extern void AnimateEntry(
					  CMPaletteInfo paletteObject,
					  UInt16 startIndex,
					  RGBColor* newRGBColorPtr);

			extern void AppendMenu(
					  MenuHandle menuHandle,
					  Str255 textString);

			extern void AreasToThematicFileControl(void);

			extern void BlockMove(
					  const void *textStringPtr,
					  void *textString2Ptr,
					  UInt32 numberBytes);

			extern void BlockMoveData(
					  const void* inStringPtr,
					  void* outStringPtr,
					  UInt32 numberBytes);

			extern Boolean ChangeImageFormatDialog(
					  FileInfoPtr fileInfoPtr,
					  FileInfoPtr outFileInfoPtr,
					  ReformatOptionsPtr reformatOptionsPtr);

			extern Boolean ChangeProjectChannelsList(
					  SInt16 numberChannels);

			extern SInt16 CharWidth(
					  char character);

			extern Boolean CheckSomeEvents(
					  SInt16 code);

			extern void ClipRect(
					  Rect* clipRectanglePtr);

			extern void CloseGraphicsWindow(
					  WindowPtr theWindow);

			extern void CloseWindow(
					  WindowPtr windowPtr);

			extern Boolean CopyFileInfoFromProject(
					  Handle fileInfoHandle);

			extern SInt16 CountMenuItems(
					  MenuHandle menuHandle);

			extern void CovertMultispectralToThematicControl(
					  WindowInfoPtr inputWindowInfoPtr);

			extern void CTab2Palette(
					  CTabHandle cTableHandle,
					  CMPaletteInfo paletteObject,
					  SInt16 useage,
					  SInt16 srcTolerance);

			extern void DeactivateProject(void);

			extern void DecisionTreeControl(
					  FileInfoPtr fileInfoPtr);

			extern void DeleteMenuItem(
					  MenuHandle menuHandle,
					  SInt16 itemNumber);

			extern void DisableItem(
					  MenuHandle menuHandle,
					  SInt16 itemNumber);

			extern void DisplayPImage(
					  DisplaySpecsPtr displaySpecsPtr);

			extern void DisposePalette(
					  PaletteHandle resourcePHandle);

			extern void DisposeRgn(
					  RgnHandle rgnHandle);

			extern void DrawDialog(
					  DialogPtr dialogPtr);

			extern void EllipsePlotV(
					  GraphPtr graphRecPtr,
					  SInt32* error);

			extern void EnableItem(
					  MenuHandle menuHandle,
					  SInt16 itemNumber);

			extern void EraseRect(
					  Rect* rectPtr);

			extern Boolean FindProjectImageWindows(
					  Boolean loadFileAndLayerInfoFlag);

			extern void ForceFieldOutlineUpdate(
					  Boolean forceFlag);

			extern void ForeColor(
					  SInt16 color);

			extern WindowPtr FrontWindow(void);

			extern void GetBiPlotGraphTitle(
					  GraphPtr graphRecordPtr);

			extern SInt32 GetCTSeed(void);

			extern void GetDialogItem(
					  DialogPtr dialogPtr,
					  SInt16 itemNumber,
					  SInt16* theTypePtr,
					  Handle* theHandlePtr,
					  Rect* theBoxPtr);

			extern DialogPtr GetDialogWindow(
					  DialogPtr windowPtr);

			extern Boolean GetEigenStatisticsFeatures(
					  SInt16* statEigenFeaturePtr);

			extern void GetEntryColor(
					  CMPaletteInfo srcPalette,
					  SInt16 srcEntry,
					  RGBColor* dstRGBPtr);

			extern void GetFieldNameWithType(
					  SInt16 field,
					  Str255* stringPtr);

//			extern FileStringPtr GetFileNamePPointer(
//						ProjectInfoPtr						projectInfoPtr,
//						Boolean								returnASCIIFlag);

			extern CMPaletteInfo GetNewPalette(
					  SInt16 paletteId);

			extern SInt16 GetOffscreenForNonGWorld(
					  DisplaySpecsPtr displaySpecsPtr,
					  Rect* rectPtr);

			extern SInt16 GetPopUpMenuBitsPerDataValue(void);

			extern void GetPort(
					  GrafPtr* savedPortPtr);

			extern void GetProjectSelectionWindow(void);

			extern SInt16 HandToHand(
					  Handle* handle);

			extern void HideDialogItem(
					  DialogPtr dialogPtr,
					  SInt16 itemNumber);

			extern void HiliteControl(
					  ControlHandle controlHandle,
					  SInt16 hiliteCode);

			extern void InvalWindowRect(
					  WindowPtr windowPtr,
					  Rect* invalRectanglePtr);

			extern void LActivate(
					  Boolean flag,
					  CListBox* listBoxCPtr);

			extern SInt16 LAddRow(
					  SInt16 numberRows,
					  SInt16 startRow,
					  CListBox* listBoxCPtr);

			extern void LAutoScroll(
					  CListBox* listBoxCPtr);

			extern Boolean LClick(
					  Point location,
					  SInt16 modifiers,
					  CListBox* listHandle);

			extern void LDelRow(
					  SInt16 numberRows,
					  SInt16 startRow,
					  CListBox* listBoxCPtr);

			extern void LDispose(
					  CListBox* listBoxCPtr);

			extern void LGetCell(
					  char* stringPtr,
					  SInt16* stringLengthPtr,
					  Cell cell,
					  CListBox* listBoxCPtr);

			extern Boolean LGetSelect(
					  Boolean nextFlag,
					  Cell* cellPtr,
					  CListBox* listBoxCPtr);

			extern void LSetCell(
					  Ptr dataPtr,
					  SInt16 dataLength,
					  Cell cell,
					  CListBox* listBoxCPtr);

			extern void LSetDrawingMode(
					  Boolean flag,
					  CListBox* listBoxCPtr);

			extern void LSetSelect(
					  Boolean setItFlag,
					  Cell cell,
					  CListBox* listBoxCPtr);

			extern void NewFieldStatMode(void);

			extern RgnHandle NewRgn(void);

			extern void OpenProjectImageWindow(void);

			extern Boolean PixMap32Bit(
					  Handle offScreenPixMapH);

			extern Boolean PtInRgn(
					  Point point,
					  RgnHandle rgnHandle);

			extern void RectifyImageControl(void);

			extern SInt16 ReformatDialog(
					  SInt16* channelDescriptionRequestPtr);

			extern void ReleaseResource(
					  Handle handle);

			extern SInt16 ResError(void);

			extern short int SaveProjectFile(
					  SInt16 saveCode);

			extern void SelectDialogItemText(
					  DialogPtr dialogPtr,
					  SInt16 itemNumber,
					  SInt16 startSelection,
					  SInt16 endSelection);

			extern void SetControlValue(
					  ControlHandle controlHandle,
					  SInt16 setting);

			extern void SetDialogItemText(
					  Handle theHandle,
					  ConstStr255Param textStringPtr);

			extern void SetEntryUsage(
					  CMPaletteInfo paletteObject,
					  SInt16 paletteIndex,
					  SInt16 srcUsage,
					  SInt16 srcTolerance);

			extern void SetFileReadOnly (
					  FileInfoPtr fileInfoPtr);

			extern void SetMenuItemText (
						MenuHandle						menuHandle,
						SInt16							menuItem,
						UCharPtr							stringPtr);

			extern void SetPalette(
					  WindowPtr windowPtr,
					  CMPaletteInfo paletteObject,
					  Boolean activateFlag);

			extern void SetPort(
					  DialogPtr dialogPtr);

			extern void SetPort(
					  GrafPtr windowPtr);

			extern void SetPort(
					  WindowPtr windowPtr);

			extern void SetPortDialogPort(
					  DialogPtr dialogPtr);

			extern void SetPortWindowPort(
					  WindowPtr windowPtr);


			extern void SetWTitle(
					  DialogPtr dialogPtr,
					  unsigned char* textStringPtr);

			extern void ShowDialogItem(
					  DialogPtr dialogPtr,
					  SInt16 itemNumber);

			extern void ShowDialogWindow(
					  DialogPtr dialogPtr,
					  SInt16 dialogID,
					  Boolean setUpFilterTableFlag);

			extern void ShowSelection(
					  Handle windowInfoHandle);

			extern void ShowSelection(
					  WindowPtr windowPtr);

			extern void ShowStatusDialogItemSet(
					  SInt16 setNumber);

			extern void ShowStatusDialogWindow(
					  SInt16 statusInfoID);

			extern SInt16 SetThreadState(
					  UInt32 asyncIOThread,
					  SInt16 threadState,
					  UInt32 IOThread);

			extern SInt16 StatHistogramPopUpMenu(
					  SInt16 statsWindowMode);

			extern Boolean StillDown(void);

			extern SInt16 StringWidth(
					  UCharPtr stringPtr);

			extern void SysBeep(
					  SInt16 beepLength);

			extern void UnloadSeg(
					  Ptr funtionPointer);

			extern void UpdateImageZoomControls(
					  WindowPtr theWindow,
					  double magnification,
					  Boolean updateZoomsFlag);

			extern void UpdateOutputWScrolls(
					  WindowPtr theWindow,
					  SInt16 scrollToSelStart,
					  Boolean displayMessageFlag);

			extern void UpdateOverlayControl(
					  WindowPtr theWindow);

			extern void ValidRect(
					  Rect* rectPtr);

			extern SInt16 YieldToThread(
					  UInt32 wakeUpThread);

			//			end CStubs.cpp 


			//	Windows Routines in CUtility.c
			extern void CopyOffScreenImage(
					  CMImageView *imageViewCPtr,
					  CDC* pDC,
					  CMImageWindow *imageWindowCPtr,
					  RgnHandle invalidRgn,
					  Rect *inSourceRect,
					  SInt16 copyType);

			extern void CreateClassNameComboBoxList(
					  CComboBox* comboBoxCPtr);

			extern SInt16 GetComboListSelection(
					  CWnd* cWindowPtr,
					  UInt16 dialogItemNumber,
					  SInt32 selectedListItemData);

			extern void GetFieldBoundary(
					  ProjectInfoPtr classProjectInfoPtr,
					  AreaDescriptionPtr areaDescriptionPtr,
					  SInt16 fieldNumber);

			extern void GetImageClipRectangle(
					  CMImageView* imageViewCPtr,
					  Boolean imageOnlyFlag,
					  Rect* outRect);

			extern void GetMenuItemText(
					  MenuHandle menuHandle,
					  SInt16 menuItem,
					  UCharPtr stringPtr);

			extern UInt16 GetPopUpMenuBitsPerDataValue(
					  UInt16 bitsPerDataValueSelection);

			extern void GetProjectStatisticsPointers(
					  SInt16 classFieldCode,
					  SInt32 storageIndex,
					  HChannelStatisticsPtr* chanStatsPtrPtr,
					  HSumSquaresStatisticsPtr* sumSquaresStatsPtrPtr,
					  HChannelStatisticsPtr* modChanStatsPtrPtr,
					  HCovarianceStatisticsPtr* modCovStatsPtrPtr);

			extern void GetScreenRect(
					  Rect* screenRectPtr);

			extern void GetScrollOffset(
					  Handle windowInfoHandle,
					  LongPoint* longPointPtr);

			extern void NumToString(
					  SInt32 numberValue,
					  UCharPtr stringPtr);

			extern void NumToString(
					  UInt32 numberValue,
					  UCharPtr stringPtr);

			extern CharPtr PtoCstr(
					  UCharPtr textStringPtr);

			extern void StringToNum(
					  ConstStr255Param theString,
					  SInt32 *outputNumberPtr);

			extern SInt16 TextWidth(
					  UCharPtr tringPtr,
					  SInt16 firstByte,
					  SInt16 byteCount);

			// 		end CUtility.cpp    


			//	Windows Routines in SDlgUtil.cpp
			extern void PositionDialogWindow(
					  CDialog* dialogPtr);

			// 		end SDlgUtil.cpp    


			//	Windows Routines in SMemUtil.c
			extern void MemoryMessage(
					  UInt32 numberBytes,
					  UInt16 messageCode);

			//			end SMemUtil.cpp    


			//	Windows Routines in SStrings.c
			extern SInt16 CompareStringsNoCase(
						const char* 						str1, 
						const TBYTE* 						str2,
						UInt32								numberCharacters);

			extern TBYTE* StrStrNoCase(
						const TBYTE* 						str1, 
						const TBYTE* 						str2);

			extern TBYTE* StrStrNoCase(
						const TBYTE* 						str1, 
						const char* 						str2);

			//			end SStrings.cpp  
#endif	// defined multispec_win


//-----------------------------------------------------------------------------
// Function Prototypes for those routines that are called by routines
// in other files that are common in Linux, Mac OSX and Windows versions

//		Routines in SArcView.cpp
extern void AddCurrentVectorOverlaysToImageWindow(
        WindowInfoPtr windowInfoPtr);

extern Boolean CheckIfVectorOverlaysIntersectImage(
        WindowInfoPtr windowInfoPtr);

extern void ClearVectorOverlay(
        UInt32 index);

extern void CloseAllVectorOverlayFiles(void);

extern void CloseOverlayFile(
        UInt32 overlayIndex);

extern Boolean CreateCLRSupportFile(
        CMFileStream* trailerStreamPtr,
        UInt16 numberSupportFileClasses,
        RGBCharColorPtr classColorTablePtr,
        char* classNameTablePtr,
        UInt16 numberGroups,
        SInt16* classToGroupPtr,
        RGBCharColorPtr groupColorTablePtr,
        char* groupNameTablePtr,
        Boolean* listAllGroupInfoPtr,
        UInt16* classSymbolPtr,
        UInt16 numberClassSymbols,
        Boolean asciiSymbolsFlag);

extern void DrawArcViewShapes(
        WindowPtr windowPtr,
        Handle windowInfoHandle,
        Rect* inputBoundingRectPtr,
        SInt16 windowCode,
        CGContextRef context);

extern UInt32 GetShapeFileNumberRecordsAndType(
        Handle shapeFilesHandle,
        SInt16 shapeFileIndex,
        SInt16* shapeTypePtr);

extern void ListNonIntersectionMessage(
        Handle windowInfoHandle,
        DoubleRect* boundingOverlayRectanglePtr,
        SInt16 stringNumber);

extern void* GetFileNamePPointer (
				ShapeInfoPtr						shapeInfoPtr,
				SInt16								returnCode=kDefaultFileStringCode);

extern Boolean OverlayControlDialog(
        Handle windowInfoHandle,
        SInt16 overlayIndex);

extern Boolean ReadArcViewClassNames(
				FileInfoPtr							fileInfoPtr,
				Handle								windowInfoHandle,
				UCharPtr								classNamePtr);

extern Boolean ReadArcViewColorPalette(
        ColorSpec* colorSpecPtr,
        FileInfoPtr imageFileInfoPtr,
        CMFileStream* paletteFileStreamPtr,
        DisplaySpecsPtr displaySpecsPtr,
        UInt16* classSymbolPtr,
        UInt16* paletteCodePtr);

extern Boolean ReadArcViewGroups(
        FileInfoPtr inputFileInfoPtr,
        FileInfoPtr outputFileInfoPtr,
        DisplaySpecsPtr displaySpecsPtr,
        Handle windowInfoHandle);

extern SInt16 ReadArcViewHeader(
        FileInfoPtr fileInfoPtr,
        char* headerRecordPtr,
        SInt16 formatOnlyCode);

extern SInt16 ReadArcViewShapeFile(
        SInt16 shapeFileIndex,
        Boolean convertToMapUnitsFlag,
        Boolean okayToCloseOverlayFileFlag);

extern Boolean ReadArcViewWorldFile(
        FileInfoPtr fileInfoPtr);

extern SInt16 ReadArcViewShapeFile(
        SInt16 shapeFileIndex,
        Boolean convertToMapUnitsFlag);

extern SInt16 ReadArcViewShapeHeader (
				FileInfoPtr								fileInfoPtr,
				UCharPtr									headerRecordPtr,
				SInt16*									shapeFileIndexPtr,
				DoubleRect*								boundingShapeRectanglePtr,
				SInt16									formatOnlyCode);

extern void ReadGTOPO30PrjFile(
        FileInfoPtr fileInfoPtr,
        char* prjBufferPtr);

extern Boolean WindowBoundingAreaAndRectIntersect(
        WindowInfoPtr windowInfoPtr,
        //										SDoubleRect*		 				boundingRectPtr,
        DoubleRect* boundingRectPtr,
        Boolean inputIsMapTypeFlag);

//			end SArcView.cpp


//		Routines in SBiPlot.cpp

extern void BiPlotDataControl(void);

extern void GetBiPlotGraphTitle(
        GraphPtr graphRecordPtr);

//			end SBiPlot.cpp


//		Routines in SClassfy.cpp

// Routines in SStatisticsImage.cpp
extern void StatisticsImageControl(void);

void ClassifyAreasControl(
        FileInfoPtr fileInfoPtr,
        ClassifierVarPtr clsfyVariablePtr);

extern void ClassifyControl(void);

extern Boolean CreateThresholdTables(
        SInt16 pixelDegreesOfFreedom,
        SInt16 cellDegreesOfFreedom);

extern Handle GetTargetOverlayImageWindowInfoHandle(
        SInt16 fileNamesSelection,
        Handle targetWindowInfoHandle);

extern UInt16 GetThresholdClass(
        double dValue,
        double* thresholdTablePtr);

extern Boolean ListAverageDiscriminantValue(
        CMFileStream* resultsFileStreamPtr,
        SInt16 outputCode,
        SInt64 numberPixels,
        double discriminantTotal);

extern short int ListTrainTestSummary(
        SInt16 classPointer,
        CMFileStream* resultsFileStreamPtr,
        AreaDescriptionPtr areaDescriptionPtr,
        HSInt64Ptr countVectorPtr,
        ClassifierVarPtr clsfyVariablePtr,
        double probabilityTotal);

extern void InitializeClassifierVarStructure(
        ClassifierVar* classifierVarPtr);

extern short int WriteClassificationResults(
        HUCharPtr outputBufferPtr,
        AreaDescriptionPtr areaDescriptionPtr,
        CMFileStream* esultsFileStreamPtr,
        CMFileStream* clProbabilityFileStreamPtr,
        HSInt64Ptr countVectorPtr,
        SInt32 lineCount);

//			end SClassfy.cpp       	


//		Routines in SClasfy2.cpp
extern Boolean ClassifyDialog(
        FileInfoPtr fileInfoPtr);

//			end SClasfy2.cpp    	


//		Routines in SCluster.cpp
extern Boolean ClusterClassification(
        FileIOInstructionsPtr fileIOInstructionsPtr,
        SInt16 numberClusters,
        HUCharPtr classifyBufferPtr);

extern void ClusterControl(void);

extern SInt16 DeleteSpecifiedClusters(
        SInt32 clusterCount,
        SInt32 numberPixelsRequired);

extern Boolean CreateClusterMaskFile(void);

extern Boolean GetNextClusterArea(
        ProjectInfoPtr projectClassInfoPtr,
        UInt16* channelsPtr,
        SInt16 numberChannels,
        SInt16 areaNumber,
        UInt32* nextUpdatePtr,
        SInt16* lastClassIndexPtr,
        SInt16* lastFieldIndexPtr,
        SInt32* linesLeftPtr);
//										Boolean*								BILSpecialFlagPtr);	

extern Boolean InitializeClusterMemory(
        FileIOInstructionsPtr* fileIOInstructionsPtrPtr);

extern void KeepLargestClusters(
        SInt32 numberClustersToKeep);


extern Boolean ListClusterStatistics(
        CMFileStream* clResultsFileStreamPtr,
        SInt16* outputCodePtr,
        Boolean stdDevFlag);

extern Boolean SaveClusterStatistics(
        FileIOInstructionsPtr fileIOInstructionsPtr,
        SInt16 numberClasses);

extern Boolean SetUpClassToFinalClassPtr(void);

extern Boolean UpdateClusterStdDeviations(
        ClusterType* newCluster);

//			end SCluster.cpp (cluster.c)


//		Routines in SClustID.cpp (clusterISODATA.c)

extern Boolean ISODATAClusterControl(
        FileInfoPtr fileInfoPtr);

extern Boolean ISODATAClusterDialog(
        FileInfoPtr fileInfoPtr,
        DialogPtr parentDialogPtr);

//			end SClustID.cpp (clusterISODATA.c)


//		Routines in SClustSP.cpp (clusterSinglePass.c)

extern Boolean ClusterOnePassControl(
        FileInfoPtr fileInfoPtr);

extern Boolean GetOnePassClusterCenters(
        FileIOInstructionsPtr fileIOInstructionsPtr);

extern Boolean OnePassClusterDialog(
        FileInfoPtr fileInfoPtr,
        DialogPtr parentDialogPtr);

//			end SClustSP.cpp (clusterSinglePass.c)


// 	Routines in SCooView.cpp  

extern void UpdateCoordinateViewControls(
        WindowPtr theWindow);

//			end SCooView.cpp (clusterSinglePass.c)


// 	Routines in SDatFile.cpp  

extern void CloseControlPointVectorPointers(
        Handle controlPointHandle);

extern void CloseImageFile(
        Handle fileInfoHandle);

extern void CloseImageFile(
        FileInfoPtr fileInfoPtr);

extern void DisposeFileInfoHandle(
        Handle fileInfoHandle);

extern UInt32 GetActiveNumberClasses(void);

extern SInt16 GetBandInterleave(
        Handle fileInfoHandle);

extern void GetBlockInformation(
        FileInfoPtr fileInfoPtr,
        UInt32* blockHeightPtr,
        UInt32* blockWidthPtr,
        UInt32* blockSizePtr,
        UInt32* blockOffsetPtr);

extern SInt16* GetClassToGroupPointer(
        Handle imageFileInfoHandle);

extern SInt16* GetClassToGroupPointer(
        FileInfoPtr imageFileInfoPtr);

extern Handle GetChannelDescriptionHandle(
        Handle imageFileInfoHandle);

extern Handle GetClassDescriptionHandle(
        Handle imageFileInfoHandle);

extern Handle GetControlPointsHandle(
        Handle fileInfoHandle);

extern ControlPointsPtr GetControlPointVectorPointers(
        Handle controlPointHandle,
        Boolean lockHandleFlag);

extern SInt16 GetFileFormat(
        Handle fileInfoHandle);

extern SInt16 GetFileFormatFromWindowHandle(
        Handle windowInfoHandle);

extern Handle GetFileMapProjectionHandle(
        Handle fileInfoHandle);

extern Handle GetFileMapProjectionHandle(
        FileInfoPtr fileInfoPtr);

extern CMFileStream* GetFileStreamPointer(
        FileInfoPtr fileInfoPtr);

extern SInt16* GetGroupToPalettePointer(
        Handle imageFileInfoHandle);

extern SInt16* GetGroupToPalettePointer(
        FileInfoPtr imageFileInfoPtr);

extern SInt16 GetHdfDataSetSelection(
        Handle fileInfoHandle);

extern void GetHDF_FilePointers(
        WindowInfoPtr windowInfoPtr,
        FileInfoPtr fileInfoPtr);

extern void GetHierarchalFilePointers(
        WindowInfoPtr windowInfoPtr,
        FileInfoPtr fileInfoPtr);

extern UInt32 GetNumberClasses(
        Handle fileInfoHandle);

extern UInt32 GetNumberControlPoints(
        FileInfoPtr fileInfoPtr);

extern Boolean GetThematicType(
        Handle fileInfoHandle);

extern Handle InitializeFileInfoStructure(
        Handle fileInfoHandle,
        Boolean inputPointerFlag);

extern Handle InitializeHierarchalFileStructure(
        Handle hfaHandle,
        FileInfoPtr fileInfoPtr,
        UInt32 numberBlocks);

extern void SetFileInfoHandle(
        WindowInfoPtr windowInfoPtr,
        Handle fileInfoHandle);

extern void SetFileInstrumentCode(
        Handle fileInfoHandle,
        SInt16 instrumentCode);

extern void SetFileMapProjectionHandle(
        Handle fileInfoHandle,
        Handle mapProjectionHandle);

extern void UnlockGroupTablesHandle(
        Handle imageFileInfoHandle);

extern void UnlockGroupTablesHandle(
        FileInfoPtr imageFileInfoPtr);

extern void UnlockHDF_FileHandles(
        WindowInfoPtr windowInfoPtr,
        FileInfoPtr fileInfoPtr);

extern void UnlockHierarchalFileHandles(
        WindowInfoPtr windowInfoPtr,
        FileInfoPtr fileInfoPtr);

//			end SDatFile.cpp 


//		Routines in SDisInfo.cpp

extern void ReleaseDisplayPaletteMemory(
        DisplaySpecsPtr displaySpecsPtr);

extern void ReleaseDisplaySupportMemory(
        WindowInfoPtr windowInfoPtr);

extern void ReleaseDisplaySupportMemory(
        Handle displaySpecsHandle);

//			end SDisInfo.cpp 


//		Routines in SDisMulc.c	

extern void DisplayImagesSideBySide(
        DisplaySpecsPtr displaySpecsPtr,
        FileInfoPtr fileInfoPtr,
        HPtr offScreenBufferPtr,
        UInt32 pixRowBytes,
        PixMapHandle savedPortPixMapH,
        PixMapHandle offScreenPixMapH,
        LongRect* rectPtr);

extern Boolean DisplayMultispectralImage(void);

extern void DisplayCImage(
        DisplaySpecsPtr displaySpecsPtr,
        HistogramSpecsPtr histogramSpecsPtr,
        FileInfoPtr fileInfoPtr,
        HPtr offScreenBufferPtr,
        UInt32 pixRowBytes,
        PixMapHandle savedPortPixMapH,
        PixMapHandle offScreenPixMapH,
        LongRect* rectPtr,
        SInt16 numberChannels,
        SInt16 displayCode);

extern void GetDefaultPaletteSpecs(
        SInt16 currentDisplayType,
        SInt16 currentPixelSize,
        SInt16 numberChannels,
        UInt16* newDisplayTypePtr,
        SInt16* maxSystemPixelSizePtr);

extern SInt16 GetHistogramComputeCode(
        DisplaySpecsPtr displaySpecsPtr);

extern SInt16 GetMinMaxPopupCode(
        SInt16 minMaxCode,
        SInt16 percentClip);

extern void SetImageWTitle(
        WindowPtr theWindow,
        DisplaySpecsPtr displaySpecsPtr,
        FileInfoPtr fileInfoPtr);

//			end SDisMulc.cpp 


//		Routines in SDisplay.cpp	

extern short int CheckNumberDisplayColumns(
        UInt32 columnStart,
        UInt32 columnEnd,
        UInt32 columnInterval,
        SInt16 pixelSize,
        SInt16 displayType,
        SInt16 numberChannels,
        DialogPtr dialogPtr,
        SInt16 startItem);

extern short int CheckNumberDisplayLines(
        SInt32 lineStart,
        SInt32 lineEnd,
        SInt32 lineInterval,
        DialogPtr dialogPtr,
        SInt16 startItem);

extern Boolean CheckSomeDisplayEvents(
        WindowInfoPtr windowInfoPtr,
        DisplaySpecsPtr displaySpecsPtr,
        PixMapHandle savedPortPixMapH,
        PixMapHandle offScreenPixMapH,
        LongRect* sourceRectPtr,
        SInt32 displayBottomMax);

extern void InvalidateImageSegment(
        WindowInfoPtr windowInfoPtr,
        DisplaySpecsPtr displaySpecsPtr,
        LongRect* sourceRectPtr,
        SInt32 displayBottomMax);

extern void DisplayImage(void);

extern void DisplayColorImage(
        DisplaySpecsPtr displaySpecsPtr,
        HistogramSpecsPtr histogramSpecsPtr);

extern void ForceDisplayCodeResourceLoad(void);

extern DisplaySpecsPtr GetActiveDisplaySpecsPtr(void);

extern SInt16 GetDefaultImagePixelSize(
        SInt16 maxSystemPixelSize);

extern Handle GetDisplaySpecsStructure(
        Handle displaySpecsHandle,
        Boolean initializeFlag);

extern UInt32 GetNumberPixRowBytes(
        UInt32 numberColumns,
        SInt16 pixelSize);

extern SInt16 GetOffscreenGWorld(
        WindowInfoPtr windowInfoPtr,
        DisplaySpecsPtr displaySpecsPtr,
        LongRect* rectPtr,
        UInt32* pixRowBytesPtr);

extern SInt16 InitializeClassGroupsVector(
        FileInfoPtr fileInfoPtr,
        DisplaySpecsPtr displaySpecsPtr);

extern void InitializeDisplaySpecsStructure(
        DisplaySpecsPtr displaySpecsPtr);

extern void SetDisplayImageWindowSizeVariables(
        DisplaySpecsPtr displaySpecsPtr);

extern Boolean SetUpColorImageMemory(
        DisplaySpecsPtr displaySpecsPtr,
        LongRect* sourceRectPtr,
        UInt32* pixRowBytesPtr);

//			end SDisplay.cpp


//		Routines in SDisplay4_8ByteData.cpp	   

extern void Display1Channel4Byte8BitLine(
        UInt32 numberSamples,
        UInt32 interval,
        double minValue1,
        double binFactor1,
        HDoublePtr ioBuffer1Ptr,
        HUCharPtr dataDisplayPtr,
        UInt32 maxBin1,
        HUCharPtr offScreenPtr);

extern void Display2Channel4Byte8BitLine(
        UInt32 numberSamples,
        UInt32 interval,
        double minValue1,
        double minValue2,
        double binFactor1,
        double binFactor2,
        UInt16 backgroundValueCode,
        HDoublePtr ioBuffer1Ptr,
        HDoublePtr ioBuffer2Ptr,
        HUCharPtr dataDisplay1Ptr,
        HUCharPtr dataDisplay2Ptr,
        UInt32 maxValue1,
        UInt32 maxValue2,
        HUCharPtr offScreenPtr);

extern void Display2Channel4Byte16BitLine(
        UInt32 numberSamples,
        UInt32 interval,
        double minValue1,
        double minValue2,
        double binFactor1,
        double binFactor2,
        UInt16 backgroundValueCode,
        HDoublePtr ioBuffer1Ptr,
        HDoublePtr ioBuffer2Ptr,
        HUCharPtr dataDisplay1Ptr,
        HUCharPtr dataDisplay2Ptr,
        UInt32 maxBin1,
        UInt32 maxBin2,
        HUInt16Ptr offScreen2BytePtr,
        SInt16 rgbColors);

extern void Display2Channel4Byte24BitLine(
        UInt32 numberSamples,
        UInt32 interval,
        double minValue1,
        double minValue2,
        double binFactor1,
        double binFactor2,
        UInt16 backgroundValueCode,
        HDoublePtr ioBuffer1Ptr,
        HDoublePtr ioBuffer2Ptr,
        HUCharPtr dataDisplay1Ptr,
        HUCharPtr dataDisplay2Ptr,
        UInt32 maxBin1,
        UInt32 maxBin2,
        HUCharPtr offScreenPtr,
        SInt16 rgbColors);

extern void Display3Channel4Byte8BitLine(
        UInt32 numberSamples,
        UInt32 interval,
        double minValue1,
        double minValue2,
        double minValue3,
        double binFactor1,
        double binFactor2,
        double binFactor3,
        UInt16 backgroundValueCode,
        HDoublePtr ioBuffer1Ptr,
        HDoublePtr ioBuffer2Ptr,
        HDoublePtr ioBuffer3Ptr,
        HUCharPtr dataDisplay1Ptr,
        HUCharPtr dataDisplay2Ptr,
        HUCharPtr dataDisplay3Ptr,
        UInt32 maxValue1,
        UInt32 maxValue2,
        UInt32 maxValue3,
        HUCharPtr offScreenPtr);

extern void Display3Channel4Byte16BitLine(
        UInt32 numberSamples,
        UInt32 interval,
        double minValue1,
        double minValue2,
        double minValue3,
        double binFactor1,
        double binFactor2,
        double binFactor3,
        UInt16 backgroundValueCode,
        HDoublePtr ioBuffer1Ptr,
        HDoublePtr ioBuffer2Ptr,
        HDoublePtr ioBuffer3Ptr,
        HUCharPtr dataDisplay1Ptr,
        HUCharPtr dataDisplay2Ptr,
        HUCharPtr dataDisplay3Ptr,
        UInt32 maxBin1,
        UInt32 maxBin2,
        UInt32 maxBin3,
        HUInt16Ptr offScreen2BytePtr);

extern void Display3Channel4Byte24BitLine(
        UInt32 numberSamples,
        UInt32 interval,
        double minValue1,
        double minValue2,
        double minValue3,
        double binFactor1,
        double binFactor2,
        double binFactor3,
        UInt16 backgroundValueCode,
        HDoublePtr ioBuffer1Ptr,
        HDoublePtr ioBuffer2Ptr,
        HDoublePtr ioBuffer3Ptr,
        HUCharPtr dataDisplay1Ptr,
        HUCharPtr dataDisplay2Ptr,
        HUCharPtr dataDisplay3Ptr,
        UInt32 maxBin1,
        UInt32 maxBin2,
        UInt32 maxBin3,
        HUCharPtr offScreenPtr);

//			end SDisplay4_8ByteData.cpp


//		Routines in SDisThem.cpp	

extern void DisplayColorThematicImage(
        DisplaySpecsPtr displaySpecsPtr,
        FileInfoPtr fileInfoPtr,
        HPtr offScreenBufferPtr,
        UInt32 pixRowBytes,
        PixMapHandle savedPortPixMapH,
        PixMapHandle offScreenPixMapH,
        LongRect* rectPtr);

extern Boolean DisplayThematicImage(void);

extern void LoadClassGroupVector(
        UInt32* numberClassesGroupsPtr,
        Handle classGroupHandle,
        UInt32 numberClasses,
        UInt32 numberGroups,
        SInt16 classGroupCode);

extern void LoadThematicClassNamesIntoList(
        ListHandle listHandle);

extern void LoadThematicGroupNamesIntoList(
        ListHandle listHandle);

//			end SDisThem.cpp


//		Routines in SDis1624.cpp	

extern void Display1Channel16BitLine(
        UInt32 numberSamples,
        UInt32 interval,
        Boolean bytesEqualOneFlag,
        UInt16 backgroundValueCode,
        HFileIOBufferPtr ioBufferPtr,
        HUCharPtr dataDisplayPtr,
        UInt32 maxBin,
        HUInt16Ptr offScreen2BytePtr);

extern void Display2Channel16BitLine(
        UInt32 numberSamples,
        UInt32 interval,
        Boolean bytesEqualOneFlag1,
        Boolean bytesEqualOneFlag2,
        UInt16 backgroundValueCode,
        HFileIOBufferPtr ioBuffer1Ptr,
        HFileIOBufferPtr ioBuffer2Ptr,
        HUCharPtr dataDisplay1Ptr,
        HUCharPtr dataDisplay2Ptr,
        UInt32 maxValue1,
        UInt32 maxValue2,
        HUInt16Ptr offScreen2BytePtr,
        SInt16 rgbColors);

extern void Display2Channel24BitLine(
        UInt32 numberSamples,
        UInt32 interval,
        Boolean bytesEqualOneFlag1,
        Boolean bytesEqualOneFlag2,
        UInt16 backgroundValueCode,
        HFileIOBufferPtr ioBuffer1Ptr,
        HFileIOBufferPtr ioBuffer2Ptr,
        HUCharPtr dataDisplay1Ptr,
        HUCharPtr dataDisplay2Ptr,
        UInt32 maxValue1,
        UInt32 maxValue2,
        HUCharPtr offScreenPtr,
        SInt16 rgbColors);

extern void Display3Channel16BitLine(
        UInt32 numberSamples,
        UInt32 interval,
        Boolean bytesEqualOneFlag1,
        Boolean bytesEqualOneFlag2,
        Boolean bytesEqualOneFlag3,
        UInt16 backgroundValueCode,
        HFileIOBufferPtr ioBuffer1Ptr,
        HFileIOBufferPtr ioBuffer2Ptr,
        HFileIOBufferPtr ioBuffer3Ptr,
        HUCharPtr dataDisplay1Ptr,
        HUCharPtr dataDisplay2Ptr,
        HUCharPtr dataDisplay3Ptr,
        UInt32 maxValue1,
        UInt32 maxValue2,
        UInt32 maxValue3,
        HUInt16Ptr offScreen2BytePtr);

extern void Display3Channel24BitLine(
        UInt32 numberSamples,
        UInt32 interval,
        Boolean bytesEqualOneFlag1,
        Boolean bytesEqualOneFlag2,
        Boolean bytesEqualOneFlag3,
        UInt16 backgroundValueCode,
        HFileIOBufferPtr ioBuffer1Ptr,
        HFileIOBufferPtr ioBuffer2Ptr,
        HFileIOBufferPtr ioBuffer3Ptr,
        HUCharPtr dataDisplay1Ptr,
        HUCharPtr dataDisplay2Ptr,
        HUCharPtr dataDisplay3Ptr,
        UInt32 maxValue1,
        UInt32 maxValue2,
        UInt32 maxValue3,
        HUCharPtr offScreenPtr);

extern void UpdatePaletteFor16and24BImage(void);

//			end SDis1624.cpp


//		Routines in SDlgUtil.cpp 

extern void ActivateDialogItem(
        DialogPtr dialogPtr,
        SInt16 itemNumber);

extern SInt32 AddChannelsToDialogList(
#ifdef multispec_lin
        wxListBox* listHandle,
#endif
#ifndef multispec_lin
        ListHandle listHandle,
#endif
        SInt16* numberOutputFeatures,
        SInt16* selectedFeaturePtr,
        LayerInfoPtr layerInfoPtr,
        FileInfoPtr fileInfoPtr,
        SInt16 listType,
        SInt16* availableFeaturePtr,
        SInt32 numberInputChannels,
        SInt16 currentSelection);
/*
#ifdef multispec_lin
extern SInt32 					AddChannelsToDialogList (
                                                                                wxListBox*							listHandle,
                                                                                SInt16*								numberOutputFeatures, 
                                                                                SInt16* 								selectedFeaturePtr, 
                                                                                LayerInfoPtr						layerInfoPtr,
                                                                                FileInfoPtr							fileInfoPtr,
                                                                                SInt16								listType, 
                                                                                SInt16* 								availableFeaturePtr, 
                                                                                SInt32								numberInputChannels,
                                                                                SInt16								currentSelection);
#endif											
 */
extern Boolean ChannelsDialog(
        SInt16* numberOutputFeatures,
        SInt16* selectedFeaturePtr,
        LayerInfoPtr layerInfoPtr,
        FileInfoPtr fileInfoPtr,
        SInt16 listType,
        Boolean userTransformFlag,
        SInt16* availableFeaturePtr,
        SInt16 numberInputChannelss,
        SInt16 currentSelection);

extern SInt16 CheckDialogRealValue(
        DialogPtr dialogPtr,
        SInt16 itemNumber,
        double minValue,
        double maxValue,
        SInt16 numberDecimalPlaces,
        Boolean minValueAllowedFlag,
        Boolean maxValueAllowedFlag,
        Boolean showAlertMessageFlag);

extern Boolean CheckFeatureTransformationDialog(
        DialogPtr dialogPtr,
        Boolean featureTransformAllowedFlag,
        short int featureTransformItem,
        short int channelFeatureItem,
        Boolean* featureTransformationFlagPtr);

extern SInt16 CheckMaxValue(
        DialogPtr dialogPtr,
        SInt16 itemNumber,
        SInt32 minValue,
        SInt32 maxValue,
        Boolean showAlertMessageFlag);

extern void CloseStatusDialog(
				Boolean								showMenuBarFlag);
		  
extern SInt16 CreateUnicodeStaticTextControl (
				DialogPtr							dialogPtr,
				UCharPtr								stringPtr,
				UInt16								stringLength,
				UInt16								dialogItem,
				ControlRef*							controlRefPtr);

extern void DeactivateDialogItem(
				DialogPtr							dialogPtr,
				SInt16								itemNumber);

extern SInt16 DisplayAlert (
				SInt16								alertResourceId,
				SInt16								alertType,
				SInt16								stringID,
				SInt16								stringNumber1,
				SInt16								stringNumber2,
				UCharPtr								stringPtr,
				UInt16								stringCharCode=kASCIICharString);

extern Boolean GetDialogLocalVectors(
        UInt16** channelsPtrPtr,
        UInt16** transformFeaturesPtrPtr,
        UInt16** classPtrPtr,
        UInt16** classAreaPtrPtr,
        float** classWeightsPtrPtr,
        unsigned char** symbolsPtrPtr,
        UInt16** channelCombinationsPtrPtr,
        SInt16** classPairWeightsListPtrPtr);

extern SInt32 GetDItemValue(
        DialogPtr dialogPtr,
        SInt16 itemNumber);

extern void GetMultiSpecDialogItemText(
        DialogPtr dialogPtr,
        SInt16 itemNumber,
        unsigned char* textStringPtr);

extern SInt64 GetNumberOfSelectedPixels(
        DialogSelectAreaPtr dialogSelectAreaPtr);

extern DialogPtr GetStatusDialog(
        SInt16 statusDialogID,
        Boolean showWindowFlag);

extern void HideDialogItems(
        DialogPtr dialogPtr,
        SInt16 startTime,
        SInt16 lastItem);

extern void HideStatusDialogItemSet(
        SInt16 setNumber);

extern void InitializeDialogFeatureParameters(
        Boolean featureTransformationFlag,
        UInt16 localActiveNumberFeatures,
        UInt16 numberFeatures,
        UInt16 numberTransformFeatures,
        UInt16* localFeaturesPtr,
        UInt16* localTransformFeaturesPtr,
        UInt16* localNumberFeaturesPtr,
        UInt16* localNumberTransformFeaturesPtr,
        UInt16** localActiveFeaturesPtrPtr);

extern void InitializeDialogSelectArea(
        DialogSelectAreaPtr dialogSelectAreaPtr,
        WindowInfoPtr windowInfoPtr,
        WindowPtr windowPtr,
        UInt32 columnStart,
        UInt32 columnEnd,
        UInt32 columnInterval,
        UInt32 lineStart,
        UInt32 lineEnd,
        UInt32 lineInterval,
        SInt16 baseItem,
        SInt16 entireIconItem,
        Boolean adjustToBaseImageFlag);

extern void InvalDialogItemRect(
        DialogPtr dialogPtr,
        SInt16 itemNumber);

extern void LoadDialogLocalVectors(
        UInt16* localChannelsPtr,
        UInt16* localTransformFeaturesPtr,
        Handle featureHandle,
        UInt16 numberChannels,
        UInt16* localClassPtr,
        Handle classHandle,
        UInt32 numberClasses,
        UInt16* localClassAreaPtr,
        Handle classAreaHandle,
        UInt32 numberClassAreas,
        unsigned char* localSymbolPtr,
        Handle symbolHandle,
        UInt32 numberSymbols,
        UInt16* localChannelCombinationsPtr,
        Handle channelCombinationsHandle,
        UInt32 numberChannelGroupCombinations,
        SInt16** localClassPairWeightsListPtrPtr);

extern void LoadDItemRealValue(
        DialogPtr dialogPtr,
        SInt16 itemNumber,
        double realValue,
        SInt16 decimalPlaces);

extern void LoadDItemRealValue(
        DialogPtr dialogPtr,
        SInt16 itemNumber,
        double realValue,
        SInt16 numberFDecimalDigits,
        SInt16 numberEDecimalDigits);

extern void LoadDItemString(
				DialogPtr							dialogPtr,
				SInt16								itemNumber,
				Str255*								theStringPtr,
				Boolean								wideCharInputStringFlag=false);

extern void LoadDItemString(
				DialogPtr							dialogPtr,
				SInt16								itemNumber,
				CharPtr								theStringPtr,
				Boolean								wideCharInputStringFlag=false);

extern void LoadDItemStringNumber(
        SInt16 strListID,
        SInt16 stringNumber,
        DialogPtr dialogPtr,
        SInt16 itemNumber,
        Str255* stringPtr);

extern void LoadDItemValue(
        DialogPtr dialogPtr,
        SInt16 itemNumber,
        SInt64 value);

extern void LoadDItemValueWithCommas(
        DialogPtr dialogPtr,
        SInt16 itemNumber,
        SInt64 theNum);

extern void LoadLineColumnItems(
        DialogSelectAreaPtr dialogSelectAreaPtr,
        DialogPtr dialogPtr,
        Boolean initializeLineColumnValuesFlag = TRUE,
        Boolean intervalEditBoxesExistFlag = TRUE,
        SInt16 lineColumnSet = 1);

extern void LoadProcessorVectorsFromDialogLocalVectors(
        SInt16 channelSelection,
        Boolean featureTransformationFlag,
        UInt16 numberAllChannels,
        UInt16 localNumberChannels,
        UInt16* localFeaturesPtr,
        SInt16* channelSetPtr,
        UInt16* numberFeaturesPtr,
        Handle featureHandle,
        UInt16* numberChannelsPtr,
        Handle channelHandle,
        SInt16 classSelection,
        UInt32 localNumberClasses,
        UInt16* localClassesPtr,
        SInt16* classSetPtr,
        UInt32* numberClassesPtr,
        Handle classHandle,
        SInt16 symbolSelection,
        unsigned char* localSymbolPtr,
        SInt16* symbolSetPtr,
        Handle symbolsHandle,
        SInt16 interClassWeightsSelection,
        SInt16* localClassPairWeightsListPtr,
        SInt16* classPairWeightSetPtr);

extern void LoadSubsetList(
        SInt16* numberOutputFeaturesPtr,
        SInt16* selectedFeaturePtr,
        SInt16* availableFeaturePtr,
        SInt16 numberInputChannels,
        SInt16* currentSelectionPt);

extern void MHideDialogItem(
        DialogPtr dialogPtr,
        SInt16 itemNumber);

extern void NumberErrorAlert(
        SInt32 theLongValue,
        DialogPtr dialogPtr,
        SInt16 itemHit);

extern void ReleaseDialogLocalVectors(
        UInt16* channelsPtr,
        UInt16* transformFeaturesPtr,
        UInt16* classPtr,
        UInt16* classAreaPtr,
        float* classWeightsPtr,
        unsigned char* symbolsPtr,
        UInt16* channelCombinationsPtr,
        SInt16* classPairWeightsListPtr);

extern void SaveSubsetList(
        SInt16 numberSelectedFeatures,
        SInt16* selectedFeaturePtr,
        SInt16* availableFeaturePtr,
        SInt16 numberInputChannels);

extern void SetDialogItemToEditText(
        DialogPtr dialogPtr,
        SInt16 itemNumber);

extern void SetDialogItemToStaticText(
        DialogPtr dialogPtr,
        SInt16 itemNumber);

extern void SetDLogControl(
        DialogPtr dialogPtr,
        SInt16 itemNumber,
        SInt16 setting);

extern void SetDLogControlHilite(
        DialogPtr dialogPtr,
        SInt16 itemNumber,
        SInt16 setting);


extern void SetDLogControlTitle (
				DialogPtr							dialogPtr,
				SInt16								itemNumber,
				CharPtr								theStringPtr,
				UInt16								inputStringFormatCode=kASCIICharString);

extern void SetDLogControlTitleNumber(
        SInt16 strListID,
        SInt16 stringNumber,
        DialogPtr dialogPtr,
        SInt16 itemNumber,
        Str255* stringPtr);

extern void ShowHideDialogItem(
        DialogPtr dialogPtr,
        short int itemNumber,
        Boolean showFlag);

extern SInt16 UpdateDialogFeatureParameters(
        Boolean featureTransformationFlag,
        UInt16* localActiveNumberFeaturesPtr,
        UInt16** localActiveFeaturePtrPtr,
        SInt16 localNumberFeatures,
        UInt16* localFeaturesPtr,
        UInt16 maxNumberFeatures,
        SInt16 localNumberTransformedFeatures,
        UInt16* localTransformFeaturesPtr,
        UInt16 maxNumberTransformFeatures);

extern SInt16 UpdateDialogNumberFeatureParameters(
        Boolean featureTransformationFlag,
        UInt16* localActiveNumberFeaturesPtr,
        UInt16* localNumberFeaturesPtr,
        UInt16 maxNumberFeatures,
        UInt16* localNumberTransformFeaturesPtr,
        UInt16 maxNumberTransformFeatures,
        SInt16 channelSelection);

//			end SDlgUtil.cpp  


//		Routines in SEchoSpc.cpp

extern SInt16 EchoClassifier(
        SInt16 classPointer,
        AreaDescriptionPtr areaDescriptionPtr,
        FileIOInstructionsPtr fileIOInstructionsPtr,
        ClassifierVarPtr clsfyVariablePtr,
        SInt64* countVectorPtr);

extern UInt32 EstimateNumberOfHomogeneousFields(
        EchoClassifierVar* echoInfoPtr);

//			end SEchoSpc.cpp  


//		Routines in SEClssfy.cpp (echo_classify.c)

extern void EchoClsfierControl(
        FileInfoPtr fileInfoPtr);

extern SInt16 GetLinesOfData(
        FileIOInstructionsPtr fileIOInstructionsPtr);

extern SInt16 PostEchoClassifier(
        SInt16 classPointer,
        AreaDescriptionPtr areaDescriptionPtr,
        CMFileStream* resultsFileStreamPtr,
        CMFileStream* clProbabilityFileStreamPtr,
        HUCharPtr ioBuffer1Ptr,
        EchoClassifierVar* echo_info,
        ClassifierVarPtr clsfyVariablePtr,
        SInt64* countVectorPtr);

//			end SEClssfy.cpp  


//		Routines in SEdtStat.cpp (editStatistics.c)

extern Boolean ChangeProjectChannelsList(
        short int);

extern void ClearProjectStatistics(
        SInt16 clearCode);

extern void ClearProjectMaskStatistics(void);

extern void CutMaskFields(
        SInt16 maskSetCode);

extern void DoStatisticsWCut(void);

extern void DoStatisticsWEdit(
        short int);

extern void DoStatisticsWPaste(void);

extern void DoStatisticsWUndo(void);

extern void DupClassFieldNameAlert(
				SInt16						classFieldFlag,
				UCharPtr						duplicateNamePtr);

extern Boolean EditClassFieldDialog(
        short int,
        short int,
        short int);

extern Boolean EditCoordinatesDialog(
        SInt16 currentClass,
        SInt16 currentField,
        SInt16 polygonPoint);

extern SInt64 GetNumberOfTrainPixelsInClass(
        HPClassNamesPtr classNamesPtr,
        HPFieldIdentifiersPtr fieldIdentPtr);

extern void UpdateStatWEditMenu(void);

//			end SEdtStat.cpp (editStatistics.c) 


//		Routines in SFeatExt.cpp (featureExtraction.c)	

extern void FeatureExtractionControl(void);

extern void GetTranformationFeatureMeans(
        ClassInfoPtr classInfoPtr,
        UInt16 numberClasses,
        UInt16 numberChannels,
        UInt16 numberFeatures,
        HDoublePtr eigenVectorPtr,
        HDoublePtr eigenFeatureMeanPtr);

//			end SFeatExt.cpp (featureExtraction.c)


//		Routines in SFeatSel.cpp (separability.c)			

extern void SeparabilityControl(void);

//			end SFeatSel.cpp 


// 	Routines in SFileIO.cpp 	

extern Boolean CheckIfSpecifiedFileExists(
        CMFileStream* fileStreamPtr,
        char* suffixToCheckPtr);

extern void CloseFile(
        CMFileStream* fileStreamPtr);

extern void CloseFile(
        FileInfoPtr fileInfoPtr);

extern void CloseFile(
        Handle fileStreamHandle);

extern void CloseFile(
        MaskInfoPtr maskInfoPtr);

extern void CloseUpFileIOInstructions(
        FileIOInstructionsPtr fileIOInstructionsPtr,
        AreaDescription* areaDescriptionPtr);

extern void CloseUpGeneralFileIOInstructions(
        FileIOInstructionsPtr fileIOInstructionsPtr);

extern void CloseWindowImageFiles(
        Handle windowInfoHandle);

extern SInt32 ConvertATRealtoInt(
        CharPtr atRealPtr);

extern double ConvertATRealtoReal(
        CharPtr atRealPtr);

extern double ConvertIBM370RealtoReal(
        SInt32* IBM370RealPtr);

extern SInt32 ConvertRealAT(
        double realValue);

extern void CopyFileStream(
        CMFileStream* newFileStreamPtr,
        CMFileStream* oldFileStreamPtr);

extern Boolean CopyFileStream(
        FileInfoPtr inputFileInfoPtr,
        Handle* outputFileStreamHandlePtr,
        CMFileStream** outputFileStreamPtrPtr);

extern Boolean CreateThematicSupportFile(
        FileInfoPtr gisFileInfoPtr,
        ShapeInfoPtr shapeInfoPtr,
        UInt16 numberClasses,
        SInt16* classPtr,
        UInt16 numberListClasses,
        ColorSpec* colorSpecPtr,
        CMPaletteInfo paletteHandle,
        UInt16* paletteIndexPtr,
        SInt16 paletteId,
        UInt16 numberPaletteEntriesToRead,
        //										SInt16								paletteOffset,
        SInt16 classNameCode,
        SInt16 trailerCode,
        SInt16 thematicListType,
        SInt16 collapseClassCode,
        UInt32 supportFileType);

extern SInt16 CreateNewFile(
        CMFileStream* fileStreamPtr,
        SInt16 vRefNum,
        SInt32 creator,
        SInt16 messageCode,
        Boolean doNotReplaceFlag);

extern void DiskFullAlert(
        SInt64 bytesNeeded,
        Str255* fileNamePtr);

extern CMFileStream* DisposeCMFileStream(
        CMFileStream* fileStreamPtr);

extern Boolean FileExists(
        CMFileStream* fileStreamPtr);

extern Boolean FileOpen(
        CMFileStream* fileStreamPtr);

extern Boolean GetBILSpecial(
        FileIOInstructionsPtr fileIOInstructionsPtr,
        UInt16* channelListPtr,
        UInt16 numberListChannels,
        UInt32 columnStart,
        UInt32 columnEnd,
        UInt32 columnInterval,
        UInt16 specialBILCode);

extern void GetCopyOfPFileName (
				CMFileStream*						fileStreamPtr,
				FileStringPtr						outputPtr,
				SInt16								returnCode=kDefaultFileStringCode);

extern void GetCopyOfPFileName (
				FileInfoPtr							fileInfoPtr,
				FileStringPtr						outputPtr,
				SInt16								returnCode=kDefaultFileStringCode);

extern UInt32 GetDataConversionCode(
        UInt32 inputDataTypeCode,
        UInt32 inputNumberBytes,
        Boolean inputSignedFlag,
        UInt32 forceOutByteCode,
        Boolean outputSignedFlag,
        Boolean* changePossibleFlagPtr);

extern SInt16 GetFile(
        CMFileStream* fileStreamPtr,
        SInt16 numberTypes,
        OSType* fileTypes,
        LocalAppFile* localAppFilePtr,
        FSRef* fileAsFSRefPtr,
        UInt32* itemCountPtr,
        SInt16 stringIndex);

extern SInt32 GetFileCreator(
        CMFileStream* fileStreamPtr);

extern void* GetFileNameCPointer(
				Handle								fileInfoHandle,
				SInt16								returnCode=kDefaultFileStringCode);

extern void* GetFileNameCPointer(
				FileInfoPtr							fileInfoPtr,
				SInt16								returnCode=kDefaultFileStringCode);

extern void* GetFileNameCPointer(
				CMFileStream*						fileStreamPtr,
				SInt16								returnCode=kDefaultFileStringCode);

extern SInt16 GetFileNameFromFSRef(
				FSRef*								fileAsFSRefPtr,
				FileStringPtr						fileNamePtr);

extern void* GetFileNamePPointer(
				FileInfoPtr							fileInfoPtr,
				SInt16								returnCode = kDefaultFileStringCode);

extern void* GetFileNamePPointer(
				CMFileStream*						fileStreamPtr,
				SInt16								returnCode = kDefaultFileStringCode);

extern void* GetFileNamePPointer(
				Handle								fileInfoHandle,
				SignedByte*							handleStatusPointer,
				SInt16								returnCode = kDefaultFileStringCode);

extern void* GetFilePathPPointer(
				FileInfoPtr							fileInfoPtr,
				SInt16								returnCode=kDefaultFileStringCode);

extern void* GetFilePathPPointer(
				CMFileStream*						fileStreamPtr,
				SInt16								returnCode=kDefaultFileStringCode);

extern SInt64 GetFilePositionOffset(
        FileIOInstructionsPtr fileIOInstructionsPtr,
        FileInfoPtr fileInfoPtr,
        UInt32 lineNumber,
        SInt16 channelNumber,
        UInt32 columnStart,
        UInt32 columnEnd,
        UInt32* numberSamplesPtr,
        UInt32* countPtr,
        Boolean* endHalfBytePtr);

extern UInt32 GetFileSize(
        CMFileStream* fileStreamPtr);

extern SInt32 GetFileType(
        CMFileStream* fileStreamPtr);

extern SInt16 GetFileTypeAndCreator(
        CMFileStream* fileStreamPtr);

extern Boolean GetFSSpecFlag(
        FileInfoPtr fileInfoPtr);

extern Boolean GetFSSpecFlag(
        Handle fileInfoHandle);

extern SInt16 GetLine(
        FileIOInstructionsPtr fileIOInstructionsPtr,
        FileInfoPtr fileInfoPtr,
        UInt32 lineNumber,
        SInt16 channelNumber,
        UInt32 columnStart,
        UInt32 columnEnd,
        UInt32* numberSamplesPtr,
        HUCharPtr fileIOBufferPtr);

extern SInt16 GetLineOfData(
        FileIOInstructionsPtr fileIOInstructionsPtr,
        UInt32 lineNumber,
        UInt32 columnStart,
        UInt32 columnEnd,
        UInt32 columnInterval,
        HUCharPtr fileIOBufferPtr,
        HUCharPtr dataBufferPtr);

extern SInt32 GetNumberGAIALineSegments(
        SInt32 numberColumns);

extern SInt32 GetParID(
        FileInfoPtr fileInfoPtr);

extern SInt32 GetParID(
        Handle fileInfoHandle);

extern SInt16 GetReferenceNumber(
        CMFileStream* fileStreamPtr);

extern SInt16 GetShortIntValue(
        CharPtr outTextPtr);

extern SInt16 GetSizeOfFile(
        FileInfoPtr fileInfoPtr,
        SInt64* sizeBytesPtr);

extern SInt16 GetSizeOfFile(
        CMFileStream* fileStreamPtr,
        SInt64* sizeBytesPtr);

extern SInt64 GetSizeOfImage(
        FileInfoPtr fileInfoPtr);

extern SInt16 GetVolumeFreeSpace(
        Str255* fileNamePtr,
        SInt16 vRefNum,
        SInt64* freeBytesPtr);

extern SInt16 GetVolumeReferenceNumber(
        FileInfoPtr fileInfoPtr);

extern SInt16 GetVolumeReferenceNumber(
        CMFileStream* fileStreamPtr);

extern SInt16 GetVolumeReferenceNumber(
        Handle fileInfoHandle);

extern void IndicateFileClosed(
        CMFileStream* fileStreamPtr);

extern void InitializeFileIOInstructions(
        FileIOInstructionsPtr fileIOInstructionsPtr);

extern CMFileStream* InitializeFileStream(
        CMFileStream* fileStreamCPtr);

extern Handle InitializeFileStream(
        Handle fileStreamHandle);

extern void InitializeFileStream(
        CMFileStream* newFileStreamPtr,
        CMFileStream* oldFileStreamPtr);

extern void IOCheck(
        SInt16 errCode,
        char* fileNamePtr);

extern void IOCheck(
        SInt16 errCode,
        CMFileStream* fileStreamPtr);

extern Boolean LoadErdasHeader(
        FileInfoPtr fileInfoPtr,
        UInt8* headerRecordPtr,
        SInt16 ERDASVersion);

extern Boolean LoadNewErdasHeader(
        FileInfoPtr fileInfoPtr,
        UInt8* headerRecordPtr,
        SInt16 ERDASVersion);

extern SInt16 MDeleteFile(
        CMFileStream* fileStreamPtr,
        SInt16 messageCode);

extern SInt16 MReadData(
        CMFileStream* fileStreamPtr,
        UInt32* numberBytesPtr,
        void* inBufferPtr,
        SInt16 messageCode);

extern SInt16 MSetMarker(
        CMFileStream* fileStreamPtr,
        SInt16 fromCode,
        SInt64 inOffset,
        SInt16 messageCode);

extern SInt16 MSetSizeOfFile(
        CMFileStream* fileStreamPtr,
        SInt64 countBytes,
        SInt16 messageCode);

extern SInt16 MWriteData(
        CMFileStream* fileStreamPtr,
        UInt32* numberBytesPtr,
        void* inBufferPtr,
        SInt16 messageCode);

extern SInt16 OpenFileReadOnly (
				CMFileStream*						fileStreamPtr,
				Boolean								resolveAliasFlag,
				Boolean								lockFileFlag,
				Boolean								verifyFileStreamFlag);

extern SInt32 OpenImageFile (
				LocalAppFile*						localAppFilePtr,
				Boolean								fromOpenProjectImageWindowFlag = FALSE,
				UInt16								hdfDataSetSelection = 0);

extern SInt16 PrepareToReadTextFile(
				HParamBlockRec*					paramBlockPtr,
				CMFileStream*						fileStreamPtr,
				UCharPtr								bufferPtr,
				UInt32								bufferLength,
				SInt16*								endOfLineCodePtr,
				UInt32*								numberEndOfLineBytesPtr);

extern SInt16 PutFile(
        CMFileStream* fileStreamPtr,
        SInt64 numberBytes,
        SInt16 promptStringIndex,
        SInt32 creator);

extern SInt16 ResolveAnyAliases(
        CMFileStream* fileStreamPtr,
        Boolean* wasAliasedFlagPtr);

extern void SetCFileName(
        FileInfoPtr fileInfoPtr,
        FileStringPtr inputFileNameCPtr);

extern void SetCFileName(
        CMFileStream* fileStreamPtr,
        FileStringPtr inputFileNameCPtr);

extern void SetFileDoesNotExist(
				CMFileStream*						fileStreamPtr,
				UInt16								keepNameTypeCode=0);

extern void SetFileReadOnly(
        CMFileStream* fileStreamPtr);

extern SInt16 SetFileSizeToZero(
        CMFileStream* fileStreamPtr);

extern SInt16 SetFileWriteEnabled(
        CMFileStream* fileStreamPtr);

extern void SetFSSpecFlag(
        CMFileStream* fileStreamPtr,
        Boolean fSSpecFlag);

extern void SetParID(
        CMFileStream* fileStreamPtr,
        SInt32 parID);

extern void SetReferenceNumber(
        CMFileStream* fileStreamPtr,
        SInt16 refNum);

extern void SetType(
        CMFileStream* fileStreamPtr,
        SInt32 type);

extern SInt16 SetUpFileIOInstructions(
        FileIOInstructionsPtr fileIOInstructionsPtr,
        AreaDescription* areaDescriptionPtr,
        UInt16 numberListChannels,
        HUInt16Ptr channelListPtr,
        UInt16 specialBILCode);

extern SInt16 SetUpFileIOInstructions(
        FileIOInstructionsPtr fileIOInstructionsPtr,
        AreaDescription* areaDescriptionPtr,
        UInt32 lineStart,
        UInt32 lineEnd,
        UInt32 lineInterval,
        UInt32 columnStart,
        UInt32 columnEnd,
        UInt32 columnInterval,
        UInt16 numberListChannels,
        HUInt16Ptr channelListPtr,
        UInt16 specialBILCode);

extern void SetUpGeneralFileIOInstructions(
        FileIOInstructionsPtr fileIOInstructionsPtr,
        WindowInfoPtr windowInfoPtr,
        LayerInfoPtr layerInfoPtr,
        FileInfoPtr fileInfoPtr,
        UInt16 numberChannels,
        HUInt16Ptr channelListPtr,
        HUCharPtr inputBufferPtr,
        HUCharPtr outputBufferPtr,
        HUCharPtr tiledBufferPtr,
        UInt32 bufferOffset,
        Boolean packDataFlag,
        Boolean forceBISFormatFlag,
        UInt16 forceByteCode,
        FileIOInstructionsPtr* outputFileIOInstructionsPtrPtr);

extern SInt16 SetVolume(
        CMFileStream* fileStreamPtr,
        SInt16 messageCode);

extern void SetVolumeReference(
        CMFileStream* inputFileStreamPtr,
        CMFileStream* outputFileStreamPtr);

extern void SwapBytes(
        SInt16 numberBytes,
        HUInt8Ptr fileIOBufferPtr,
        UInt32 numberSamples);

extern void Swap2Bytes(
        HUInt16Ptr twoBytePtr,
        UInt32 numberSamples);

extern void Swap4Bytes(
        HUInt32Ptr fourBytePtr,
        UInt32 numberSamples);

extern void		Swap8Bytes(
				DoublePtr							eightBytePtr,
				UInt32								numberSamples);

extern SInt16	VerifyFileStreamForOpen (
				CMFileStream*						fileStreamPtr,
				FileStringPtr						fileNamePtr=NULL);

//			end SFileIO.cpp


//		Routines in SGaiaUtl.cpp

extern SInt32 ConvertLineToGAIAFormat(
        HUCharPtr inputBufferPtr,
        HUInt16Ptr outputBufferPtr,
        SInt32 count,
        SInt32 lineNumber);

extern Boolean CopyToNewGAIAHeader(
        FileInfoPtr inFileInfoPtr,
        FileInfoPtr outFileInfoPtr,
        HPtr headerRecordPtr,
        SInt32 lineInterval,
        SInt32 columnInterval);

//extern void 					ForceGAIACodeResourceLoad (void); 

extern void InitializeGAIALineBytes(
        HUInt16Ptr buffer2Ptr,
        SInt32 numSamplesPerChan,
        SInt16 offset);

extern SInt32 GetNumberBytesInGAIALine(
        SInt32 numberColumns);

extern Boolean ReadGAIAClassNames (
				FileInfoPtr							fileInfoPtr,
				UCharPtr								classNamePtr);

extern SInt16 ReadGAIAHeader(
        FileInfoPtr fileInfoPtr,
        char* headerRecordPtr,
        SInt16 formatOnlyCode);

extern Boolean WriteGAIAHeader(
        FileInfoPtr fileInfoPtr,
        HPtr headerRecordPtr,
        SInt16 numberChannels,
        SInt16* channelListPtr,
        UInt32 numberClasses,
        SInt16* classPtr);

//			end SGaiaUtl.cpp 


//		Routines in SGDALInterface.cpp

extern void CloseGDALInterface(void);

extern Boolean GDALSetStatePlaneParametersFromZone(
        SInt16 fipsZone,
        SInt16 datumCode,
        UCharPtr fipsZoneNamePtr,
        SInt16* projectionCodePtr,
        double* longitudeCentralMeridianPtr,
        double* latitudeOriginPtr,
        double* scaleFactorOfCentralMeridianPtr,
        double* falseEastingPtr,
        double* falseNorthingPtr,
        double* standardParallel1Ptr,
        double* standardParallel2Ptr,
        double* falseOriginLongitudePtr,
        double* falseOriginLatitudePtr,
        double* falseOriginEastingPtr,
        double* falseOriginNorthingPtr);

extern void HandleGDALErrorMessage(
        SInt16 errCode);

extern Boolean ListGDALDataSetAttributes(
        FileInfoPtr fileInfoPtr,
        Boolean listAllDataSetInfoFlag);

extern SInt16			ReadHeaderWithGDALLibrary(
				FileInfoPtr								fileInfoPtr,
				char*										headerRecordPtr,
				SInt16									formatOnlyCode);

//			end SGaiaUtl.cpp


//		Routines in SGDALInterface.cpp

extern SInt16 CheckIfDefaultGDALPaletteExists(
        FileInfoPtr fileInfoPtr);

extern Boolean GDALSetReferenceSystemFromEPSGCode (
				SInt16									epsgCode,
				UCharPtr									epsgNamePtr,
				UCharPtr									datumNamePtr,
				UCharPtr									ellipsoidNamePtr,
				SInt16*									mapUnitsCodePtr,
				SInt16*									projectionCodePtr,
				double*									longitudeCentralMeridianPtr,
				double*									latitudeOriginPtr,
				double*									scaleFactorOfCentralMeridianPtr,
				double*									falseEastingPtr,
				double*									falseNorthingPtr,
				double*									standardParallel1Ptr,
				double*									standardParallel2Ptr,
				double*									falseOriginLongitudePtr,
				double*									falseOriginLatitudePtr,
				double*									falseOriginEastingPtr,
				double*									falseOriginNorthingPtr,
				double*									semiMajorAxisPtr,
				double*									semiMinorAxisPtr);

extern Boolean GetNewGDALFileReference(
        FileInfoPtr fileInfoPtr);

extern SInt32 GetStatePlanePCSCode(
        SInt16 datumCode,
        SInt16 fipsZone);

extern Boolean ReadGDALColorTable(
        ColorSpec* colorSpecPtr,
        FileInfoPtr imageFileInfoPtr,
        DisplaySpecsPtr displaySpecsPtr,
        UInt16* classSymbolPtr,
        UInt16* paletteCodePtr);

extern Boolean ReadPRJFileInformation(
        char *prjStringPtr,
        SInt16 *projcsCodePtr,
        SInt16 *geogcsCodePtr,
        SInt16 *unitsCodePtr);

//			end SGDALInterface.cpp


//		Routines in SGeoTIFF.cpp

extern SInt16 GetGTModelTypeGeoKey(
        FileInfoPtr fileInfoPtr);

extern Boolean GetSpecifiedTIFFKeyDirectory(
        FileInfoPtr fileInfoPtr,
        UInt32 tiffKeyNumber,
        TIFFImageFileDirectory* imageFileDirectoryPtr);

extern Boolean GetSwapBytesFlagForTiffFile(
        char* headerRecordPtr);

extern SInt16 GetTIFFASCIIParameters(
        CMFileStream* fileStreamPtr,
        TIFF_IFD_Ptr imageFileDirectoryPtr,
        char* stringPtr,
        SInt32 numberCharacters);

extern UInt32 GetTIFFNumberHeaderBytes(
        FileInfoPtr fileInfoPtr);

extern Boolean ListTiffTextDescriptionParameters(
        FileInfoPtr fileInfoPtr);

extern void SetProjectionInformationFromString(
        MapProjectionInfoPtr mapProjectionInfoPtr,
        char* inputStringPtr);

extern SInt16 ReadTIFFHeader(
        FileInfoPtr fileInfoPtr,
        char* headerRecordPtr,
        SInt16 formatOnlyCode);

extern void SetProjectionInformationFromString2(
        FileInfoPtr fileInfoPtr,
        MapProjectionInfoPtr mapProjectionInfoPtr);

extern void UpdateUpperLeftMapValues(
        FileInfoPtr fileInfoPtr);

//			end SGeoTIFF.cpp


//		Routines in SGraUtil.cpp

extern Boolean CheckGraphVectorsSize(
        GraphPtr graphRecordPtr,
        SInt32 requestedLength,
        SInt32 numberVectors,
        SInt32 numberSets);

extern Boolean CheckSomeGraphWindowEvents(
        GraphPtr graphRecordPtr);

extern CMGraphView* CreateGraphWindow(void);

extern void CloseGraphWindow(
        WindowPtr windowPtr);

extern void CopyGraphYVector(
        Handle inputGraphRecordHandle,
        GraphPtr outputGraphRecordPtr);

extern Boolean CreateGraph(
        CMGraphView* graphViewCPtr,
        GraphPtr graphRecordPtr,
        SInt32 lineStart,
        SInt32 columnStart,
        SInt32 lineEnd,
        SInt32 columnEnd);

extern void DisposeOfGraphRecordMemory(
        GraphPtr graphRecordPtr);

extern void DoGraphWActivateEvent(
        WindowPtr windowPtr,
        Handle windowInfoHandle,
        Boolean becomingActiveFlag);

extern Boolean DoGraphWindowEdit(
        SInt16 menuItem);

extern void DoGraphWindowGrow(
        WindowPtr window,
        Handle windowInfoHandle);

extern void DoGraphWMouseDnContent(
        WindowPtr theWindow,
        Point mousePt);

extern void DoGraphWUpdateEvent(
        WindowPtr window,
        CMGraphView* graphViewCPtr);

extern void DoNextOrPreviousChannel(
        CMGraphView* graphViewCPtr,
        SInt16 controlIdentifier);

extern Boolean DrawGraph(
        GraphPtr graphRecPtr,
        Boolean copyFlag);

extern void DrawGraphControls(
        WindowPtr windowPtr);

extern void DrawGraphGrowIcon(
        GraphPtr graphRecordPtr);

extern void ForceGraphCodeResourceLoad(void);

extern Handle GetGraphRecordHandle(
        WindowPtr window);

extern Handle GetGraphRecordHandle(
        Handle windowInfoHandle);

extern GraphPtr GetGraphRecordPtr(
        CMGraphView*,
        SignedByte* handleStatusPtr,
        Handle* graphRecHandlePtr);

extern GraphPtr GetGraphRecordPtr(
        WindowPtr window,
        SignedByte* handleStatusPtr,
        Handle* graphRecHandlePtr);

extern void GetGraphWindowLocation(
        SInt16* xSizePtr,
        SInt16* ySizePtr);

extern PascalVoid GraphChangeSetControlEvent(
        ControlHandle theControl,
        SInt16 partCode);

extern void ListBinWidthValue(
        GraphPtr graphRecordPtr,
        Boolean drawInWindowFlag);

extern void LoadGraphSupportArrays(
        GraphPtr graphRecordPtr,
        SInt32 vectorLength);

extern Boolean LoadGraphXVector(
        GraphPtr graphRecordPtr,
        SInt16* channelListPtr,
        SInt32 vectorLength);

extern void LoadGraphYVector(
        GraphPtr graphRecordPtr,
        double* buffer8BytePtr,
        //										SInt32*								buffer4BytePtr, 
        UInt32 vectorLength,
        UInt16 inputIndex);

extern void LoadGraphYVector2(
        GraphPtr graphRecordPtr,
        ChannelStatisticsPtr channelStatsPtr,
        UInt32 vectorLength);

extern void SetGraphMinMax(
        GraphPtr											graphRecordPtr, 
        SInt16												axisCode);

extern void SetGraphWindowTitle(
        CMGraphView* graphViewCPtr,
        Boolean newWindowFlag);

extern Boolean SetHistogramBinWidth(
        CMGraphView* graphViewCPtr,
        SInt16 binWidthSelection);

extern void SetOverlayDisplayList(
        CMGraphView* garphViewCPtr,
        SInt16 overlaySelection);

extern void SetStatHistogramGraphTitle2(
        GraphPtr graphRecordPtr);

extern void SetUpBinWidthPopUpMenu(
        CMGraphView* graphViewCPtr,
        MenuHandle popUpMenuHandle);

extern void SetUpOverlayPopUpMenu(
        CMGraphView* garphViewCPtr,
        MenuHandle popUpMenuHandle);

extern void SetUpVectorPopUpMenu(
        CMGraphView* graphViewCPtr,
        MenuHandle popUpMenuHandle);

extern void SetVectorDisplayList(
        CMGraphView* graphViewCPtr,
        SInt16 vectorSelection);

extern void UpdateGraphControls(
        WindowPtr windowPtr);

extern void VerifyNeedForSelectVectorControl(
        WindowPtr windowPtr);

//			end SGraUtil.cpp 


//		Routines in SHDF4.cpp

extern void CreateFullDataSetIdentifierName(
        FileInfoPtr fileInfoPtr,
        SInt16 hdfDataSetIndex,
        StringPtr fullDataSetNamePtr,
        SInt16 nameLengthLimit);

extern Boolean DetermineIfHDFProjectPossible(
        Handle imageWindowInfoH);

extern SInt16 DisplayHDFAlerts(
        SInt16 alertCode,
        FileInfoPtr fileInfoPtr);

extern UInt16 GetHdfDataSetInstrumentChannelNumber(
        FileInfoPtr fileInfoPtr,
        UInt16 fileChannelNumber);

extern void GetHdfDataSetName(
        FileInfoPtr fileInfoPtr,
        SInt16 hdfDataSetIndex,
        StringPtr dataSetNamePtr,
        UInt16* dataSetPtr);

extern void GetHdfHeaderFileName(
        FileInfoPtr								fileInfoPtr,
        UInt8*										headerFileNamePtr);
		  
extern SInt16 ReadHDFHeader(
        FileInfoPtr fileInfoPtr,
        char* headerRecordPtr,
        SInt16 formatOnlyCode);

//			end SHDF4.cpp 


//		Routines in SHDF5.cpp

extern void CloseHDF5DataSetInfo(
        FileInfoPtr fileInfoPtr);

extern SInt16 GetHDF5ProjectionInformation(
        FileInfoPtr fileInfoPtr);

extern Boolean ListHDF5FileInformation(
        FileInfoPtr fileInfoPtr);

extern SInt16 LoadHDF5HeaderInformation(
        HdfDataSets* hdfDataSetsPtr,
        FileInfoPtr fileInfoPtr,
        SInt32 dataSetIndex,
        Boolean useGroupedDataSetsFlag);

extern SInt16 SetUpHDF5_FileInformation(
        FileInfoPtr fileInfoPtr,
        HdfDataSets* hdfDataSetsPtr,
        SInt32 dataSetIndex,
        Boolean useGroupedDataSetsFlag);

//			end SHDF5.cpp 


//		Routines in SHisInfo.cpp

extern void ReleaseHistogramSupportMemory(
        WindowInfoPtr windowInfoPtr);

extern void ReleaseHistogramSupportMemory(
        Handle* histogramSpecsHandlePtr,
        Handle* histogramSummaryHandlePtr);


//			end SHisInfo.cpp 


//		Routines in SHistgrm.cpp

extern void CloseUpHistogramArrayReadParameters(void);

extern UInt32 CountTotalNumberHistogramPixels(
        HUInt32Ptr histogramArrayPtr,
        SInt32 numberBins);

extern Boolean DecodeSTASupportFile(
        HistogramSpecsPtr histogramSpecsPtr,
        HUInt32Ptr histogramArrayPtr,
        CMFileStream* supportFileStreamPtr,
        UInt16* channelListPtr,
        SInt16 numberChannels,
        Boolean summaryFlag);

extern void ForceHistogramCodeResourceLoad(void);

extern Boolean GetClippedMinMaxValues(
        HistogramSpecsPtr histogramSpecsPtr,
        SInt16 percentTailsClipped,
        SInt16 channel,
        UInt32 numberDataValues,
        double* minValuePtr,
        double* maxValuePtr,
        Boolean histLoadedFlag,
        Boolean adjustDataFlag);

extern Boolean GetClippedMinMaxValueIndices(
        HistogramSpecsPtr histogramSpecsPtr,
        SInt16 percentTailsClipped,
        SInt16 channel,
        UInt32 numberDataValues,
        SInt32* minValuePtr,
        SInt32* maxValuePtr,
        Boolean histLoadedFlag,
        Boolean adjustDataFlag);

extern Boolean GetHistogramLoadedFlag(
        Handle windowInfoHandle);

extern Handle* GetHistogramSpecsHandlePtr(
        WindowInfoPtr windowInfoPtr);

extern HUInt32Ptr GetHistogramValuesMemory(
        UInt32 numberBins,
        UInt16 numberChannels,
        Handle* histogramArrayHPtr);

extern Boolean GetHistogramVectorForChannel(
        HistogramSpecsPtr histogramSpecsPtr,
        UInt16* channelListPtr,
        SInt16 numberChannels);

extern Boolean GetSTASupportFile(
        FileInfoPtr fileInfoPtr);

extern char* GetSTASupportFileBuffer(
        UInt16* channelListPtr,
        SInt16* requestChannelsPtr);

extern Boolean HistogramControl(
        SInt16 computeCode);

extern Handle InitializeHistogramInfoStructure(
        Handle histogramSpecsHandle,
        Boolean inputPtrFlag,
        Boolean setUpHistogramArrayFlag);

extern Boolean ListHistogramSummary(
        FileInfoPtr fileInfoPtr,
        HistogramSpecsPtr histogramSpecsPtr,
        CMFileStream* resultsFileStreamPtr);

extern Boolean ListHistogramTitle(
        HistogramSpecsPtr histogramSpecsPtr,
        CMFileStream* resultsFileStreamPtr);

extern Boolean ListHistogramValues(
        HistogramSpecsPtr histogramSpecsPtr,
        FileInfoPtr fileInfoPtr,
        HUInt32Ptr histogramArrayPtr,
        CMFileStream* resultsFileStreamPtr,
        short int channelIndex);

extern CMFileStream* OpenSupportFile(void);

extern Boolean ReadSTASupportFile(
        char* statBufferPtr,
        CMFileStream* supportFileStreamPtr,
        UInt16* channelListPtr,
        SInt16 numberChannels,
        Boolean readAllAtOneTimeFlag);

extern void ReleaseHistogramSpecsPtr(
        WindowInfoPtr windowInfoPtr);

extern HistogramSpecsPtr SetUpHistogramSpecsPtr(
        Boolean setUpHistogramArrayFlag,
        SignedByte* handleStatusPtr);

extern Boolean SetUpToReadHistogramArray(
        HistogramSpecsPtr histogramSpecsPtr);

//			end SHistgrm.cpp 


//		Routines in SImageOverlays.cpp	

extern void ClearImageOverlay(
        UInt32 menuItemIndex);

extern void CloseAllImageOverlayFiles(void);

extern void CloseImageOverlayFile(
        UInt32 imageOverlayIndex);

extern void CopyToOffscreenBuffer(
        ImageOverlayInfoPtr imageOverlayInfoPtr,
        SInt16 windowOverlayIndex,
        Handle imageWindowInfoHandle,
        UInt32 line,
        UInt32 columnStart,
        UInt32 columnInterval,
        UInt32 numberSamples,
        UInt32 lineStart,
        RgnHandle rgnHandle,
        HUCharPtr inputBufferPtr,
        HPtr offScreenBufferPtr,
        SInt32 numberLinesToCopy,
        Boolean twoByteInputBufferFlag);

extern void DrawImageOverlays(
        WindowPtr windowPtr,
        Handle windowInfoHandle,
        CGContextRef context,
        CGRect* rectangle,
        Rect* destinationRectPtr,
        Rect* sourceRectPtr,
        SInt16 windowCode);

extern void FillLineOfOffscreenBuffer(
        ImageOverlayInfoPtr imageOverlayInfoPtr,
        SInt32 line,
        UInt32 column,
        UInt32 columnInterval,
        UInt32 numberSamples,
        RgnHandle rgnHandle,
        HUCharPtr inputBufferPtr,
        HPtr offScreenPtr,
        Boolean twoByteInputBufferFlag);

extern void GetDefaultImageOverlayName(
        SInt16 imageOverlayIndex);

extern SInt16 GetImageOverlayIndex(
        Handle windowInfoHandle,
        SInt16 windowOverlayIndex);

extern ImageOverlayInfoPtr GetImageOverlayInfoPtr(
        SInt16 overlayIndex,
        Boolean lockFlag,
        SignedByte* handleStatusPtr);

extern SInt16 GetWindowImageOverlayIndex(
        Handle windowInfoHandle,
        SInt16 imageOverlayIndex);

extern HPtr GetImageOverlayOffscreenPointer(
        ImageOverlayInfoPtr imageOverlayInfoPtr);

extern HPtr GetImageOverlayLineOffscreenPointer(
        ImageOverlayInfoPtr imageOverlayInfoPtr,
        HPtr offScreenBufferPtr,
        UInt32 lineStart,
        UInt32 columnStart);

extern Boolean HideAllImageOverlays(
        ImageOverlaySpecsPtr imageOverlayListPtr,
        UInt32 numberImageOverlays);

extern void InitializeImageOverlayInfoStructure(
        ImageOverlayInfoPtr imageOverlayInfoPtr);

extern void ReleaseImageOverlayStructureMemory(
        Handle* imageOverlayHandlePtr,
        SInt16 overlayIndex);

extern SInt16 SetUpImageOverlayInformation(
        Handle imageWindowInfoHandle,
        SInt16 overlayIndex,
        UInt32 numberClasses,
        LongRect* overlayBoundingAreaPtr,
        SInt16 thematicPaletteType,
        SInt16 defaultTransparency);

extern void UnlockImageOverlayInfoHandle(
        SInt16 overlayIndex,
        SignedByte handleStatus);

extern void UnlockImageOverlayOffscreenBuffer(
        ImageOverlayInfoPtr imageOverlayInfoPtr);

//			end SImageOverlays.cpp 


//		Routines in SImagine.cpp	

extern Boolean CheckIfDefaultImaginePaletteExists(
        FileInfoPtr fileInfoPtr);

extern Boolean CheckForImagineEstaStatistics(
        Handle windowInfoHandle);

extern HCharPtr GetImagineHistogramBuffer(
        UInt32 numberBins);

extern Boolean LoadImagineImageStatistics(
        FileInfoPtr fileInfoPtr,
        HistogramSpecsPtr histogramSpecsPtr,
        HUInt32Ptr histogramArrayPtr,
        SInt16 channelStartIndex,
        Boolean summaryFlag);

extern Boolean LoadImagineImageStatisticsForChannel(
        FileInfoPtr fileInfoPtr,
        HistogramSummaryPtr histogramSummaryPtr,
        HUInt32Ptr histogramArrayPtr,
        HCharPtr statBufferPtr,
        UInt32 channel,
        UInt32* currentLayerChannelPtr,
        UInt32 expectedNumberBins,
        Boolean summaryFlag);

extern Boolean ReadImagineClassNames(
				FileInfoPtr							fileInfoPtr,
				UCharPtr								classNamePtr);

extern Boolean ReadImagineClassPalette(
        FileInfoPtr fileInfoPtr,
        ColorSpec* colorSpecPtr,
        DisplaySpecsPtr displaySpecsPtr,
        UInt16* classSymbolPtr,
        UInt16* paletteCodePtr);

extern SInt16 ReadImagineHeader(
        FileInfoPtr fileInfoPtr,
        char* headerRecordPtr,
        SInt16 formatOnlyCode);

//			end SImagine.cpp 


//		Routines in SListDat.cpp (listData.c)	

extern void ListDataControl(void);

//			end SListDat.cpp


//		Routines in ReadJPG2000Header.cpp

extern SInt16 ReadJPEG2000Header(
        FileInfoPtr fileInfoPtr,
        char* headerRecordPtr,
        SInt16 formatOnlyCode);

//			end ReadJPG2000Header.cpp


//		Routines in SLOOCov.cpp

extern Boolean DetermineIfLOOCProjectMemoryNeeded(void);

extern Boolean DetermineIfLOOExists(
        SInt16 selectedClass);

extern void GetLOOCovariance(
        SInt16 mixingParameterCode,
        double loocMixingParameter,
        double userMixingParameter,
        SInt32 numberFeatures,
        HDoublePtr sampleCovariancePtr,
        HDoublePtr commonCovariancePtr,
        HDoublePtr looCovariancePtr,
        Boolean squareOutputMatrixFlag);

extern void ResetProjectLOOStats(
        Boolean newUseCommonCovarianceInLOOCFlag);

extern void SetClassMixingParameter(
        SInt16 classNumber,
        SInt16 mixingParameterCode,
        double userMixingParameter);

extern void SetProjectMixingParameter(
        SInt16 mixingParameterCode,
        double userMixingParameter);

extern SInt16 UpdateProjectLOOStats(
        SInt16 statsWindowMode,
        FileIOInstructionsPtr fileIOInstructionsPtr);

//			end SLOOCov.cpp


//		Routines in SLstRslt.cpp (listResults.c)	

extern PascalVoid DrawDialogClassAreaPopUp(
        DialogPtr dialogPtr,
        SInt16 itemNumber);

extern void ForceListResultsCodeResourceLoad(void);

extern double GetDefaultAreaConversionFactor(
        Handle mapProjectionHandle,
        Handle imageWindowInfoHandle);

extern Boolean GetListResultsStringBuffer(
        FileInfoPtr fileInfoPtr,
        ClassifierVar* clsfyVariablePtr,
        SInt16 unitsCode,
        SInt16 numberColumns,
        SInt16* classPtr,
        UInt32 numberClasses);

extern void ListResultsControl(void);

extern Boolean ListClassificationSummary(
        ClassifierVar* clsfyVariablePtr,
        CMFileStream* outputFileStreamPtr,
        SInt16* outputCodePtr,
        SInt16* classPtr,
        UInt32 numberClasses);

extern Boolean ListPerformanceTables(
        ClassifierVar* clsfyVariablePtr,
        SInt16 fieldType,
        CMFileStream* outputFileStreamPtr,
        SInt16* outputCodePtr,
        SInt16* classPtr,
        UInt32 numberClasses,
        SInt16* classAreaPtr,
        UInt32 numberClassAreas);

extern Boolean ListThresholdValue(
        double probabilityThreshold,
        double correlationAngleThreshold,
        double cemThreshold,
        CMFileStream* outputFileStreamPtr,
        SInt16* outputCodePtr,
        Boolean thresholdFlag,
        SInt16 thresholdTypeCode);

extern void LoadClassAreaVector(
        UInt32* numberClassAreasPtr,
        SInt16* classAreaPtr);

//			end SLstRslt.cpp


//		Routines in SMapTran.cpp	

extern Boolean AreasIntersect(
        DoubleRect* boundingRectangle1Ptr,
        //										SDoubleRect*						boundingRectangle2Ptr);
        DoubleRect* boundingRectangle2Ptr);

extern Boolean CheckIfGeodeticModelInfoMatch(
        GeodeticModelInfoPtr geodeticModelInfoPtr,
        GeodeticModelInfoPtr geodeticModelInfoPtr2);

extern Boolean CheckIfGridCoordinateSystemInfoMatch(
        GridCoordinateSystemInfoPtr gridCoordinateSystemInfoPtr,
        GridCoordinateSystemInfoPtr gridCoordinateSystemInfoPtr2);

extern Boolean CheckIfMapInfoMatches(
        GeodeticModelInfoPtr geodeticModelInfoPtr,
        GeodeticModelInfoPtr geodeticModelInfoPtr2,
        GridCoordinateSystemInfoPtr gridCoordinateSystemInfoPtr,
        GridCoordinateSystemInfoPtr gridCoordinateSystemInfoPtr2);

extern void CloseCoefficientsVectorPointers(
        MapProjectionInfoPtr mapProjectionInfoPtr);

extern void ComputeAndSetScaleInformation(
        Handle windowInfoHandle);

extern void ConvertFeetToMeters(
        SInt16 mapUnitsCode,
        double* xMeasurementPtr,
        double* yMeasurementPtr);

extern void ConvertLCRectToMapRect(
        Handle windowInfoH,
        LongRect* lineColumnRectPtr,
        DoubleRect* mapRectPtr);

extern void ConvertLCPointToMapPoint(
        MapProjectionInfoPtr mapProjectionInfoPtr,
        LongPoint* lineColumnPointPtr,
        DoublePoint* mapPointPtr);

extern Boolean ConvertMapPointToLatLongPoint(
        MapProjectionInfoPtr mapProjectionInfoPtr,
        DoublePoint* coordinatePointPtr);

extern void ConvertMapPointToLC(
        MapProjectionInfoPtr mapProjectionInfoPtr,
        DoublePoint* mapPointPtr,
        LongPoint* lineColumnPtr);

extern void ConvertMapPointToLC(
        MapProjectionInfoPtr mapProjectionInfoPtr,
        ArcViewDoublePoint* mapPointPtr,
        LongPoint* lineColumnPtr);

extern void ConvertMapPointToOrientationAngleMapPoint(
        double mapOrientationAngle,
        double xMapOrientationOrigin,
        double yMapOrientationOrigin,
        DoublePoint* mapCoordinatePointPtr);

extern Boolean ConvertMapPointToWinPoint(
        ArcViewDoublePoint* mapPoint,
        LongPoint* windowPointPtr,
        MapToWindowUnitsVariablesPtr mapToWindowUnitsVariablesPtr);

extern void ConvertMapRectToLatLongRect(
        MapProjectionInfoPtr mapProjectionInfoPtr,
        SInt16 gridCode,
        DoubleRect* coordinateRectanglePtr);

extern void ConvertMapRectToLatLongRect(
        Handle windowInfoHandle,
        SInt16 gridCode,
        DoubleRect* coordinateRectanglePtr);

extern void ConvertMapRectToLCRect(
        Handle windowInfoHandle,
        DoubleRect* mapRectPtr,
        LongRect* lineColumnRectPtr,
        double factor);

extern void ConvertMapRectToOffscreenRect(
        DoubleRect* mapRectPtr,
        LongRect* offscreenRectPtr,
        MapToWindowUnitsVariablesPtr mapToWindowUnitsVariablesPtr);

extern void ConvertMapRectToWinRect(
        DoubleRect* mapRectPtr,
        LongRect* windowRectPtr,
        MapToWindowUnitsVariablesPtr mapToWindowUnitsVariablesPtr);

extern void ConvertMetersToFeet(
        SInt16 mapUnitsCode,
        double* xMeasurementPtr,
        double* yMeasurementPtr);

extern double ConvertPackedDegreesToDecimalDegrees(
        double packedDegrees);

extern Boolean ConvertToLatLong(
        LongPoint mousePt,
        double* latitude,
        double* longitude);

extern void ConvertWinRectToMapRect(
        Handle windowInfoH,
        LongRect* windowRectPtr,
        DoubleRect* boundingMapRectPtr,
        Boolean winUseOriginFlag,
        UInt16 boundingCode);

extern Boolean CoordinateDialog(void);

extern SInt16 CopyMapProjectionHandle(
        Handle inputMapProjectionHandle,
        Handle* outputMapProjectionHandlePtr);

extern Boolean DetermineIfInverseLatLongPossible(
        Handle windowInfoHandle);

extern Boolean DetermineIfLatLongPossible(
        Handle windowInfoHandle);

extern Handle DisposeMapProjectionHandle(
        Handle mapProjectionHandle);

extern void DrawCursorCoordinates(
        Handle windowInfoHandle);

extern void DrawScaleInformation(
        Handle windowInfoHandle);

extern void DrawSelectedAreaInformation(
        Handle windowInfoHandle,
        SInt64 numberPixels);

extern void DrawSelectionCoordinates(
        Handle windowInfoHandle,
        LongRect* lineColumnRectPtr,
        DoubleRect* coordinateRectPtr,
        SInt64 numberPixels);

extern Boolean FindIfMapInformationExists(
        WindowInfoPtr windowInfoPtr);

extern Boolean FindIfMapInformationExists(
        Handle mapProjectionHandle);

extern void GetAreaNumberWidths(
        double areaConversionFactor,
        SInt64 maxNumberPoints,
        SInt16* totalNumberDigitsPtr,
        SInt16* numberDigitsAfterDecimalPtr);

extern SInt16 GetAreaUnits(
        Handle imageWindowInfoHandle,
        Boolean fromCoordinatesViewFlag);

extern SInt16 GetAreaUnitString(
        Handle imageWindowInfoHandle,
        Boolean fromCoordinateViewFlag,
        char* areaUnitsStringPtr);

extern void GetBoundingMapRectangle(
        WindowPtr windowPtr,
        Handle windowInfoHandle,
        Rect* windowRectPtr,
        SInt16 windowCode,
        DoubleRect* boundingMapRectPtr);

extern Handle GetCoefficientsHandle(
        Handle mapProjectionHandle);

extern void GetCoefficientsVectorPointers(
        MapProjectionInfoPtr mapProjectionInfoPtr);

extern double GetConversionFromMetersToNativeMapUnits(
        SInt16 mapUnitsCode);

extern Boolean GetCursorCoordinates(
        LongPoint* longMousePointPtr);

extern SInt16 GetFileProjectionCode(
        Handle windowInfoHandle);

extern SInt16 GetFileGridZone(
        Handle windowInfoHandle);

extern SInt16 GetFilePlanarMapUnitsCode(
        Handle windowInfoHandle);

extern SInt16 GetFileReferenceSystemCode(
        Handle windowInfoHandle);

extern SInt16 GetFileSpheroidCode(
        Handle windowInfoHandle);

extern SInt16 GetGridZone(
        Handle mapProjectionHandle);

extern double GetMapOrientationAngle(
        Handle mapProjectionHandle);

extern Handle GetMapProjectionHandle(void);

extern SInt16 GetPlanarMapUnitsCode(
        Handle windowInfoHandle);

extern SInt16 GetPolynomialOrder(
        Handle mapProjectionHandle);

extern SInt16 GetProjectedCSTypeGeoKey(
        FileInfoPtr fileInfoPtr);

extern SInt16 GetProjectionCode(
        Handle mapProjectionHandle);

extern SInt16 GetProjectionCodeFromReferenceSystemCode(
        SInt16 referenceSystemCode,
        SInt16 gridZone);

extern SInt16 GetReferenceSystemCode(
        Handle mapProjectionHandle);

extern double GetScale(
        Handle windowInfoHandle,
        SInt32 columnInterval,
        double magnification);

extern SInt16 GetSpecificUTMRSFromDatumOrEllipsoid(
        SInt16 datumCode,
        SInt16 ellipsoidCode,
        SInt16 assumedUTMCode);

extern SInt16 GetSpheroidCode(
        Handle mapProjectionHandle);

extern SInt16 GetSpheroidCodeFromMajorMinorAxes(
        double semiMajorAxis,
        double semiMinorAxis);

extern void GetWindowMapRect(
        WindowPtr windowPtr,
        Handle windowInfoHandle,
        DoubleRect* boundingMapRectPtr,
        Boolean winUseOriginFlag,
        SInt16 windowCode,
        UInt16 boundingCode);

extern void InitializeGeodeticModelStructure(
        GeodeticModelInfoPtr geodeticModelInfoPtr);

extern void InitializeGridCoordinateSystemStructure(
        GridCoordinateSystemInfoPtr gridCoordinateSystemInfoPtr);

extern void InitializeMapProjectionStructure(
        MapProjectionInfoPtr mapProjectionInfoPtr);

extern void InitializePlanarCoordinateInfo(
        PlanarCoordinateSystemInfo* planarCoordinatePtr);

extern SInt16 LoadDMSLatLongStrings(
        double latitudeValue,
        double longitudeValue,
        char* latitudeStringPtr,
        char* longitudeStringPtr);

extern void LoadPlanarCoordinates(
        MapProjectionInfoPtr mapProjectionInfoPtr,
        double dataValue1,
        double dataValue2,
        double dataValue3,
        double dataValue4,
        double dataValue5,
        double dataValue6);

extern void LoadSpheroidInformation(
        Handle mapProjectionHandle);

extern Boolean PointInRectangle(
        ArcViewDoublePoint* arcViewDoublePointPtr,
        DoubleRect* boundingRectanglePtr);

extern void SetAlbersEqualAreaParameters(
        MapProjectionInfoPtr mapProjectionInfoPtr,
        double standardParallel1,
        double standardParallel2,
        double centralMeridian,
        double latitudeOrigin,
        double falseEasting,
        double falseNorthing);

extern void SetBoundingMapRectangle(
        Handle windowInfoHandle);

extern void SetBoundingMapRectangle(
        PlanarCoordinateSystemInfo* planarCoordinatePtr,
        SInt32 numberColumns,
        SInt32 numberLines,
        DoubleRect* boundingMapRectanglePtr,
        UInt16 boundingCode);

extern void SetCoefficientsHandle(
        Handle mapProjectionHandle,
        Handle coefficientsHandle);

extern void SetCoordinateViewLocationParameters(
        Handle windowInfoHandle);

extern void SetCylindricalEqualAreaParameters(
        MapProjectionInfoPtr mapProjectionInfoPtr,
        double radiusSpheroid,
        double centralMeridian,
        double standardParallel,
        double falseEasting,
        double falseNorthing);

extern void SetEllipsoidFromDatum(
        MapProjectionInfoPtr mapProjectionInfoPtr);

extern void SetEquirectangularParameters(
        MapProjectionInfoPtr mapProjectionInfoPtr,
        double radiusSpheroid,
        double centralMeridian,
        double standardParallel);

extern void SetKrovakParameters(
        MapProjectionInfoPtr mapProjectionInfoPtr);

extern void SetLambertAzimuthalEqualAreaParameters(
        MapProjectionInfoPtr mapProjectionInfoPtr,
        double centralMeridian,
        double latitudeOrigin,
        double falseEasting,
        double falseNorthing);

extern void SetLambertConformalConicParameters(
        MapProjectionInfoPtr mapProjectionInfoPtr,
        double standardParallel1,
        double standardParallel2,
        double centralMeridian,
        double latitudeOrigin,
        double falseEasting,
        double falseNorthing);

extern void SetMercatorParameters(
        MapProjectionInfoPtr mapProjectionInfoPtr,
        double semiMajorSpheroid,
        double semiMinorSpheroid,
        double longitudeCentralMeridian,
        double latitudeOrigin,
        double falseEasting,
        double falseNorthing);

extern void SetOrthographicParameters(
        MapProjectionInfoPtr mapProjectionInfoPtr,
        double radiusSpheroid,
        double longitudeOrigin,
        double latitudeOrigin);

extern void SetPolarStereographicParameters(
        MapProjectionInfoPtr mapProjectionInfoPtr,
        double semiMajorSpheroid,
        double semiMinorSpheroid,
        double centralMeridian,
        double latitudeOrigin,
        double falseEasting,
        double falseNorthing);

extern void SetProjectionParameters(
        MapProjectionInfoPtr mapProjectionInfoPtr,
        double* projectionParametersPtr,
        Boolean packedDegreesFlag,
        SInt16 angleUnitsCode);

extern Boolean SetProjectionParametersFromReferenceSystem(
        MapProjectionInfoPtr mapProjectionInfoPtr);

extern void SetSinusoidalParameters(
        MapProjectionInfoPtr mapProjectionInfoPtr,
        double radiusSpheroid,
        double centralMeridian,
        double standardParallel,
        double falseEasting,
        double falseNorthing);

extern void SetTransverseMercatorParameters(
        MapProjectionInfoPtr mapProjectionInfoPtr,
        double radiusSpheroid,
        double longitudeCentralMeridian,
        double latitudeOrigin,
        double scaleFactorOfCentralMeridian,
        double falseEasting,
        double falseNorthing);

extern void SetUpHorizontalDatumPopUpMenu(
        DialogPtr dialogPtr);

extern Boolean SetUTMParametersFromZone(
        SInt16 gridZone,
        double* longitudeCentralMeridianPtr,
        double* latitudeOriginPtr,
        double* scaleFactorOfCentralMeridianPtr,
        double* falseEastingPtr,
        double* falseNorthingPtr);

extern SInt16 TransformCoordinatePoint(
        double inputEasting,
        double inputNorthing,
        double* eastingPtr,
        double* northingPtr,
        double* eCoefPtr,
        double* nCoefPtr,
        SInt16 order);

extern void UpdateScaleInformation(
        Handle windowInfoHandle);

//			end SMapTran.cpp


// 	Routines in SMask.cpp 

extern void CloseFile(
        MaskInfoPtr maskInfoPtr);

extern void CloseMaskStructure(
        MaskInfoPtr maskInfoPtr);

//extern UInt32 					ConvertFieldNumberToMaskValue (
//										MaskInfoPtr							maskInfoPtr,
//										SInt16								fieldNumber );

extern Boolean DetermineIfMaskDataInLine(
        UInt16* maskBufferPtr,
        UInt32 maskColumnStart,
        UInt32 numberSamples,
        UInt32 columnInterval,
        UInt32 maskValueRequest);

extern UInt32 GetFirstMaskLine(
        MaskInfoPtr maskInfoPtr,
        UInt16 maskValueRequest,
        UInt32 maskLineStart,
        UInt32 maskColumnStart,
        UInt32 lineStart,
        UInt32 lineEnd,
        UInt32 lineInterval,
        UInt32 columnStart,
        UInt32 columnEnd,
        UInt32 columnInterval);

extern Boolean GetMaskArea(
        MaskInfoPtr maskInfoPtr,
        SInt16 maskSetCode,
        ProjectInfoPtr projectInfoPtr,
        WindowInfoPtr windowInfoPtr,
        UInt32 imageStartLine,
        UInt32 imageStartColumn,
        UInt32 imageLineInterval,
        UInt32 imageColumnInterval,
        UInt32* imageLineStartPtr,
        UInt32* imageLineEndPtr,
        UInt32* imageColumnStartPtr,
        UInt32* imageColumnEndPtr,
        UInt32* maskLineStartPtr,
        UInt32* maskColumnStartPtr);

extern Handle GetMaskFile(
        Handle inputFileInfoHandle,
        SInt16 promptString);

extern FileStringPtr GetMaskFileNamePPointer(
        MaskInfo* maskInfoPtr,
        SignedByte* handleStatusPtr);

extern CMFileStream* GetMaskFileStreamPointer(
        MaskInfoPtr maskInfoPtr,
        SignedByte* handleStatusPtr);

extern MaskInfoPtr GetMaskInfoPointer(
        SInt16 maskSetCode,
        ProjectInfoPtr projectInfoPtr,
        WindowInfoPtr windowInfoPtr);

extern SInt64 GetNumberPixelsInMaskArea(
        MaskInfoPtr maskInfoPtr,
        UInt16 maskValueRequest,
        UInt32 maskLineStart,
        UInt32 maskColumnStart,
        SInt32 lineStart,
        SInt32 lineEnd,
        SInt32 lineInterval,
        SInt32 columnStart,
        SInt32 columnEnd,
        SInt32 columnInterval,
        SInt16 algorithmCode);

extern Boolean GetSpecifiedMaskFile(
        SInt16 maskSetCode,
        UCharPtr maskFileNamePtr,
        MaskInfoPtr maskInfoPtr,
        Boolean userPrompt);

extern void InitializeMaskStructure(
        MaskInfoPtr maskInfoPtr);

extern SInt16 LoadMask(
        SInt16 maskSetCode,
        Handle maskFileInfoHandle,
        MaskInfoPtr maskInfoPtr,
        UInt32 maskFileLayer,
        SInt16 loadTypeCode);

extern void SetUpMaskAreaDescriptionParameters(
        AreaDescriptionPtr maskAreaDescriptionPtr,
        AreaDescriptionPtr areaDescriptionPtr);

//			end SMask.cpp


//		Routines in SMatlab.cpp

extern void WriteMatlabHeader(
        FileInfoPtr fileInfoPtr);

extern void ConvertToMatlabFormat(
        HUCharPtr savedOutBufferPtr,
        SInt16 numberBytes,
        Boolean signedDataFlag,
        SInt32 numberSamples);

//			end SMatlab.cpp


//		Routines in SMatUtil.cpp 												

extern void AddToClassStatistics(
        UInt16 numberOutputChannels,
        HChannelStatisticsPtr outChannelStatsPtr,
        HSumSquaresStatisticsPtr outputSumSquaresPtr,
        UInt16 numberInputChannels,
        UInt16* channelListPtr,
        HChannelStatisticsPtr inChannelStatsPtr,
        HSumSquaresStatisticsPtr inputSumSquaresPtr,
        Boolean squareOutputMatrixFlag,
        SInt16 inputStatisticsCode,
        SInt16 outputStatisticsCode);

extern void AddVectors(
        HDoublePtr inputVector1Ptr,
        HDoublePtr inputVector2Ptr,
        HDoublePtr outputVectorPtr,
        UInt32 numberVectorRows);

extern void ClearTransformationMatrix(
        Boolean notifyUserFlag);

extern void ComputeCorrelationMatrix(
        UInt16 numberOutputChannels,
        HCovarianceStatisticsPtr correlationPtr,
        UInt16 numberInputChannels,
        UInt16* channelListPtr,
        HSumSquaresStatisticsPtr sumSquaresPtr,
        SInt64 numberPixels,
        Boolean squareOutputMatrixFlag);

extern void ComputeCorrelationCoefficientMatrix(
        UInt16 numberOutputChannels,
        HCovarianceStatisticsPtr correlationPtr,
        UInt16 numberInputChannels,
        UInt16* channelListPtr,
        HChannelStatisticsPtr channelStatsPtr,
        HSumSquaresStatisticsPtr sumSquaresPtr,
        SInt64 numberPixels,
        Boolean squareOutputMatrixFlag);

extern void ComputeCovarianceMatrix(
        UInt16 numberOutputChannels,
        HCovarianceStatisticsPtr covariancePtr,
        UInt16 numberInputChannels,
        UInt16* channelListPtr,
        HChannelStatisticsPtr channelStatsPtr,
        HSumSquaresStatisticsPtr sumSquaresPtr,
        SInt64 numberPixels,
        Boolean squareOutputMatrixFlag);

extern Boolean ComputeEigenvectors(
        HDoublePtr matrixPtr,
        UInt16 covarianceSize,
        HDoublePtr eigenvectorPtr,
        SInt16* ih,
        HDoublePtr x,
        SInt16 requestCode);

extern void ComputeMeanStdDevVector(
        HChannelStatisticsPtr channelStatsPtr,
        HSumSquaresStatisticsPtr sumSquaresPtr,
        UInt16 numberChannels,
        SInt64 numberPixels,
        SInt16 statCode,
        Boolean squareSumSquaresMatrixFlag);

extern void ComputeMeanVector(
        HChannelStatisticsPtr channelStatsPtr,
        UInt16 numberChannels,
        SInt64 numberPixels);

extern void ComputeStdDevVector(
        HChannelStatisticsPtr channelStatsPtr,
        HSumSquaresStatisticsPtr sumSquaresPtr,
        UInt16 numberChannels,
        SInt64 numberPixels,
        SInt16 statCode,
        Boolean squareSumSquaresMatrixFlag);

extern double ConvertToScientificFormat(
        double value,
        SInt32* base10ExponentPtr);

extern void CopyLowerToUpperSquareMatrix(
        UInt16 numberChannels,
        HCovarianceStatisticsPtr squareMatrixPtr);

extern void CopySquareToTriangleMatrix(
        UInt16 numberChannels,
        HCovarianceStatisticsPtr inputSquareMatrixPtr,
        HCovarianceStatisticsPtr outputTriangleMatrixPtr);

extern void CopyTriangleToSquareMatrix(
        UInt16 numberChannels,
        HCovarianceStatisticsPtr inputTriangleMatrixPtr,
        HCovarianceStatisticsPtr outputSquareMatrixPtr);

extern Boolean EigenvectorInfoExists(
        Boolean projectFlag);

extern void EigenvectorInfoExists(
        Boolean projectFlag,
        SInt16* createdByCodePtr,
        UInt16* numberEigenvectorsPtr);

extern SInt16 GetAreaStats(
        FileIOInstructionsPtr fileIOInstructionsPtr,
        HChannelStatisticsPtr areaChanPtr,
        HSumSquaresStatisticsPtr areaSumSquaresPtr,
        UInt16* channels,
        UInt16 numberChannels,
        Boolean checkForBadDataFlag,
        SInt16 statCode,
        HDoublePtr minNonSaturatedValuesPtr,
        HDoublePtr maxNonSaturatedValuesPtr);

extern Boolean GetDataThresholdValues(
        Handle windowInfoHandle,
        UInt16* channelsPtr,
        UInt16 numberChannels,
        double *minThresholdValuesPtr,
        double *maxThresholdValuesPtr,
        UInt32 numberClusters);

extern Boolean GetMemoryForListTransformation(
        UInt16 numberChannels,
        Boolean listTransformationFlag);

extern Boolean GetTotalSumSquares(
        FileIOInstructionsPtr fileIOInstructionsPtr,
        Handle* totalChanStatsHandlePtr,
        Handle* totalSumSquaresStatsHandlePtr,
        UInt16* channelsPtr,
        UInt16 numberChannels,
        SInt16* classPtr,
        UInt32 numberClasses,
        SInt16 areaOption,
        SInt16 fieldType,
        Boolean checkForFillDataFlag);

extern Boolean ListTransformationInformation(
        HDoublePtr covariancePtr,
        HDoublePtr eigenVectorPtr,
        SInt32 numberIterations,
        double smallestElement,
        UInt16* channelsPtr,
        UInt16 numberChannels,
        UInt16 numberComponents,
        Boolean listEigenvalueFlag,
        Boolean listEigenvectorFlag,
        SInt16 eigenValueCode);

extern void MatrixMultiply(
        HDoublePtr inputMatrix1Ptr,
        HDoublePtr inputMatrix2Ptr,
        HDoublePtr outputMatrixPtr,
        UInt16 inputSize1,
        UInt16 inputSize2,
        UInt16 inputSize3,
        SInt16 multiplyCode);

extern void OrderEigenvaluesAndEigenvectors(
        HDoublePtr eigenvaluePtr,
        HDoublePtr eigenvectorPtr,
        HDoublePtr tempVectorPtr,
        UInt32 numberFeatures,
        SInt16 requestCode);

extern void ReduceInputMatrix(
        UInt16 numberOutputChannels,
        HCovarianceStatisticsPtr outputSquareMatrixPtr,
        UInt16 numberInputChannels,
        UInt16* channelListPtr,
        HCovarianceStatisticsPtr inputTriangleMatrixPtr,
        Boolean squareOutputMatrixFlag);

extern void ReduceMatrix(
        HDoublePtr inputMatrixPtr,
        HDoublePtr outputMatrixPtr,
        SInt16 inputSize1,
        SInt16 inputSize2,
        SInt16 inputSize3,
        SInt16* featureListPtr,
        Boolean squareFlag);

extern Boolean SaveTransformationMatrix(
        SInt16 createdByCode,
        Handle eigenVectorHandle,
        Handle eigenValueHandle,
        Handle featureHandle,
        Handle preProcBandGroupingHandle,
        UInt16 numberChannels,
        UInt16 numberFeatures);

extern void SetIdentityMatrix(
        HDoublePtr outputMatrixPtr,
        UInt32 matrixSize,
        Boolean squareOutputMatrixFlag);

extern void TransformDataVector(
        HDoublePtr inputDataVectorPtr,
        HDoublePtr inputMatrixPtr,
        HDoublePtr transformFeatureMeansPtr,
        HDoublePtr outputVectorPtr,
        UInt16 inputSize1,
        UInt16 inputSize2);

extern double TransformDataVector(
        HDoublePtr inputDataVectorPtr,
        HDoublePtr transformMatrixPtr,
        HDoublePtr transformFeatureMeansPtr,
        UInt32 numberChannels,
        Boolean eigenvectorTypeFlag,
        UInt32 outputFeatureNumber,
        UInt32 inputChannelInterval);

extern void TransformSymmetricMatrix(
        HDoublePtr transformMatrixPtr,
        HDoublePtr symmetricMatrixPtr,
        HDoublePtr tempMatrixPtr,
        HDoublePtr outputMatrixPtr,
        UInt16 inputSize1,
        UInt16 inputSize2,
        Boolean squareSymmetricMatrixFlag);

extern void ZeroMatrix(
        HDoublePtr matrixPtr,
        UInt32 numberXElements,
        UInt32 numberYElements,
        Boolean fullMatrixFlag);

extern void ZeroStatisticsMemory(
        HChannelStatisticsPtr channelPtr,
        HCovarianceStatisticsPtr covariancePtr,
        UInt16 numberChannels,
        SInt16 statCode,
        Boolean squareMatrixFlag);

// 		end SMatUtil.cpp 


//		Routines in SMemUtil.cpp 

extern Ptr CheckAndDisposePtr(
        Ptr tempPointer);

extern double* CheckAndDisposePtr(
        double* tempPointer);

extern float* CheckAndDisposePtr(
        float* tempPointer);

extern SInt8* CheckAndDisposePtr(
        SInt8* tempPointer);

extern UInt8* CheckAndDisposePtr(
        UInt8* tempPointer);

extern SInt16* CheckAndDisposePtr(
        SInt16* tempPointer);

extern UInt16* CheckAndDisposePtr(
        UInt16* tempPointer);

extern SInt32* CheckAndDisposePtr(
        SInt32* tempPointer);

extern UInt32* CheckAndDisposePtr(
        UInt32* tempPointer);

extern void CheckAndUnlockHandle(
        Handle inputHandle);

extern Ptr CheckHandleSize(
        Handle* inputHandlePtr,
        Boolean* continueFlagPtr,
        Boolean* changedFlagPtr,
        SInt64 bytesNeeded);

extern Boolean CheckIfMemoryAvailable(
        UInt32 memoryRequest);

extern Boolean CheckMemoryForColorPicker(
        Str255* stringPtr,
        SInt16 stringNumber);

extern Boolean CheckPointerSize(
        Ptr* inputPtr,
        SInt64 bytesNeeded,
        Boolean* changed);

extern void CheckSizeAndUnlockHandle(
        Handle handle);

extern SInt16 CopyHandleToHandle(
        Handle inputHandle,
        Handle outputHandle);

extern SInt16 CopyHandleToPointer(
        Handle inputHandle,
        Ptr* ptrPtr);

extern SInt16 CopyPointerToHandle(
        Ptr inputPointer,
        Handle* outputHandlePtr);

extern void DisposeIOBufferPointers(
        FileIOInstructionsPtr outputFileIOInstructionsPtr,
        HUCharPtr* ioBufferPtrPtr,
        HUCharPtr* ioBuffer2PtrPtr);

extern Handle GetCountVectorTableMemory(
        ClassifierVar* clsfyVariablePtr,
        Boolean trainingFieldFlag,
        Boolean testFieldFlag);

extern Ptr GetHandlePointer(
        Handle handle,
        Boolean lockFlag,
        Boolean moveHiFlag);

extern Ptr GetHandleStatusAndPointer(
        Handle handle,
        SignedByte* handleStatusPtr,
        Boolean moveHiFlag);

extern Boolean GetIOBufferPointers(
        FileIOInstructionsPtr fileIOInstructionsPtr,
        WindowInfoPtr imageWindowInfoPtr,
        LayerInfoPtr imageLayerInfoPtr,
        FileInfoPtr imageFileInfoPtr,
        HUCharPtr* ioBufferPtrPtr,
        HUCharPtr* ioBuffer2PtrPtr,
        UInt32 columnStart,
        UInt32 columnEnd,
        UInt32 columnInterval,
        UInt16 numberChannels,
        UInt16* channelListPtr,
        Boolean packDataFlag,
        Boolean forceBISflag,
        UInt16 forceOutputByteCode,
        Boolean allowForThreadedIOFlag,
        FileIOInstructionsPtr* outputFileIOInstructionsPtrPtr);

extern UInt32 GetSetTiledIOBufferBytes(
        LayerInfoPtr layerInfoPtr,
        FileInfoPtr fileInfoPtr,
        UInt16* channelListPtr,
        UInt16 numberChannels,
        HUCharPtr tiledBufferPtr);

extern void GetSpareMemory(void);

extern UInt32 MGetFreeMemory(
        UInt32* lContBlockPtr);

extern SInt32 MGetHandleSize(
        Handle handle);

extern SInt32 MGetPointerSize(
        Ptr pointer);

extern SignedByte MHGetState(
        Handle handle);

extern void MHLock(
        Handle handle);

extern void MHSetState(
        Handle handle,
        SignedByte handleStatus);

extern Handle MNewHandle(
        SInt64 numberBytes);

extern Handle MNewHandleClear(
        SInt64 numberBytes);

extern Ptr MNewPointer(
        SInt64 numberBytes);

extern Ptr MNewPointerClear(
        SInt64 numberBytes);

extern Ptr MoveHiAndLock(
        Handle inputHandle);

extern Boolean MSetHandleSize(
        Handle* handlePtr,
        SInt64 bytesNeeded);

extern Boolean MSetPointerSize(
        Ptr* pointerPtr,
        SInt64 bytesNeeded);

extern void ReleaseSpareMemoryForWarningMessage(void);

extern Handle UnlockAndDispose(
        Handle handle);

// 		end SMemUtil.cpp


//		Routines in SMenus.cpp 

extern Boolean CharactersSelected(void);

extern void ClearMenuItems(
        MenuHandle menuHandle,
        SInt32 lastMenuItemToKeep);

extern void ClearOverlay(
        UInt32 menuItemIndex);

extern void CloseAllOverlayFiles(void);

extern Boolean DetermineIfProjectPossible(
        Handle imageWindowInfoH);

extern void DoEditSelectAllImage(
        WindowPtr windowPtr);

extern void DoShowOverlaySelection(
        WindowPtr windowPtr,
        Handle windowInfoHandle,
        SInt16 selection,
        Boolean optionKeyFlag,
        Boolean shiftKeyFlag);

extern void GetControlPopUpMenuText(
        ControlHandle popupControlHandle,
        SInt16 popupMenuIndex,
        char* stringPtr);

extern SInt16 GetPopUpMenuBitsPerDataValue(
        SInt16 bitsPerDataValueSelection);

extern Boolean GetRectangularSelectionFlag(void);

extern void MSetMenuItemText (
				MenuRef									theMenu,
				MenuItemIndex							menuIndex,
				UInt8*									itemStringPascalPtr,
				UInt16									stringCharCode=kASCIICharString);

Boolean SetTIFF_GeoTIFF_MenuItemString (
				WindowInfoPtr							windowInfoPtr,
				DialogPtr								dialogPtr,
#				if defined multispec_mac
					MenuHandle								menuResource,
#				endif	// defined multispec_mac
#				if defined multispec_win || defined multispec_lin
					UInt32									diskFileComboID,
#				endif	// defined multispec_win
				SInt16									menuItem);

extern void SetUpClearOverlaysSubMenu(
        MenuHandle clearOverlySubMenuHandle);

extern void SetUpImageOverlayPopUpMenu(
        MenuHandle popUpMenuHandle,
        Handle windowInfoHandle,
        SInt16 currentSelection);

extern void SetUpWindowOverlayPopUpMenu(
        MenuHandle popUpMenuHandle,
        Boolean optionKeyFlag);

extern Boolean UpdateEditClearOverlays(
        CCmdUI* pCmdUI);

extern void UpdateEditClearSelection(
        CCmdUI* pCmdUI,
        SInt16 selectionTypeCode);

extern void UpdateEditGraphicsCopy(
        CCmdUI* pCmdUI);

extern Boolean UpdateEditImageCopy(
        CCmdUI* pCmdUI,
        WindowInfoPtr windowInfoPtr);

extern Boolean UpdateEditImageMapParameters(void);

extern void UpdateEditImageSelectAll(
        CCmdUI* pCmdUI);

extern void UpdateEditTextClear(
        CCmdUI* pCmdUI);

extern void UpdateEditTextCopy(
        CCmdUI* pCmdUI);

extern void UpdateEditTextCut(
        CCmdUI* pCmdUI);

extern void UpdateEditTextPaste(
        CCmdUI* pCmdUI);

extern void UpdateEditTextSelectAll(
        CCmdUI* pCmdUI);

extern Boolean UpdateFileDefaultPrint(
        CCmdUI* pCmdUI);

extern Boolean UpdateFileDefaultSaveAs(
        CCmdUI* pCmdUI);

extern void UpdateFileGraphClose(
        CCmdUI* pCmdUI);

extern Boolean UpdateFileGraphPrint(
        CCmdUI* pCmdUI);

extern void UpdateFileImageClose(
        CCmdUI* pCmdUI);

extern Boolean UpdateFileImagePrint(
        CCmdUI* pCmdUI,
        WindowInfoPtr windowInfoPtr);

extern Boolean UpdateFileImageSaveAs(
        CCmdUI* pCmdUI,
        WindowInfoPtr windowInfoPtr);

extern Boolean UpdateFileOpenThematicInfo(
        CCmdUI* pCmdUI);

extern Boolean UpdateFileOutputTextSaveAs(
        CCmdUI* pCmdUI);

extern Boolean UpdateFileOutputTextPrint(
        CCmdUI* pCmdUI);

extern void UpdateFilePaletteClose(
        CCmdUI* pCmdUI);

extern void UpdateFileProjectClose(
        CCmdUI* pCmdUI);

extern Boolean UpdateFileSave(
        CCmdUI* pCmdUI);

extern void UpdateFileTextClose(
        CCmdUI* pCmdUI);

extern Boolean UpdateFileTransform(
        CCmdUI* pCmdUI);

extern Boolean UpdateReformatChangeHeader(
        WindowInfoPtr windowInfoPtr,
        FileInfoPtr fileInfoPtr,
        CCmdUI* pCmdUI);

extern Boolean UpdateReformatConvertShape(
        WindowInfoPtr windowInfoPtr,
        FileInfoPtr fileInfoPtr,
        CCmdUI* pCmdUI);

extern Boolean UpdateReformatModifyChannel(
        WindowInfoPtr windowInfoPtr,
        FileInfoPtr fileInfoPtr,
        CCmdUI* pCmdUI);

extern Boolean UpdateReformatMosaicImages(
        CCmdUI* pCmdUI);

extern Boolean UpdateReformatRecodeThematicImage(
        FileInfoPtr fileInfoPtr);

extern Boolean UpdateWindowCoordinateView(
        CCmdUI* pCmdUI);

extern Boolean UpdateWindowSelectionGraph(void);

// 		end SMenus.cpp 


//		Routines in mosaic.c (SMosaic.cpp)

extern void MosaicTwoImagesControl(void);

//			end mosaic.c (SMosaic.cpp)


//		Routines in SMul.cpp (mul.c)	

extern void FS_quick_feature_extraction(
        UInt32 no_feature,
        UInt32 no_class,
        ClassInfoPtr quick_class_info,
        SInt32 feature_extraction_type,
        HDoublePtr eigen_vectors,
        HDoublePtr eigen_values,
        SInt32* ERROR_FLAG);

extern void normalize_rows(
        HDoublePtr eigenvectorPtr,
        UInt32 numberComponents,
        UInt32 numberFeatures);

//			end SMul.cpp (mul.c) 


//		Routines in SNDFFormat.cpp 

extern SInt16 LinkNDFFiles(
        Handle windowInfoHandle);

extern SInt16 ReadNDFHeader(
        FileInfoPtr fileInfoPtr,
        char* headerRecordPtr,
        SInt16* versionPtr,
        UInt32 fileNumber,
        SInt16 formatOnlyCode);

//			end SNDFFormat.cpp 


//		Routines in SOpnDlg.cpp 

extern Boolean FileSpecificationDialog(
        Handle fileInfoHandle,
        Handle windowInfoHandle);

extern SInt16 FileSpecificationDialogSetDataType(
        SInt16 dataType,
        SInt16 numberBits,
        Boolean signedDataFlag);

extern SInt16 LoadSelectedDataSetInformation(
        FileInfoPtr inputFileInfoPtr,
        FileInfoPtr outputFileInfoPtr,
        UInt32 dataSetIndex,
        Boolean useGroupedDataSetsFlag);

//			end SOpnDlg.cpp 


//		Routines in SOpnImag.cpp

extern Boolean AddToImageWindowFile(
        Handle windowInfoHandle,
        Handle fileInfoHandle);

extern SInt16 CheckFileInfoParameters(
        FileInfoPtr fileInfoPtr);

extern SInt32 CheckIfProjectFile(
        CMFileStream* fileStreamPtr,
        SInt16 formatOnlyCode);

extern SInt16 CheckImageHeader(
        Handle windowInfoHandle,
        Handle fileInfoHandle,
        UInt32* formatVersionCodePtr,
        SInt16 formatOnlyCode,
        SInt16 linkFileNumber);

extern double CompareFileInfoAndFileSize(
        FileInfoPtr fileInfoPtr,
        UInt32 numberLines,
        UInt32 numberColumns,
        UInt32 numberChannels,
        SInt16 numberBytes,
        UInt32 preLineCalBytes,
        UInt32 postLineCalBytes,
        UInt32 preChannelBytes,
        UInt32 postChannelBytes,
        UInt32 headerBytes,
        UInt32 trailerBytes,
        SInt16 bandInterLeaveCode,
        Boolean fourBitFlag);

extern SInt16 ConvertMultiSpecProjectionCodeToERDASCode(
        SInt16 referenceSystemCode,
        SInt16 projectionCode);

extern void CreateDefaultClassName(
				UCharPtr								classNamePtr,
				UInt32								classNumber);
		  
extern void CreateDefaultClassNames(
				UCharPtr								classNamePtr,
				HUInt16Ptr							classSymbolPtr,
				UInt32								numberClasses);

extern Boolean FileSpecificationDialog(
        Handle fileInfoHandle,
        Handle windowInfoHandle,
        Boolean* parameterChangeFlagPtr);

extern Boolean GetClassesFromHistogram(
        FileInfoPtr fileInfoPtr,
        SInt16 collapseClassSelection);

extern SInt16 GetDatumInfo(
        char** stringPtrPtr,
        SInt16* datumCodePtr,
        SInt16 stringNumber,
        Boolean skipEqualFlag);

extern Boolean GetDefaultSupportFile(
        Handle windowInfoHandle,
        UInt32 supportFileType);

extern void GetDefaultSupportFileName (
				CMFileStream*						imageFileStreamPtr,
				CMFileStream*						supportFileInfoPtr,
				UInt32								supportFileType);

extern void GetDefaultSupportFileName (
				CMFileStream*						imageFileStreamPtr,
				UInt8*								imageFilePathPtr,
				UInt8*								supportFilePathPtr,
				UInt8*								imageFileNameCPtr,
				UInt32								supportFileType);

extern double GetFileHeaderRealValue(
        SInt16 stringID,
        SInt16 stringNumber,
        CharPtr bufferPtr,
        SInt16 numberValues,
        Boolean skipEqualFlag,
        SInt16* returnCodePtr);

extern SInt16 GetFileHeaderString(
        SInt16 stringID,
        SInt16 stringNumber,
        CharPtr* bufferPtrPtr,
        SInt16 numberCharacters,
        Boolean skipEqualFlag,
        CharPtr stringPtr,
        SInt16 stringLimit,
        Boolean substringAllowedFlag);

extern SInt32 GetFileHeaderValue(
        SInt16 stringID,
        SInt16 stringNumber,
        char* bufferPtr,
        SInt16 numberValues,
        Boolean skipEqualFlag,
        SInt16* returnCodePtr);

extern SInt16 GetMapProjectionCodeFromGCTPNumber(
        SInt16 gctpNumber,
        Boolean erdasCodeFlag,
        SInt16* projectionCodePtr);

extern SInt16 GetProjectionNameInfo(
				UCharPtr							stringPtr,
				SInt16*							referenceSystemCodePtr);

extern HUInt16Ptr GetSymbolToBinaryVector(
        FileInfoPtr fileInfoPtr);

extern void IntermediateFileUpdate(
        FileInfoPtr fileInfoPtr);

extern SInt16 LinkFastL7AFiles(
        Handle windowInfoHandle);

extern SInt16 LinkFiles(
        SInt16 fileFormat,
        Handle windowInfoHandle);

extern void LoadClassNameDescriptions(
        Handle windowInfoHandle);

extern Boolean LoadImageInformation(
        Handle windowInfoHandle,
        Handle fileInfoHandle,
        Boolean getFromProjectFlag,
        UInt32* formatVersionCodePtr,
        SInt16 linkFileNumber);

extern void ReadChannelDescriptionsAndValues(
        Handle fileInfoHandle);

extern Boolean ReadERDASClassNames (
				FileInfoPtr						fileInfoPtr,
				Handle							windowInfoHandle,
				UCharPtr							classNamePtr);

extern SInt16 ReadERDASHeader(
        FileInfoPtr fileInfoPtr,
        char* headerRecordPtr,
        SInt16 formatOnlyCode);

extern Boolean ReadThematicGroups(
        FileInfoPtr inputFileInfoPtr,
        FileInfoPtr outputFileInfoPtr,
        DisplaySpecsPtr displaySpecsPtr);

extern Boolean SetUpImageWindow(
        Handle windowInfoHandle);

extern Boolean SetUpThematicImageWindow(
        Handle windowInfoHandle);

extern Boolean SizeOfImageFileCanBeCalculated(
        FileInfoPtr fileInfoPtr);

extern Boolean UpdateLayerInfoStructure(
        WindowInfoPtr windowInfoPtr,
        Handle fileInfoHandle);

// 		end SOpnImag.cpp


//		Routines in SOther.cpp

extern void EvaluateCovariancesControl(void);

extern void EvaluateTransformationControl(void);

extern void ListCovarianceMatrix(
        HDoublePtr covariancePtr,
        SInt16 numberChannels,
        SInt16 matrixType);

extern void ListDescriptionInformation(void);

extern Boolean ListDescriptionInformationForFile(
        FileInfoPtr fileInfoPtr,
        char* formatNamePtr,
        SInt16 maxFormatNameLength);

// 		end SOther.cpp


//		Routines in SOutFlds.cpp (outlineFields.c)

extern void ForceFieldOutlineUpdate(
        Boolean forceFlag);

extern void GetPolygonLabelPoint(
        HPFieldIdentifiersPtr fieldIdentPtr,
        HPFieldPointsPtr fieldPointsPtr,
        LongPoint* labelPointPtr);

extern void OutlineFieldsControl(
        SInt16 statsWindowMode,
        WindowPtr windowPtr,
        Handle windowInfoHandle,
        SInt16 windowCode);

extern void OutlineFieldsInProjectBaseWindows(
        SInt16 statsWindowMode);

extern void OutlineFieldsInProjectWindows(
        SInt16 statsWindowMode);

// 		end SOutFlds.cpp


//		Routines in SPalette.cpp	

extern void ActivateImageWindowPalette(
        CMPaletteInfo paletteHandle);

extern Boolean CreatePalette(
        Handle windowInfoHandle,
        DisplaySpecsPtr displaySpecsPtr,
        SInt16 windowType);

extern void DrawPalette(void);

extern PascalVoid DrawPalettePopUp(
        DialogPtr dialogPtr,
        SInt16 itemNumber);

extern Boolean FalseColorPaletteDialog(void);

extern CMPaletteInfo GetActivePaletteHandle(void);

extern Boolean GetClassColorTable(
        FileInfoPtr gisFileInfoPtr,
        UInt16 numberClasses,
        SInt16* classPtr,
        UInt16 numberListClasses,
        UInt16* numberTRLClassesPtr,
        ColorSpec** inputColorSpecPtrPtr,
        CMPaletteInfo paletteHandle,
        UInt16* paletteIndexPtr,
        SInt16 paletteType,
        UInt16 numberPaletteEntriesToRead,
        //										SInt16								paletteOffset, 
        SInt16 classNameCode,
        SInt16 thematicListType,
        SInt16 collapseClassCode);

extern Boolean GetDefaultThematicFilePalette(
        WindowInfoPtr windowInfoPtr,
        FileInfoPtr fileInfoPtr);

extern CMPaletteInfo GetPaletteHandle(void);

extern SInt16 GetPaletteID(
        SInt16 thematicPaletteType);

extern SInt16 GetPaletteType(void);

extern SInt16 GetPaletteOffset(void);

extern Boolean LoadColorSpecTable(
        Handle windowInfoHandle,
        FileInfoPtr fileInfoPtr,
        DisplaySpecsPtr displaySpecsPtr,
        ColorSpec* colorSpecPtr,
        CMPaletteInfo inputResourcePHandle,
        UInt16 inputPaletteOffset,
        UInt16 tableSize,
        UInt16 numPaletteEntriesUsed,
        SInt16 thematicPaletteType,
        UInt32 numberClasses,
        SInt16 classGroupCode,
        UInt16* paletteCodePtr);

extern void LoadTwoBytePalette(
        ColorSpec* colorSpecPtr,
        FileInfoPtr imageFileInfoPtr,
        DisplaySpecsPtr displaySpecsPtr,
        UInt16* classSymbolPtr,
        UInt16* paletteCodePtr,
        UInt32 colorVectorLength,
        UInt16* vectorBluePtr,
        UInt16* vectorGreenPtr,
        UInt16* vectorRedPtr);

extern void MGetEntryColor(
        CMPaletteInfo paletteObject,
        UInt16 entry,
        RGBColor* theColorPtr);

extern Boolean MNewPalette(
        CMPaletteInfo* paletteObjectPtr,
        SInt16 numberEntries);

extern void MSetEntryColor(
        CMPaletteInfo paletteObject,
        UInt16 entry,
        RGBColor* theColorPtr);

extern void SetPaletteSpecification(
        DisplaySpecsPtr displaySpecsPtr,
        SInt16 classGroupCode,
        SInt16 paletteSelection,
        Boolean paletteUpToDateFlag);

extern void SetUpPalettePopUpMenu(
        DialogPtr dialogPtr,
        MenuHandle popUpPaletteMenu,
        SInt16 fileFormat,
        SInt16 ancillaryInfoformat,
        UInt32 numberClasses,
        Handle channelDescriptionH,
        UInt32 colorTableOffset,
        DisplaySpecsPtr displaySpecsPtr,
        SInt16 classGroupCode);

extern void UpdateActiveImageLegend(
        SInt16 classGroupCode,
        Boolean callCreatePaletteFlag);

// 		end SPalette.cpp  


//		Routines in SPMatUtl.cpp (projectMatrixUtilities.c)	

extern UInt32 FindMaxValueInVector(
        HDoublePtr doubleVectorPtr,
        UInt32 vectorLength,
        HDoublePtr maximumPtr);

extern UInt32 FindMinValueInVector(
        HDoublePtr doubleVectorPtr,
        UInt32 vectorLength,
        HDoublePtr minimumPtr);

extern SInt64 GetClassDataValues(
        FileIOInstructionsPtr fileIOInstructionsPtr,
        SInt16 classNumber,
        UInt16* channelsPtr,
        SInt16 numberChannels,
        HDoublePtr floatDataValuePtr,
        HDoublePtr transformMatrixPtr,
        HDoublePtr transformFeatureMeansPtr,
        UInt16 numberFeatures,
        SInt16 optionsCode);

extern SInt32 GetFieldDataValues(
        AreaDescriptionPtr areaDescriptionPtr,
        FileIOInstructionsPtr fileIOInstructionsPtr,
        UInt16* channelsPtr,
        SInt16 numberChannels,
        HDoublePtr dataValuePtr,
        //										HSInt32Ptr							dataValuePtr,  
        HDoublePtr floatDataValuePtr,
        HDoublePtr transformMatrixPtr,
        HDoublePtr transformFeatureMeansPtr,
        SInt16 numberFeatures,
        SInt16 optionsCode);

extern void GetDiagonalVectorFromMatrix(
        UInt16 numberChannels,
        HDoublePtr inputMatrixPtr,
        HDoublePtr outputVectorPtr,
        Boolean squareInputMatrixFlag);

extern void GetProjectWindowTitle(
        UCharPtr titleStringPtr);

extern Boolean InvertLowerTriangularMatrix(
        HDoublePtr inputTriangularMatrixPtr,
        HDoublePtr outputTriangularMatrixPtr,
        SInt16 numberFeatures,
        double* determinantPtr,
        double* logDeterminantPtr,
        Boolean inverseRequestedFlag);

extern Boolean InvertSymmetricMatrix(
        HDoublePtr matrixPtr,
        UInt16 matrixSize,
        double* pivot,
        SInt16* indexRow,
        SInt16* indexCol,
        SInt16* ipvot,
        double* determinantPtr,
        double* logDeterminantPtr,
        Boolean inverseRequestedFlag);

extern void ReleaseMatrixInversionMemory(void);

extern Boolean SetupMatrixInversionMemory(
        UInt16 matrixSize,
        Boolean covarianceFlag,
        HDoublePtr* inverseCovPtr,
        HDoublePtr* pivotPtr,
        SInt16** indexRowPtr,
        SInt16** indexColPtr,
        SInt16** ipvotPtr);

extern void SquareToTriangularMatrix(
        HDoublePtr inputSquarePtr,
        HDoublePtr outputTrianglePtr,
        SInt16 numOutFeatures);

// 		end SPMatUtl.cpp  


//		Routines in SPrinCom.cpp (principalComponents.c)	

extern void PrincipalComponentControl(void);

//			end SPrinCom.cpp  


//		Routines in SProcMem.cpp (processorMemory.c)	

extern void ReleaseBiPlotDataSpecsMemory(
        Handle* biPlotDataSpecsH);

extern void ReleaseClusterSpecsMemory(Handle*);

extern void ReleaseEvalCovarianceHandleMemory(
        Handle* evaluateCovarianceSpecsHPtr);

extern void ReleaseEvalTransformHandleMemory(
        Handle* evaluateTransformSpecsHPtr);

extern void ReleaseListDataSpecsMemory(Handle*);

extern void ReleaseListResultsSpecsMemory(Handle*);

extern void ReleaseNonProjProcessorStructures(void);

extern void ReleasePrincipalCompSpecsMemory(Handle*);

extern void ReleaseReformatSpecsMemory(
        Handle* reformatOptionsHPtr);

extern void ReleaseStatisticsImageSpecsMemory(Handle*);

// 		end SProcMem.cpp


//		Routines in SProject.cpp															

extern void ChangeProjectBaseImage(void);

extern Boolean CheckIfProjectBaseImage(Handle);

extern Boolean CheckIfProjectAssociatedImage(Handle);

extern void CloseProjectStructure(ProjectInfoPtr);

extern Boolean ClusterStatisticsVerification(void);

extern Boolean CopyFileInfoFromProject(Handle);

extern Boolean CreateNewProject(Boolean);

extern Handle FindProjectBaseImageFileInfoHandle(void);

extern Handle FindProjectBaseImageWindowInfoHandle(void);

extern WindowPtr FindProjectBaseImageWindowPtr(void);

extern Boolean FindProjectImageWindows(
        Boolean loadFileAndLayerInfoFlag);

extern void ForceProjectCodeResourceLoad(void);

extern void* GetFileNameCPointer (
				ProjectInfoPtr						projectInfoPtr,
				SInt16								returnCode = kDefaultFileStringCode);

extern void* GetFileNamePPointer (
				ProjectInfoPtr						projectInfoPtr,
				SInt16								returnCode = kDefaultFileStringCode);

extern CMFileStream* GetFileStreamPointer(
        ProjectInfoPtr projectInfoPtr);

extern SInt16 GetNextLine(
				ParmBlkPtr							paramBlockPtr,
				UCharPtr*							inputStringPtrPtr);

extern Boolean GetProjectImageFileInfo(
        Boolean userPromptFlag,
        SInt16 setupGlobalInfoPointers);

extern Boolean GetProjectImageFileInfo(
        Boolean userPromptFlag,
        SInt16 setupGlobalInfoPointers,
        WindowInfoPtr* projectWindowInfoPtrPtr,
        LayerInfoPtr* projectLayerInfoPtrPtr,
        FileInfoPtr* projectFileInfoPtrPtr,
        SInt16* handleStatusPtr);

extern void GetProjectStatisticsPointers(
        short int classFieldCode,
        SInt32 storageIndex,
        HChannelStatisticsPtr* chanStatsPtrPtr,
        HSumSquaresStatisticsPtr* sumSquaresStatsPtrPtr,
        HChannelStatisticsPtr* modChanStatsPtrPtr,
        HCovarianceStatisticsPtr* modCovStatsPtrPtr);

extern SInt16 GetVolumeReferenceNumber(
        ProjectInfoPtr projectInfoPtr);

extern void InitializeNewProject(Handle, Handle);

extern Boolean LoadProjectFileAndLayerInformation(Handle);

extern void OpenNewProject(void);

extern void OpenProjectFile(
        LocalAppFile* localAppFilePtr);

extern void OpenProjectImageWindow(void);

extern void ReleaseStatisticsHandles(
        ProjectInfoPtr inputProjectInfoPtr,
        SInt16 statsCode);

extern short int SaveProjectFile(short int);

extern void UnlockProjectWindowInfoHandles(void);

extern void UpdateProjectMapProjectionHandle(
        Handle inputMapProjectionHandle);

// 		end SProject.cpp 


//		Routines in SProjectionAlgorithms.cpp		

extern Boolean ConvertLatLongPointToMapPoint(
        MapProjectionInfoPtr mapProjectionInfoPtr,
        DoublePoint* coordinatePointPtr);

extern Boolean ConvertLatLongPointToMapPoint(
        MapProjectionInfoPtr mapProjectionInfoPtr,
        double* xCoordinateValuePtr,
        double* yCoordinateValuePtr);

extern Boolean ConvertLatLongRectToMapRect(
        Handle windowInfoHandle,
        DoubleRect* coordinateRectanglePtr);

extern Boolean ConvertLatLongRectToMapRect(
        MapProjectionInfoPtr mapProjectionInfoPtr,
        DoubleRect* coordinateRectanglePtr);

extern Boolean ConvertLatLongToKrovak(
        MapProjectionInfoPtr mapProjectionInfoPtr,
        double* xCoordinateValuePtr,
        double* yCoordinateValuePtr);
/*
extern Boolean 				ConvertLatLongToTransverseMercator (
                                                                                Handle								windowInfoHandle,
                                                                                double* 								xCoordinateValuePtr, 
                                                                                double* 								yCoordinateValuePtr);			
 */
extern Boolean ConvertLatLongToTransverseMercator(
        MapProjectionInfoPtr mapProjectionInfoPtr,
        double* xCoordinateValuePtr,
        double* yCoordinateValuePtr);

extern Boolean ConvertLatLongToAlbersEqualArea(
        MapProjectionInfoPtr mapProjectionInfoPtr,
        double* xCoordinateValuePtr,
        double* yCoordinateValuePtr);

extern Boolean ConvertLatLongToCylindricalEqualArea(
        MapProjectionInfoPtr mapProjectionInfoPtr,
        double* xCoordinateValuePtr,
        double* yCoordinateValuePtr);

extern Boolean ConvertLatLongToEquirectangular(
        MapProjectionInfoPtr mapProjectionInfoPtr,
        double* xCoordinateValuePtr,
        double* yCoordinateValuePtr);

extern Boolean ConvertLatLongToLambertConformalConic(
        MapProjectionInfoPtr mapProjectionInfoPtr,
        double* xCoordinateValuePtr,
        double* yCoordinateValuePtr);

extern Boolean ConvertLatLongToMercator(
        MapProjectionInfoPtr mapProjectionInfoPtr,
        double* xCoordinateValuePtr,
        double* yCoordinateValuePtr);

extern Boolean ConvertLatLongToOrthographic(
        MapProjectionInfoPtr mapProjectionInfoPtr,
        double* xCoordinateValuePtr,
        double* yCoordinateValuePtr);

extern Boolean ConvertLatLongToPolarStereographic(
        MapProjectionInfoPtr mapProjectionInfoPtr,
        double* xCoordinateValuePtr,
        double* yCoordinateValuePtr);

extern Boolean ConvertMercatorToLatLong(
        MapProjectionInfoPtr mapProjectionInfoPtr,
        double* xCoordinateValuePtr,
        double* yCoordinateValuePtr);

extern void GetProjectionParameters(
        MapProjectionInfoPtr mapProjectionInfoPtr,
        Boolean includeUTMFlag,
        double* projStdParallel1Ptr,
        double* projStdParallel2Ptr,
        double* projNatOriginLatPtr,
        double* projNatOriginLongPtr,
        double* projFalseEastingPtr,
        double* projFalseNorthingPtr,
        double* projFalseOriginLongPtr,
        double* projFalseOriginLatPtr,
        double* projFalseOriginEastingPtr,
        double* projFalseOriginNorthingPtr,
        double* projCenterLongPtr,
        double* projCenterLatPtr,
        double* projScaleAtNatOriginPtr,
        double* projAzimuthAnglePtr,
        double* projStraightVertPoleLongGeoKeyPtr);


//		Routines in SProjFIO.cpp

extern void CloseFile(
        ProjectInfoPtr projectInfoPtr);

extern void GetCopyOfPFileName (
				ProjectInfoPtr						projectInfoPtr,
				FileStringPtr						outputPtr,
				SInt16								returnCode=kDefaultFileStringCode);

extern Boolean GetProjectFile(
        LocalAppFile* localAppFilePtr);

extern SInt32 GetSizeOfProjectFile(void);

// 		end SProjFIO.cpp 


//		Routines in SProjPur.cpp

extern Boolean Preprocess(void);

extern Boolean ProjectionPursuit(
        SInt32 numberFeatures,
        SInt32 numberClasses,
        ClassInfoPtr quick_class_info,
        double* eigenVectorPtr,
        double* tempMatrixPtr);

// 		end SProjPur.cpp 


//		Routines in SProjectUtilities.cpp

extern void Area_Of_SND_by_Direct_Calculation(double, double*);

extern Boolean AssignClassInfoMemory(
        ClassInfoPtr classInfoPtr,
        SInt16* classPtr,
        SInt32 numberClasses,
        SInt32 numberChannels,
        SInt32 numberFeatures,
        SInt16 floatDataValueCode,
        SInt16 covarianceCode,
        SInt16 inverseCode,
        SInt16 meanCode,
        SInt16 transformedCovCode,
        SInt16 transformedMeanCode);

extern double Bhattacharyya(
        HDoublePtr mean1Ptr,
        HDoublePtr mean2Ptr,
        HDoublePtr cov1Ptr,
        HDoublePtr cov2Ptr,
        double logDeterminant1,
        double logDeterminant2,
        HDoublePtr meanDifPtr,
        SInt16 numberFeatures);

extern void ChangeProjectAssociatedImageItem(Handle);

extern Boolean CheckClassEnhancedStats(
        UInt32 numberClasses,
        SInt16* classPtr);

extern Boolean CheckNumberOfPixelsInClass(
        UInt32 numberClasses,
        SInt16* classPtr,
        SInt16 minimumRequired);

extern SInt16 ClassPairWeightsDialog(
        UInt16 numberOfClassesToUse,
        SInt16** weightsListPtrPtr,
        SInt16 interClassWeightsSelection,
        SInt16* defaultClassPairWeightPtr);

extern SInt16 ClassWeightsDialog(
        UInt16 numberOfClassesToUse,
        SInt16* classPtr,
        float* weightsPtr,
        SInt16 weightsSelection,
        Boolean useEnhancedStatFlag);

extern void ClearGlobalAlertVariables(void);

extern void ComputeChiSquaredConstants(
        SInt32 degreesOfFreedom,
        double* factor1Ptr,
        double* factor2Ptr,
        double* oneOverGammaOfHalfDFPtr);

extern double ComputeChiSquaredValue(
        SInt32 degreesOfFreedom,
        double factor1,
        double factor2,
        double oneOverGammaOfHalfDF,
        double threshold_probability);

extern void ComputeGammaFunctionHalfValue(
        SInt16 n,
        double* ret);

extern short int DetermineFieldTypes(void);

extern void FindRThreshold(
        SInt16 degreesOfFreedom,
        double* rThreshold,
        double thresholdProbability,
        double rIncrementStart,
        double thresholdPrecision,
        double factor,
        double oneOverGammaOfHalfDF);

extern void ForceProjectUtilityCodeResourceLoad(void);

extern void GetBoundingRegionRectangle(
        RgnHandle rgnHandle,
        LongRect* boundingRectPtr,
        UInt32 numberPoints,
        HPFieldPointsPtr fieldPointsPtr,
        SInt32 columnOffset,
        SInt32 lineOffset);

extern double GetChiSquaredValue(
        SInt32 degreesOfFreedom,
        double threshold_probability);

extern ClassInfoPtr GetClassInfoStructure(
        UInt16 numberClasses);

extern UInt32 GetClassNameMaxLength(
        UInt32 numberClasses,
        SInt16* classPtr,
        HUInt32Ptr nameLengthVectorPtr);

extern short int GetClassWeightsIndex(
        Boolean useEnhancedStatisticsFlag,
        Boolean equalWeightsFlag);

extern float* GetClassWeightsPtr(
        float* weightsPtr,
        Boolean useEnhancedStatisticsFlag,
        Boolean equalWeightsFlag);

extern double GetClassWeightValue(
        UInt16 statClassNumber,
        UInt32 weightsIndex,
        double totalProbability);

extern UInt16 GetCommonCovarianceWeightsIndex(void);

extern void GetFieldBoundary(
        ProjectInfoPtr classProjectInfoPtr,
        AreaDescriptionPtr areaDescriptionPtr,
        SInt16 fieldNumber);

extern Boolean GetListResultsFlag(
        SInt16 fieldTypeCode,
        SInt16 listInformationCode);

extern SInt64 GetMaximumPixelsPerClass(
        UInt16* classPtr,
        UInt32 numberClasses,
        SInt16 fieldTypeCode,
        UInt16 covarianceStatsToUse,
        Boolean includeClusterFieldsFlag);

extern short int GetNextFieldArea(
        ProjectInfoPtr projectClassInfoPtr,
        SInt16* classPtr,
        UInt32 numberClasses,
        SInt16* lastClassIndex,
        SInt16 lastField,
        SInt16 fieldTypeCode,
        Boolean includeClusterFieldsFlag);

extern short int GetNumberOfAreas(
        SInt16* classPtr,
        UInt32 numberClasses,
        SInt16 fieldTypeCode,
        Boolean includeClusterFieldsFlag);

extern UInt32 GetNumberOfCombinations(
        SInt32 total,
        SInt32 subset,
        SInt32 numberContiguousPerGroup,
        Boolean stepSearchFlag,
        SInt16* returnCodePtr);

extern short int GetProbabilityThresholdCode(
        double thresholdPercent,
        Handle probabilityFileInfoHandle);

extern short int GetProjectClassWeightsIndex(void);

extern SInt16 GetProjectFieldsBoundingArea(
        SInt16 fieldTypeCode,
        SInt16* classPtr,
        UInt32 numberClasses,
        SInt32 areaLineStart,
        SInt32 areaLineEnd,
        SInt32 areaColumnStart,
        SInt32 areaColumnEnd,
        LongRect* longRectPtr);

extern float* GetTempClassWeightsPtr(void);

extern SInt64 GetTotalNumberPixelsInField(
        SInt16 fieldNumber);

extern double GetTotalProbability(
        UInt16* classPtr,
        UInt32 numberClasses,
        UInt32 weightsIndex);

extern void InitializeGlobalAlertVariables(
        SInt16 alertId,
        SInt16 alertStrID,
        SInt16 alertStringNumber);

extern double Intg_Normal_2(
        SInt16 degreesOfFreedom,
        double r,
        double input,
        double expMinusHalfRSquared);

extern void Intg_Normal(
        short int,
        double,
        double*,
        double,
        double);

extern Boolean IsProjectData(
        AreaDescriptionPtr maskAreaDescriptionPtr,
        AreaDescriptionPtr projectAreaDescriptionPtr,
        UInt32 pixelLine,
        UInt32 pixelColumn);

extern Boolean ListClassesUsed(
        ClassifierVar* classifyVariablePtr,
        FileInfoPtr fileInfoPtr,
        SInt16* classPtr,
        unsigned char* symbolsPtr,
        SInt16 localWeightsIndex,
        UInt32 numberClasses,
        CMFileStream* resultsFileStreamPtr,
        SInt16* outputForce1CodePtr,
        Boolean thresholdFlag);

extern Boolean ListClassFieldsUsed(
        SInt16 classNumber,
        SInt16* fieldPtr,
        SInt16 fieldTypeCode,
        CMFileStream* outputFilePtr,
        SInt16* outputCodePtr,
        SInt16 stringNumber,
        SInt16* fieldLabelNumberPtr,
        Boolean includeClusterFieldsFlag);

extern Boolean ListClassificationHeaderInfo(
        CMFileStream* resultsFileStreamPtr,
        SInt16* outputCodePtr,
        SInt16 covarianceStatsToUse,
        Boolean continueFlag);

extern Boolean ListClassInformationMessage(
        SInt16 strListID,
        SInt16 stringIndex,
        CMFileStream* resultsFileStreamPtr,
        SInt16 outputCode,
        UInt32 statClassNumber,
        Boolean continueFlag);

extern Boolean ListProjectFieldsUsed(
        FileInfoPtr fileInfoPtr,
        SInt16* classPtr,
        UInt32 numberClasses,
        SInt16* fieldPtr,
        SInt16 fieldTypeCode,
        CMFileStream* outputFilePtr,
        SInt16* outputCodePtr,
        Boolean includeClusterFieldsFlag);

extern void LoadClassList(
        DialogPtr dialogPtr,
#if defined multispec_lin
   wxListBox* listBoxPtr,
#else
   ListHandle listHandle,
#endif
        SInt16 numberOfClassesToUse,
        SInt16* classPtr,
        unsigned char* symbolPtr,
        Boolean clusterFlag);

extern void LoadClassPairWeightVector(
        SInt16* weightsPtr,
        SInt32 numberClassPairs,
        SInt16 defaultWeight,
        SInt32* weightsSumPtr,
        SInt16 weightSet,
        SInt16* weightsListPtr,
        SInt16* classPtr,
        UInt16 numberClasses);

extern void LoadClassSymbolVector(
        unsigned char* symbolsPtr,
        SInt16 stringNumber,
        SInt16 numberClasses);

extern void LoadClassVector(
        UInt32* numberClassesPtr,
        SInt16* classPtr);

extern void LoadFieldVector(
        UInt16* numberFieldsPtr,
        SInt16* fieldPtr,
        SInt16 fieldType);

extern void LoadTrainClassVector(
        UInt32* numberClassesPtr,
        SInt16* classSetPtr,
        SInt16* classPtr);

extern void LockProjectMemory(Handle, short int, ProjectInfoPtr*);

extern void NoClassStatsAlert(
        UInt32 minimumNumber);

extern void LoadClassWeightGroups(DialogPtr, 
#if defined multispec_lin
        wxListBox*,
#else
        ListHandle, 
#endif        
        short int*);

extern short int ProjectChangesPopUpMenu(Rect*, Boolean*, short int);

extern Boolean ProjectMenuClearStatistics(void);

extern void ReleaseClassifySpecsMemory(Handle*);

extern void ReleaseClassInfoMemory(
        ClassInfoPtr classInfoPtr,
        UInt16 numberClasses);

extern void ReleaseFeatureExtractionSpecsMemory(Handle*);

extern void ReleaseSeparabilitySpecsMemory(Handle*);

extern void ReleaseStatHistogramSpecsMemory(Handle*);

extern void ReleaseStatisticsEnhanceSpecsMemory(
        Handle* statisticsEnhanceSpecsH);

extern SInt32 SetClassListSelections(
#if defined multispec_lin
        wxListBox* listHandle,
#else 
        ListHandle listHandle,
#endif
        SInt32 numberInputClasses,
        SInt32 numberSelectedClasses,
        UInt16* classPtr);

extern SInt16 StatHistogramPopUpMenu(
        SInt16 statsWindowMode);

extern SInt16 StatisticsPopUpMenu(
        SInt16 statsWindowMode);

extern SInt16 StatListPopUpMenu(
        SInt16 statsWindowMode);

extern void UnlockProjectMemory(
        ProjectInfoPtr* inputProjectInfoPtrPtr,
        SInt16 unlockCode,
        Handle* outputProjectInfoHandlePtr);

extern SInt16 UpdateDialogClassWeightsInfo(
        SInt16 currentWeightsSelection,
        Boolean useEnhancedStatisticsFlag,
        SInt16* classWeightSetCodePtr,
        Boolean initializeClassWeightSetFlag);

extern void UpdateProjectClassWeights(
        Boolean useEnhancedStatisticsFlag,
        short int weightsSelection,
        float* classWeightsPtr);

extern Boolean VerifyProjectStatsUpToDate(
        UInt32* numberClassesPtr,
        SInt16* classPtr,
        UInt32 minimumNumberClasses,
        SInt16 covarianceStatsToUse,
        SInt16 setupGlobalInfoPointers,
        SInt32* minimumNumberTrainPixelsPtr);

//			end SProjUtl.cpp 


//		Routines in SReadHDFHeader.cpp

extern void AppendGroupIndicater(
        char* namePtr,
        UInt32 groupNumber);

extern void CloseHDF4File(
        FileInfoPtr fileInfoPtr);

extern SInt16 GetHDF4Line(
        FileInfoPtr fileInfoPtr,
        UInt32 numberChannels,
        UInt32 lineNumber,
        UInt32 channelNumber,
        UInt32 columnStart,
        UInt32 columnEnd,
        UInt32* numberSamplesPtr,
        HUCharPtr readBufferPtr);

extern Boolean GetNewHDF4FileReferences(
        FileInfoPtr fileInfoPtr);

extern SInt16 GetHDFDataSetSpecialInfo(
        FileInfoPtr fileInfoPtr,
        SInt32 dataSetIndex);

extern SInt16 GetHDFFilePathCPointer(
			FileInfoPtr							fileInfoPtr,
			FileStringPtr						filePathStringPtr,
			SInt16								fileStringLength,
			FileStringPtr*						filePathCPtrPtr,
			SInt16								libraryCode);

extern Boolean ListHDF4DataSetAttributes(
        FileInfoPtr fileInfoPtr,
        char* formatNamePtr,
        Boolean listAllDataSetInfoFlag);

extern SInt16 LoadHDF4DataSetInformation(
        SInt32 file_id,
        HdfDataSets* hdfDataSetsPtr,
        FileInfoPtr fileInfoPtr,
        SInt16 format,
        SInt32 dataSetIndex,
        Boolean useGroupedDataSetsFlag);

extern SInt16 LoadHDF4Information(
        FileInfoPtr fileInfoPtr,
        SInt16 format,
        Boolean dataSetSpecifiedFlag);

extern SInt16 SetUpHDF_FileInformation(
        FileInfoPtr fileInfoPtr,
        HdfDataSets* hdfDataSetsPtr,
        SInt32 dataSetIndex);

//			end SReadHDFHeader.cpp 


//		Routines in SRecThem.cpp

extern void RecodeThematicImageControl(void);

//			end SRecThem.cpp 


//		Routines in SReform1.cpp

extern Boolean ChangeImageTransformDialog(
        ReformatOptionsPtr reformatOptionsPtr,
        SInt16* recommendedNumberOfBitsPtr);

extern void ReleaseReformatOutputFileInfoAndBuffers(
        ReformatOptionsPtr reformatOptionsPtr,
        FileInfoPtr inputFileInfoPtr);

extern SInt16 DecodeAlgebraicFormula(
        unsigned char* stringPtr,
        double* coefficientsPtr,
        SInt16* transformChannelPtr,
        SInt16* transformOperatorPtr);

extern SInt16 DeterminePCMinimumNumberBits(
        double scaleFactor,
        SInt16 eigenSource,
        SInt16 pcNumber);

extern SInt16 GetHeaderFormatFromPopUpSelection(
        SInt16 headerOptionsSelection);

extern PascalVoid DrawHeaderOptionsPopUp(
        DialogPtr dialogPtr,
        SInt16 itemNumber);

extern PascalVoid DrawOutputFilePopUp(
        DialogPtr dialogPtr,
        SInt16 itemNumber);

extern Boolean GetReformatAndFileInfoStructures(
        Handle* fileInfoHPtr,
        Handle* reformatOptionsHPtr);

extern Boolean GetReformatOutputBuffer(
        FileInfoPtr outFileInfoPtr,
        ReformatOptionsPtr reformatOptionsPtr);

extern void InitializeHeaderPopupMenu(
        DialogPtr dialogPtr,
        MenuHandle popUpHeaderOptionsMenu);

extern void InitializeOutputFileInformation(
        WindowInfoPtr inputWindowInfoPtr,
        FileInfoPtr inputFileInfoPtr,
        ReformatOptionsPtr reformatOptionsPtr,
        FileInfoPtr outFileInfoPtr,
        Boolean keepSameFormatAsInputFlag);

extern void InitializeReformatStructure(
        ReformatOptionsPtr reformatOptionsPtr);

extern void ReformatControl(
        SInt16 reformatRequest);

//			end SReformt1.cpp     


//		Routines in SReform2.cpp	

extern void ChangeErdasHeader(void);

extern Boolean GetReformatOutputFile(
        FileInfoPtr outFileInfoPtr,
        ReformatOptionsPtr reformatOptionsPtr);

extern Boolean ListReformatResultsInformation(
        ReformatOptionsPtr reformatOptionsPtr,
        FileInfoPtr outFileInfoPtr);

extern void ModifyChannelDescriptions(
        SInt16 requestedProcedure);

extern void ModifyChannelDescriptionsChangeChannel(
        DialogPtr dialogPtr,
        ChannelDescriptionPtr channelDescriptionPtr,
        float* channelValuesPtr,
        SInt16 channelIndex,
        SInt16 lastSelectedTextItem);

extern Boolean ModifyChannelDescriptionsUpdate(
        DialogPtr dialogPtr,
        ChannelDescriptionPtr channelDescriptionPtr,
        float* channelValuesPtr,
        SInt16 channelIndex,
        char* stringPtr,
        float realValue,
        Boolean changeFlag);

extern void UpdateOutputFileStructure(
        FileInfoPtr outFileInfoPtr,
        ReformatOptionsPtr reformatOptionsPtr,
        SInt32 startLine,
        SInt32 startColumn,
        Handle mapProjectionHandle);

extern void WriteChannelDescriptionsAndValues(
        FileInfoPtr fileInfoPtr,
        SInt16* channelPtr,
        UInt32 numberChannels,
        Boolean appendToFileFlag);

extern SInt16 WriteOutputDataToFile(
        FileInfoPtr outFileInfoPtr,
        CMFileStream* outFileStreamPtr,
        unsigned char *ioOutBufferPtr,
        SInt16* channelsPtr,
        UInt32 numberOutChannels,
        UInt32 lastOutputWrittenLine,
        UInt32 numberBytesPerLineAndChannel,
        UInt32 numberOutputLines,
        UInt32 outBSQOffsetIncrement,
        UInt32 totalIOOutBytes,
        ReformatOptionsPtr reformatOptionsPtr,
        UInt32 numberOutsideLoops);

//			end SReform2.cpp


// 	Routines in SRegistration.cpp

extern SInt16 GetPolynomialModel(
        FileInfoPtr fileInfoPtr);

extern SInt16 TransformCoordinatePoint(
        double inputEasting,
        double inputNorthing,
        double* eastingPtr,
        double* northingPtr,
        double* eCoefPtr,
        double* nCoefPtr,
        SInt16 order);

//			end SRegistration.cpp


//		Routines in SSaveWrt.cpp (saveWrite.c)	

//extern SInt16 					FindEndOfLineCode (
//										ParmBlkPtr							paramBlockPtr,
//										CMFileStream*						fileStreamPtr,
//										SInt16*								errCodePtr,
//										SInt16*								endOfLineCodePtr);

extern SInt16 FindEndOfLineCode(
        ParmBlkPtr paramBlockPtr,
        CMFileStream* fileStreamPtr,
        SInt16* errCodePtr,
        SInt16* endOfLineCodePtr,
        UInt32* numberEndOfLineBytesPtr);

extern void ForceSaveWriteCodeResourceLoad(void);

extern void LoadThematicInfo(void);

extern void LoadTransformationFile(void);

extern void SaveImageWindowAs(void);

extern Boolean SaveTextOutputAs(void);

extern UCharPtr SkipToNextCarriageReturn	(
				UCharPtr						inputStringPtr);

extern Boolean WriteArcViewSupportFiles(
        FileInfoPtr fileInfoPtr);

extern Boolean WriteErdasHeader(
        FileInfoPtr,
        unsigned char*,
        short int);

extern Boolean WriteNewErdasHeader(
        FileInfoPtr fileInfoPtr,
        SInt16* headerRecordPtr,
        SInt16 ERDASVersion);

extern Boolean WriteNewImageHeader(
        FileInfoPtr inFileInfoPtr,
        FileInfoPtr outFileInfoPtr,
        HPtr headerRecordPtr,
        DisplaySpecsPtr displaySpecsPtr,
        SInt16 tiffSourceCode,
        SInt16 outputFileCode,
        SInt32 lineInterval,
        SInt32 columnInterval,
        SInt16 thematicListType,
        SInt16 paletteSelection);

extern void WriteThematicClassesAs(
        Handle windowInfoHandle,
        FileInfoPtr fileInfoPtr);

extern void WriteThematicGroups(
        Handle windowInfoHandle,
        FileInfoPtr fileInfoPtr);

extern void WriteThematicInfo(
        Handle windowInfoHandle,
        SInt16 classGroupCode);

extern Boolean WriteTIFFImageFile(
        FileInfoPtr fileInfoPtr,
        CMFileStream* fileStreamPtr,
        DisplaySpecsPtr displaySpecsPtr,
        Rect* areaRectanglePtr,
        SInt16 tiffSourceCode,
        SInt16 thematicListType,
        SInt16 paletteSelection,
        SInt32* imageDataStartPtr,
        UInt32 startMapColumn,
        UInt32 startMapLine);

extern void WriteTransformationFile(void);

// 		end SSaveWrt.cpp


//		Routines in SSelGraf.cpp

extern void ShowGraphWindowSelection(
        Handle oldSelectionGraphRecHandle);

extern Boolean SelectionGraphControl(
        CMGraphView* newSelectionGraphViewCPtr);

//			end SSelGraf.cpp


//		Routines in SSelectionUtility.cpp

extern void ClearNewFieldList(void);

extern void ClearSelectionArea(
        WindowPtr);

extern void ClosePolygonSelection(
        SelectionInfoPtr selectionInfoPtr);

extern void ComputeSelectionCoordinates(
        Handle windowInfoHandle,
        LongRect* lineColumnRectPtr,
        DoubleRect* coordinateRectPtr);

extern void ComputeSelectionCoordinates(
        Handle windowInfoHandle,
        MapProjectionInfoPtr mapProjectionInfoPtr,
        LongRect* lineColumnRectPtr,
        DoubleRect* coordinateRectPtr);
/*			
extern void 					ComputeSelectionLineColumns (
                                                                                DisplaySpecsPtr					displaySpecsPtr,
                                                                                MapProjectionInfoPtr				mapProjectionInfoPtr,
                                                                                double								hConversionFactor,
                                                                                double								vConversionFactor,
                                                                                LongRect*							lineColumnRectPtr,
                                                                                Rect*									displayRectPtr,
                                                                                LongPoint*							startPointPtr,
                                                                                DoubleRect*							coordinateRectPtr);
 */
extern void ComputeSelectionLineColumns(
        DisplaySpecsPtr displaySpecsPtr,
        MapProjectionInfoPtr mapProjectionInfoPtr,
        LongRect* lineColumnRectPtr,
        Rect* displayRectPtr,
        LongPoint* startPointPtr,
        DoubleRect* coordinateRectPtr);

extern void ComputeSelectionOffscreenRectangle(
        DisplaySpecsPtr displaySpecsPtr,
        LongRect* lineColumnRectanglePtr,
        Rect* offScreenRectanglePtr,
        SInt16 startChannel);

extern void DrawSelectionArea(
        WindowPtr windowPtr);

extern Boolean EditLineColumnDialog(
        WindowPtr windowPtr,
        WindowInfoPtr windowInfoPtr,
        LongRect* selectionRectanglePtr,
        DoubleRect* coordinateRectanglePtr,
        SInt16 pointType,
        SInt16* unitsDisplayCodePtr,
        Boolean* changedFlagPtr,
        Boolean* applyToAllWindowsFlagPtr,
        Boolean* useStartLineColumnFlagPtr,
        SInt16 stringID);

extern Boolean EditSelectionDialog(
        SInt16 pointType,
        Boolean fromStatisticsWindowFlag);

extern void GetBoundingSelectionRectangles(
        DisplaySpecsPtr displaySpecsPtr,
        SelectionInfoPtr selectionInfoPtr,
        HPFieldPointsPtr selectionPointsPtr,
        SInt16 startChannel);

extern Handle GetNewSelectionInfoHandle(void);

extern Boolean GetSelectedAreaInfo(
        WindowPtr imageWindowPtr,
        WindowInfoPtr imageWindowInfoPtr,
        SInt32* lineStartPtr,
        SInt32* lineEndPtr,
        SInt32* columnStartPtr,
        SInt32* columnEndPtr,
        Boolean clearSelectionFlag,
        Boolean useThresholdFlag,
        Boolean adjustToBaseImageFlag);

extern Boolean GetSelectedOffscreenRectangle(
        WindowInfoPtr imageWindowInfoPtr,
        Rect* offScreenRectangle,
        Boolean useThresholdFlag,
        Boolean returnAllFlag);

extern void GetSelectionBoundary(
        WindowPtr windowPtr,
        AreaDescriptionPtr areaDescriptionPtr);

extern SInt16 GetSelectionCoordinates(
        WindowPtr windowPtr,
        LongRect* lineColumnRectanglePtr,
        DoubleRect* coordinateRectangePtr,
        SInt64* numberPixelsPtr);

extern SInt64 GetSelectionNumberPixels(
        WindowInfoPtr windowInfoPtr);

extern SInt64 GetSelectionNumberPixels(
        WindowPtr windowPtr);

extern Boolean GetSelectionOffscreenRectangle(
        WindowPtr windowPtr,
        Rect* offScreenRectanglePtr);

extern Boolean GetSelectionRectangle(
        WindowPtr windowPtr,
        LongRect* selectionRectanglePtr,
        Boolean clearSelectionFlag,
        Boolean useThresholdFlag,
        Boolean adjustToBaseImageFlag);

extern SInt16 GetSelectionRectangleLimits(
        Boolean firstTimeFlag,
        SInt16 startChannel,
        LongPoint* inputStartPointPtr,
        DisplaySpecsPtr displaySpecsPtr,
        Rect* viewRectPtr,
        Rect* limitRectanglePtr,
        LongPoint* outputStartPointPtr);

extern SInt16 GetSelectionTypeCode(
        Handle windowInfoHandle);

extern SInt16 GetSelectionTypeCode(
        WindowInfoPtr imageWindowInfoPtr);

extern SInt16 GetSelectionTypeCode(
        WindowPtr windowPtr);

extern Boolean InitializePolygonSelection(
        SelectionInfoPtr selectionInfoPtr,
        HPFieldPointsPtr* selectionPointsPtrPtr,
        UInt32* memoryLimitNumberPtr,
        UInt32* bytesNeededPtr,
        UInt32* bytesNeededIncrementPtr);

extern void OutlineSelectionArea(
        WindowPtr windowPtr);

extern void SetSelectionForAllWindows(
        Handle inputWindowInfoHandle,
        SelectionInfoPtr inputSelectionInfoPtr,
        DoubleRect* inputCoordinateRectPtr,
        Boolean useStartLineColumnFlag,
        SInt16 unitsToUseCode,
        double inputFactor);

extern void SetSelectionInformation(
        WindowPtr windowPtr,
        DisplaySpecsPtr displaySpecsPtr,
        SelectionInfoPtr selectionInfoPtr,
        SInt16 typeFlag,
        SInt16 startChannel,
        LongRect* lineColumnRectPtr,
        DoubleRect* coordinateRectPtr);

extern void ShowGraphSelection(void);

extern void UpdateSelectionCoordinates(
        Handle windowInfoHandle);

//			end SSelectionUtility.cpp


//		Routines in SShapeToThematicFile.cpp

extern void ShapeToThematicFileControl(void);

//			end SShapeToThematicFile.cpp


//		Routines in SStatCom.cpp

extern Boolean DetermineIfSpecifiedStatisticsExist(
        HPClassNamesPtr classNamesPtr,
        SInt16 covarianceStatsToUse,
        Boolean* computeCommonCovarianceFlagPtr);

extern Boolean CheckMatrix(
        HDoublePtr covariancePtr,
        Boolean squareOutputMatrixFlag,
        SInt16 statisticsCode,
        UInt16 numberFeatures,
        UInt16 statClassNumber,
        SInt16 zeroVarianceStringIndex,
        SInt16 allCovariancesEqualIndex,
        Boolean useListOneMessagePerClassFlag);

extern void ComputeCorrelationFromCovMatrix(
        UInt16 numberOutputChannels,
        HCovarianceStatisticsPtr correlationPtr,
        UInt16 numberInputChannels,
        UInt16* channelListPtr,
        HDoublePtr stdDevVectorPtr,
        Boolean squareOutputMatrixFlag);

extern void CreateFieldRgn(
        SInt16 numberPoints,
        HPFieldPointsPtr fieldPointsPtr,
        RgnHandle* rgnHandlePtr,
        SInt32 columnOffset,
        SInt32 lineOffset);

extern Boolean GetClassChannelStatistics(
        UInt16 numberOutputChannels,
        HChannelStatisticsPtr classChannelStatsPtr,
        UInt16* channelListPtr,
        UInt16 classNumber);

extern void GetClassCovarianceMatrix(
        UInt16 numberOutputChannels,
        HChannelStatisticsPtr classChannelStatsPtr,
        HCovarianceStatisticsPtr classCovariancePtr,
        UInt16* channelListPtr,
        UInt16 classNumber,
        Boolean squareOutputMatrixFlag,
        SInt16 outputStatisticsCode,
        UInt16 covarianceStatsToUse);

extern void GetClassMaximumVector(
        UInt16 numberOutputChannels,
        HChannelStatisticsPtr classChannelStatsPtr,
        HDoublePtr outputClassMaximumPtr,
        UInt16* channelListPtr,
        UInt16 classNumber);

extern void GetClassMeanVector(
        UInt16 numberOutputChannels,
        HChannelStatisticsPtr classChannelStatsPtr,
        HDoublePtr outputClassMeanPtr,
        UInt16* channelListPtr,
        UInt16 classNumber);

extern void GetClassMinimumVector(
        UInt16 numberOutputChannels,
        HChannelStatisticsPtr classChannelStatsPtr,
        HDoublePtr outputClassMinimumPtr,
        UInt16* channelListPtr,
        UInt16 classNumber);

extern void GetClassStdDevVector(
        UInt16 numberOutputChannels,
        HChannelStatisticsPtr classChannelStatsPtr,
        HDoublePtr outputClassStdDevPtr,
        UInt16* channelListPtr,
        UInt16 classNumber);

extern Boolean GetClassSumsSquares(
        UInt16 numberOutputChannels,
        HChannelStatisticsPtr classChannelStatsPtr,
        HSumSquaresStatisticsPtr classSumSquaresPtr,
        UInt16* outputChannelListPtr,
        UInt16 classNumber,
        Boolean squareOutputMatrixFlag,
        SInt16 outputStatisticsCode);

extern Boolean GetCommonCovariance(
        HDoublePtr covariancePtr,
        HDoublePtr tempMatrixPtr,
        HChannelStatisticsPtr classChannelStatsPtr,
        UInt16* classPtr,
        UInt16* statFeaturePtr,
        UInt32 numberClasses,
        UInt16 numberFeatureChannels,
        Boolean squareOutputMatrixFlag,
        SInt16 outputStatisticsCode,
        UInt16 covarianceStatsToUse,
        Boolean projectCommonCovarianceFlag);

extern Boolean GetEigenStatisticsFeatures(
        UInt16* statEigenFeaturePtr,
        UInt16* outputFeaturePtr,
        SInt16 numberFeatures);

extern Boolean GetProjectChannelMinMaxes(
        UInt16 numberOutputChannels,
        HChannelStatisticsPtr classChannelStatsPtr,
        UInt16* channelListPtr,
        HDoublePtr channelMinPtr,
        HDoublePtr channelMaxPtr,
        double* overallMinPtr,
        double* overallMaxPtr);

extern SInt64 GetNumberOfPixelsLoadedInClass(
        HPClassNamesPtr classNamesPtr,
        HPFieldIdentifiersPtr fieldIdentPtr);

extern Boolean SetupModifiedStatsMemory(
        UInt32 numberClasses);

extern void GetStdDevVectorFromCovariance(
        HDoublePtr covariancePtr,
        UInt32 numberFeatures,
        Boolean squareInputMatrixFlag,
        SInt16 inputStatisticsCode,
        HDoublePtr outputStdDevPtr);

extern UInt16* GetStatisticsFeatureVector(
        Boolean featureTransformationFlag,
        UInt16* featurePtr);

extern void GetTransformedClassCovarianceMatrix(
        UInt16 numberOutputChannels,
        HChannelStatisticsPtr classChannelStatsPtr,
        HCovarianceStatisticsPtr classCovariancePtr,
        UInt16* channelListPtr,
        UInt16 classNumber,
        Boolean squareOutputMatrixFlag,
        SInt16 outputStatisticsCode,
        HDoublePtr eigenVectorPtr,
        HDoublePtr tempMatrixPtr,
        UInt16 numberFeatures);

extern void GetTransformedCovarianceMatrix(
        SInt16 numberOutputChannels,
        HCovarianceStatisticsPtr covariancePtr,
        SInt16 numberInputChannels,
        SInt16* channelListPtr,
        HChannelStatisticsPtr channelStatsPtr,
        HSumSquaresStatisticsPtr sumSquaresPtr,
        SInt64 numberPixels,
        Boolean squareOutputMatrixFlag,
        HDoublePtr eigenVectorPtr,
        HDoublePtr tempMatrixPtr,
        SInt16 numberFeatures);

extern void GetTransformedMeanVector(
        HChannelStatisticsPtr inputMeansPtr,
        HDoublePtr outputMeansPtr,
        SInt16 numberFeatureChannels,
        SInt16* featureListPtr,
        HDoublePtr eigenVectorPtr,
        HDoublePtr tempMatrixPtr,
        HDoublePtr offsetVectorPtr,
        SInt16 numberFeatures);

extern void GetTransformedStdDevVector(
        HChannelStatisticsPtr inputChannelStatsPtr,
        HDoublePtr outputStdDevPtr,
        SInt16 numberFeatureChannels,
        SInt16* featureListPtr,
        HDoublePtr eigenVectorPtr,
        HDoublePtr tempMatrixPtr,
        SInt16 numberFeatures);

extern void ReduceMaximumVector(
        HChannelStatisticsPtr inputChannelStatsPtr,
        HDoublePtr outputMaximumPtr,
        SInt16 numOutFeatures,
        SInt16* featureListPtr);

extern void ReduceMeanVector(
        HChannelStatisticsPtr inputChannelStatsPtr,
        HDoublePtr outputMeansPtr,
        SInt16 numOutFeatures,
        SInt16* featureListPtr);

extern void ReduceMinimumVector(
        HChannelStatisticsPtr inputChannelStatsPtr,
        HDoublePtr outputMinimumPtr,
        SInt16 numOutFeatures,
        SInt16* featureListPtr);

extern void ReleaseFeatureTransformationMemory(void);

extern Boolean ResetZeroVariances(
        HCovarianceStatisticsPtr covariancePtr,
        Boolean squareOutputMatrixFlag,
        SInt16 outputStatisticsCode,
        UInt32 numberFeatures);

extern void SetClassCovarianceStatsToUse(
        UInt16 covarianceStatsToUse);

extern void SetClassListMessageFlag(
        Boolean listMessageFlag);

extern void SetProjectCovarianceStatsToUse(
        UInt16 covarianceStatsToUse);

extern Boolean SetupFeatureTransformationMemory(
        Boolean featureTransformationFlag,
        SInt16 numberFeatures,
        SInt16 numberFeatureChannels,
        HDoublePtr* eigenVectorPtrPtr,
        HDoublePtr* tempMatrixPtrPtr,
        HDoublePtr* offsetVectorPtrPtr,
        SInt16** statEigenFeaturePtrPtr,
        Boolean loadOutputMatricesFlag,
        UInt16* outputFeaturePtr);

extern Boolean SetupStatsMemory(void);

extern SInt16 UpdateStatsControl(
        SInt16 statsWindowMode,
        Boolean requestFlag);

extern void InitializeChannelMaximums(
        HChannelStatisticsPtr channelStatsPtr,
        SInt16 numberChannels);

extern void InitializeChannelMinimums(
        HChannelStatisticsPtr channelStatsPtr,
        SInt16 numberChannels);

//			end SStatCom.cpp


//		Routines in SStatEnh.cpp (statisticsEnhance.c)

extern void StatisticsEnhanceControl(void);

extern void UpdateNumberLabeledSamples(
        DialogPtr dialogPtr,
        SInt16 classSelection,
        SInt16* classPtr,
        UInt32 numberClasses);

extern void UpdateNumberUnlabeledSamples(
        DialogSelectAreaPtr dialogSelectAreaPtr,
        DialogPtr dialogPtr);

//			end SStatEnh.cpp (statisticsEnhance.c) 


//		Routines in SStatHistogram.cpp

extern void ForceStatHistogramCodeResourceLoad(void);


extern SInt16 HistogramStatsControl(
        SInt16 statsWindowMode,
        SInt16 histogramRequest);

extern Boolean LoadClassMeanAndStdDevData(
        GraphPtr graphRecordPtr,
        SInt16 statsWindowMode);

extern void LoadListOfClassFieldNames(
        Str31* stringPtr,
        SInt16 statsWindowMode,
        Boolean classNameFlag);

extern void SetStatHistogramGraphTitles(
        GraphPtr graphRecordPtr);

//			end SStatHistogram.cpp 


//		Routines in SStatist.cpp (statistics.c)	

extern void ActivateStatControls(void);

extern Boolean AddClassToProject (
				UCharPtr						classNamePtr);

extern Boolean AddFieldToProject(
				SInt16						currentClass,
				SInt16						pointType,
				SInt16						fieldType,
				UCharPtr						fieldIdentifierPtr);

extern void AddPolyPointStatNewFieldW(
        LongPoint);

extern SInt16 AddSpecifiedStringToClassName(
        UCharPtr outputStringPtr,
        SInt16 stringLength,
        Boolean addStringFlag,
        UCharPtr inputStringPtr);

extern SInt16 CheckForDuplicateClassName(
        SInt16 currentStorage,
        Str255* namePtr);

extern SInt16 CheckForDuplicateFieldName(
        SInt16 currentField,
        Str255* namePtr);

extern void CloseProjectWindow(void);

extern void CreateProjectWindow(void);

extern void DeletePolyPointStatNewFieldW(
        short int entryLine);

extern void DoProjectWindowGrow(
        WindowPtr window);

extern void DoStatWActivateEvent(void);

extern void DoStatWUpdateEvent(WindowPtr);

extern void ForceStatisticsCodeResourceLoad(void);

extern SInt16 GetClassStatisticsTypeMenuItem(void);

extern void GetDefaultClassName(
        char* stringPtr);

extern void GetDefaultFieldName(
        char* stringPtr);

extern void GetFieldNameWithType (
				SInt16									field,
				UCharPtr									stringPtr);

extern void GetLineColFromList(
        SInt16 listLine,
        LongPoint* lineColPoint);

extern SInt16 GetNumberListLines(
        ListHandle listHandle);
		  
#if defined multispec_lin
extern SInt16 GetNumberListLines(
        wxListBox* listHandle);
#endif	// defined multispec_lin

extern SInt16 GetProjectStatisticsTypeMenuItem(void);

extern void GetProjectStatisticsTypeText (
				UCharPtr									textStringPtr,
				SInt16									menuItem);

extern SInt16 GetStatisticsTypeMenuItem(void);

extern void GetUniqueClassName(
        SInt32 suffixNumber,
        UCharPtr outputStringPtr,
        SInt16 prefixLength,
        Boolean useProjectClassNameFlag,
        CharPtr namePtr);

extern void GetUniqueFieldName(
        SInt32 suffixNumber,
        UCharPtr outputStringPtr,
        SInt16 prefixLength);

extern void InvalPopUpCovarianceToUse(void);

extern void LoadClassNamesIntoList(ListHandle);

#if defined multispec_lin
	extern void LoadClassNamesIntoList(wxListBox*);
#endif	// define multispec_lin

extern void LoadNewFieldListBox(void);

extern void LoadRectangleInStatList(
        LongRect* selectionRectanglePtr);

extern Boolean LOOCOptionsDialog(
        SInt16 statsWindowMode);

extern Boolean NewClassFieldDialog (
				Boolean								newClassOnlyFlag,
				UCharPtr								classNamePtr,
				UCharPtr								fieldNamePtr,
				SInt16*								fieldTypePtr);

extern void NewFieldStatMode(void);

extern void MSetControlValue(
        WindowPtr windowPtr,
        ControlHandle controlHandle,
        SInt32 value);

extern void RemoveListCells(void);

extern void SetListControlHilite(void);

extern void SetNumberClassTrainPixels(
        DialogPtr dialogPtr,
        SInt64 numberSelectionPixels,
        SInt16 fieldType);

extern void SetProjectWindowBoxes(
        SInt16* borderPtr,
        SInt16* windowCenterPtr,
        SInt16* windowWidthPtr);

extern void SetProjectWTitle(void);

extern void StatisticsControl(void);

extern void StatisticsWControlEvent(
        ControlHandle theControl,
        Boolean waitOnMouseUpFlag,
        Point location,
        SInt32 refCon);

extern void StatisticsWMouseDn(
        Point);

extern void UpdateStatisticsWindow(void);

extern void UpdateToClassControl(void);

//			end SStatist.cpp


//		Routines in SStatisticsImage.cpp				

extern void			StatisticsImageControl (void);

//			end SStatisticsImage.cpp


//		Routines in SStatLst.cpp (statList.c)

extern Boolean	ListClassInformation (
				SInt16								classStorage,
				SInt64								numberTrainPixels);

extern Boolean	ListFieldInformation (
				SInt16								fieldNumber,
				SInt64								numberPixels,
				SInt64								numberPixelsUsedForStats,
				SInt32								lineInterval,
				SInt32								columnInterval,
				SInt16								listCode);

extern void	ListStatsControl (
				SInt16								statsWindowMode,
				SInt16								listMenuItem);
//			end SStatLst.cpp

//		Routines in SStrings.cpp
extern void CheckStringLength(
				SInt16								maxWidth,
				Str255*								inputString,
				Str255*								outputString);

extern Boolean CheckTextWindowSpaceNeeded(
        UInt32 numberBytesNeeded);

extern SInt16 CompareStringsNoCase(
				const UCharPtr						str1,
				const UCharPtr						str2);

extern SInt16 CompareStringsNoCase(
				const UCharPtr						str1,
				const UCharPtr						str2,
				UInt32								numberCharacters);
/*
extern SInt16 CompareStringsNoCase(
				const TBYTE* 						str1,
				const TBYTE* 						str2,
				UInt32								numberCharacters = 0);
*/
extern Boolean CompareSuffixNoCase (
				const CharPtr						suffixStringPtr,
				StringPtr							stringPtr,
				UInt16*								numSuffixCharsPtr);

extern Boolean CompareSuffixNoCase (
				const CharPtr						suffixStringPtr,
				wchar_t*								stringPtr,
				UInt16*								numSuffixCharsPtr);

extern void ConcatFilenameSuffix (
				wchar_t*								fileNamePtr,
				const StringPtr					suffixPtr,
				SInt16								charFormatCode=kDefaultFileStringCode);
				
extern void ConcatFilenameSuffix (
				FileStringPtr						fileNamePtr,
				FileStringPtr						charSuffixPtr);

extern void ConcatPStrings (
			  UCharPtr								ioFirstStr,
			  UCharPtr								inSecondStr,
			  SInt16									inDestSize);

extern void	ConcatPStrings (
				wchar_t*								ioFirstStr,
				const wchar_t*						inSecondStr,
				SInt16								inDestSize);

wchar_t* ConvertMultibyteStringToUnicodeString (
				UCharPtr								inputMultibyteStringPtr);

void ConvertUnicodeStringToMultibyteString (
				wchar_t*								inputUnicodeStringPtr,
				UCharPtr								outputUTF8StringPtr,
				UInt16								numberCharacters=0);

extern void CopyPToP(
				UCharPtr								p1,
				UCharPtr								p2);

extern void CopyPToP (
				wchar_t*								p1,
				wchar_t*								p2);

extern SInt16 CreateNumberWithCommasInString (
				char*									inputStringPtr,
				SInt32								dataValue);

extern SInt16 CreateNumberWithCommasInString (
				char*									inputStringPtr,
				SInt64								dataValue);

extern UCharPtr CtoPstring (
				UCharPtr								inCStringPtr,
				UCharPtr								outPStringPtr);
							               	   
extern wchar_t* CtoPstring (
				wchar_t*								inCStringPtr,
				wchar_t*								outPStringPtr);

extern void ForceTextToEnd (void);

extern void GetActiveImageWindowTitle (
				UCharPtr								titleStringPtr);

extern void GetImageWindowName (
				DisplaySpecsPtr					displaySpecsPtr,
				FileInfoPtr							fileInfoPtr,
				UCharPtr								namePtr,
				Boolean								removeSuffixFlag);

extern SInt16 GetLegendWidthForWindow(
        Handle windowInfoHandle);

extern UInt16 GetNumberLeadingDecimalZeros(
        double dataValue);

extern UInt16 GetNumberWholeDigits(
        double dataValue);

extern void GetOutputWindowTitle(
        UCharPtr titleStringPtr);

extern SInt32 GetSpecifiedString(
        SInt16 stringID,
        StringHandle* stringHandlePtr,
        char** stringPtrPtr);

extern Boolean GetSpecifiedStringNumber(
        SInt16 strListID,
        SInt16 index,
        UCharPtr textStringPtr,
        Boolean continueFlag);

#if defined multispec_win
	extern Boolean GetSpecifiedStringNumber(
			  SInt16				strListID,
			  SInt16				index,
			  TBYTE*				textStringPtr,
			  Boolean			continueFlag);
#endif

extern char* GetStringToComma(
        char* inputStringPtr,
        char* inputStringEndPtr,
        char* stringPtr,
        SInt16 maxStringLength);

extern void InitializeDateVersionStrings(void);

extern SInt16 InsertCommasInNumberString(
        char* inputStringPtr,
        UInt32 numberInputCharacters,
        SInt16 decimalPlaces,
        SInt16 numberOutputCharacters);

extern Boolean ListChannelsUsed(
        FileInfoPtr fileInfoPtr,
        short int* featuresPtr,
        short int* channelsPtr,
        short int numberChannels,
        CMFileStream* outputFilePtr,
        short int* outputCodePtr,
        Boolean useTransformFlag);

extern SInt16 ListCountValue(
        char* stringPtr,
        SInt64 count,
        SInt16 countNumberWidth,
        SInt16 strLength,
        SInt16 countWidthWithCommas,
        Boolean includeTabFlag);

extern Boolean ListCPUTimeInformation(
        CMFileStream* resultsFileStreamPtr,
        Boolean continueFlag,
        time_t startTime);

extern Boolean ListHeaderInfo(
        CMFileStream* resultsFileStreamPtr,
        SInt16 listCode,
        SInt16* outputCodePtr,
        SInt16 covarianceStatsToUse,
        Boolean continueFlag);

extern Boolean ListLineColumnIntervalString(
        CMFileStream* resultsFileStreamPtr,
        SInt16 outputCode,
        UInt32 lineStart,
        UInt32 lineEnd,
        UInt32 lineInterval,
        UInt32 columnStart,
        UInt32 columnEnd,
        UInt32 columnInterval,
        Boolean continueFlag);

extern Boolean ListMapProjectionString(
        Handle mapProjectionHandle,
        char* spaceStringPtr,
        Boolean continueFlag);

extern Boolean ListMapReferenceSystemString(
        Handle mapProjectionHandle,
        char* spaceStringPtr,
        Boolean continueFlag);

extern Boolean ListMemoryMessage(
        CMFileStream* resultsFileStreamPtr);

extern Boolean ListProcessorTitleLine(
        CMFileStream* resultsFileStreamPtr,
        SInt16* outputCodePtr,
        Boolean continueFlag);

extern Boolean ListProjectAndImageName(
        CMFileStream* resultsFileStreamPtr,
        SInt16* outputCodePtr,
        SInt16 listCode,
        SInt16 covarianceStatsToUse,
        Boolean continueFlag);

extern Boolean ListSpecifiedStringNumber(
        SInt16 strListID,
        SInt16 index,
        UCharPtr tempStringPtr,
        CMFileStream* resultsFileStreamPtr,
        SInt16 outputCode,
        Boolean continueFlag);

extern Boolean ListSpecifiedStringNumber(
        SInt16 strListID,
        SInt16 index,
        CMFileStream* resultsFileStreamPtr,
        SInt16 outputCode,
        double dValue,
        Boolean continueFlag);

extern Boolean ListSpecifiedStringNumber(
        SInt16 strListID,
        SInt16 index,
        CMFileStream* resultsFileStreamPtr,
        SInt16 outputCode,
        SInt32 value,
        Boolean continueFlag);

extern Boolean ListSpecifiedStringNumber(
        SInt16 strListID,
        SInt16 index,
        CMFileStream* resultsFileStreamPtr,
        SInt16 outputCode,
        SInt32 lValue,
        SInt32 lValue2,
        Boolean continueFlag);

extern Boolean ListSpecifiedStringNumber(
        SInt16 strListID,
        SInt16 index,
        CMFileStream* resultsFileStreamPtr,
        SInt16 outputCode,
        SInt32 lValue,
        SInt32 lValue2,
        SInt32 lValue3,
        Boolean continueFlag);

extern Boolean ListSpecifiedStringNumber(
        SInt16 strListID,
        SInt16 index,
        CMFileStream* resultsFileStreamPtr,
        SInt16 outputCode,
        SInt64 llValue,
        Boolean continueFlag);

extern Boolean ListSpecifiedStringNumber(
        SInt16 strListID,
        SInt16 index,
        CMFileStream* resultsFileStreamPtr,
        SInt16 outputCode,
        SInt64 llValue,
        SInt32 lValue2,
        Boolean continueFlag);

extern Boolean ListSpecifiedStringNumber(
        SInt16 strListID,
        SInt16 index,
        CMFileStream* resultsFileStreamPtr,
        SInt16 outputCode,
        UCharPtr inputStringPtr,
        Boolean continueFlag);

extern Boolean ListSpecifiedStringNumber (
				SInt16								strListID,
				SInt16								index,
				CMFileStream*						resultsFileStreamPtr,
				SInt16								outputCode,
				wchar_t*								inputStringPtr,
				Boolean								continueFlag);

extern Boolean ListSpecifiedStringNumber (
				SInt16								strListID,
				SInt16								index,
				CMFileStream*						resultsFileStreamPtr,
				SInt16								outputCode,
				CharPtr								inputStringPtr,
				Boolean								continueFlag,
				SInt16								charFormatCode=kASCIICharString);

extern Boolean ListSpecifiedStringNumber(
				SInt16								strListID,
				SInt16								index,
				CMFileStream*						resultsFileStreamPtr,
				SInt16								outputCode,
				CharPtr								inputStringPtr,
				CharPtr								inputString2Ptr,
				Boolean								continueFlag,
				SInt16								charFormatCode=kASCIICharString);

extern Boolean ListString (
				HPtr									textBuffer,
				UInt32								textLength,
#				if use_mlte_for_text_window
					TXNObject						textH,
#				endif
#				if !use_mlte_for_text_window
					WEReference						textH,
#				endif
				SInt16								charFormatCode=kASCIICharString);

extern Boolean ListZoneMapProjectionString(
        SInt16 projectionCode,
        char* spaceStringPtr,
        Boolean continueFlag);

extern SInt16 LoadRealValueString(
        char* stringPtr,
        double dataValue,
        SInt16 dataValueFieldSize,
        SInt16 numberFDecimalDigits,
        SInt16 numberEDecimalDigits,
        char* startStringPtr,
        char* endStringPtr);

extern Boolean LoadSpecifiedStringNumberDouble(
        SInt16 strListID,
        SInt16 index,
        char* stringPtr1,
        char* stringPtr2,
        Boolean continueFlag,
        double doubleValue1,
        double doubleValue2,
        double doubleValue3,
        double doubleValue4,
        double doubleValue5);

extern Boolean LoadSpecifiedStringNumberLongP(
        SInt16 strListID,
        SInt16 index,
        char* stringPtr1,
        char* stringPtr2,
        Boolean continueFlag,
        SInt32 lValue1,
        SInt32 lValue2);

extern Boolean LoadSpecifiedStringNumberStringP(
        SInt16 strListID,
        SInt16 index,
        char* stringPtr1,
        char* stringPtr2,
        Boolean continueFlag,
        char* inputStringPtr);

extern Boolean LoadSpecifiedStringNumberStringP (
				SInt16								strListID,
				SInt16								index,
				char*									stringPtr1,
				char*									stringPtr2,
				Boolean								continueFlag,
				FileStringPtr						inputStringPtr);

extern void* MemoryCopy (
				void* 								str1,
				void* 								str2,
				int									numberCharacters,
				Boolean								wideCharacterStringFlag=false);

extern Boolean MGetString(
				UCharPtr								outTextPtr,
				UInt16								stringListID,
				UInt16								stringID,
				Boolean								returnAsWideCharStringFlag=false);
							
// Temporary
#ifndef multispec_lin
extern void MSetWindowTitle(
        StatisticsWindowPtr windowPtr,
        UCharPtr titleStringPtr);
#endif	

extern void MSetWindowTitle(
        WindowPtr windowPtr,
        UCharPtr titleStringPtr);

#ifndef multispec_lin									                               
extern void MSetWindowTitle(
        CDocument* documentCPtr,
        UCharPtr titleStringPtr);
#endif           

extern void NumToString(
        UInt32 numberValue,
        UCharPtr stringPtr);

extern void NumToString(
        SInt64 numberValue,
        UCharPtr stringPtr);

extern Boolean OutputString (
				CMFileStream*						fileStreamPtr,
				HPtr									textStringPtr,
				UInt32								numberCharacters,
				SInt16								gOutputForce1Code,
				Boolean								continueFlag,
				SInt16								charFormatCode=kASCIICharString);

extern Boolean OutputString2 (
				CMFileStream*						resultsFileStreamPtr,
				HPtr									stringPtr,
				UInt32								stringLength,
				SInt16								outputCode,
				Boolean								continueFlag,
				SInt32								stringLimit,
				SInt16								charFormatCode=kASCIICharString);

extern void pstr(
        char* sPtr,
        char* tPtr,
        SInt16* lenPtr);

extern CharPtr PtoCstring(
        CharPtr inPStringPtr,
        CharPtr outCStringPtr);

extern void RemoveCharsAddVersion(
        UCharPtr removeStringPtr,
        FileStringPtr stringPtr);

extern void RemoveCharsNoCase(
				const	CharPtr						removeStringPtr,
				UCharPtr								textStringPtr);

extern void RemoveCharsNoCase(
				const	CharPtr						removeStringPtr,
				wchar_t*								textStringPtr);

extern void SetActiveImageWindowTitle(
        UCharPtr titleStringPtr);

extern void SetImageWindowTitle(
        Handle windowInfoHandle,
        UCharPtr titleStringPtr);

extern void SetOutputWTitle(
				UCharPtr								titleStringPtr);
		  
extern void SetPascalStringLengthCharacter (
				void* 								stringPtr,
				int									length,
				SInt16								charWidthCode=0);

extern void StringToNumber (
				char*									stringPtr,
				SInt32*								theNumPtr);

extern char* StrStrNoCase (
				const char*							str1,
				const char*							str2);

extern char* StrStrNoCase (
				const char*							str1,
				const char*							str2,
				UInt32								numberCharacters);

extern SInt16 StringCompare(
				UInt8* 								str1,
				UInt8* 								str2);

extern void* StringCopy (
				void* 								str1, 
				void* 								str2,
				UInt16								startInputStringIndex=0,
				UInt16								charWidthCode=kASCIICharString);
/*
extern TBYTE* StringCopyCharacters (
				TBYTE* 								str1, 
				TBYTE* 								str2,
				int									numberCharacter);
*/
extern int StringLength (
				void* 								stringPtr,
				Boolean								asciiCharStringFlag=false);

extern SInt16 UpdateFileNameInformation (
				CMFileStream*						fileStreamPtr,
				FileStringPtr						fileNamePtr);

//extern void VerifyDOSFileName (
//				FileStringPtr						filePathPtr);

extern Boolean WriteSpecifiedStringNumber (
				CMFileStream*						resultsFileStreamPtr,
				SInt16								strListID,
				SInt16								index,
				char*									resourceStringPtr,
				Boolean								continueFlag);

extern Boolean WriteSpecifiedStringNumber (
				CMFileStream*						resultsFileStreamPtr,
				SInt16								strListID,
				SInt16								index,
				char*									finalStringPtr,
				char*									resourceStringPtr,
				char*									inputStringPtr,
				Boolean								continueFlag);

extern Boolean WriteSpecifiedStringNumber(
        CMFileStream* resultsFileStreamPtr,
        SInt16 strListID,
        SInt16 index,
        char* finalStringPtr,
        char* resourceStringPtr,
        double inputDoubleValue1,
        double inputDoubleValue2,
        double inputDoubleValue3,
        double inputDoubleValue4,
        double inputDoubleValue5,
        Boolean continueFlag);

//			end SStrings.cpp


//		Routines in SThemWin.cpp

extern void AddCellsToLegendList(
        ListHandle legendListHandle,
        SInt16 classGroupCode,
        SInt16* classToGroupPtr,
        UInt16 imageNumberClasses,
        UInt16 imageNumberGroups);

extern void ChangeClassGroupPalette(
        CMPaletteInfo paletteHandle,
        SInt16 groupNumber,
        SInt16 paletteIndex,
        RGBColor* newRGBColorPtr,
												SInt16 callType,
												SInt16								code);

extern UInt16 CheckForDuplicateName (
				SInt16								newEditCode,
				Handle								nameHandle,
				Handle								fileInfoHandle,
				UCharPtr								textStringPtr,
				SInt16*								classGroupIndexPtr,
				Boolean*								noChangeFlagPtr);

extern Boolean DoBlinkCursor1 (
				ListHandle							legendListHandle,
				Point									lCell,
				SInt16								listType,
				SInt16								code);

extern void DoThematicWColorsUpdate (void);

extern void EditClassGroupPalette(
        ListHandle legendListHandle,
        Handle displaySpecsH,
        SInt16 cellLine,
        SInt16 listType);

extern Boolean EditGroupClassDialog(
        ListHandle legendListHandle,
        SInt16 selectedCell,
        SInt16 newEditCode,
        SInt16 groupIndex);

extern void EditGroupClassDialogOK(
        ListHandle legendListHandle,
        SInt16 newEditCode,
        Handle nameHandle,
        Handle fileInfoHandle,
        char* textStringPtr,
        SInt16 selectedCell,
        UInt16 numberClassesGroups,
        SInt16 classGroupIndex,
        Boolean noChangeFlag);

#ifndef multispec_lin
extern void EditGroups(
        ListHandle legendListHandle);
#endif
#ifdef multispec_lin
extern void EditGroups(
        ListHandle legendListHandle,
        wxMouseEvent& event);
#endif

extern Boolean GetGroupStructureMemory(
        UInt32 numberClasses,
        Handle* groupTablesHandlePtr,
        Handle* groupNameHandlePtr,
        SInt16** groupToPalettePtrPtr,
        CharPtr* groupNamePtrPtr,
        Boolean* groupChangedFlagPtr,
        Boolean* groupNameChangedFlagPtr);

extern Boolean GetGroupStructureMemory(
        FileInfoPtr fileInfoPtr,
        SInt16** groupTablePtr,
        CharPtr* groupNamePtrPtr,
        Boolean* groupChangedFlagPtr,
        Boolean* groupNameChangedFlagPtr);

extern void LoadThematicLegendList(
        ListHandle legendListHandle,
        Boolean printWindowFlag);

extern Boolean SelectColor(
        SInt16 alertMessageNumber,
        RGBColor* oldRGBPtr,
        RGBColor* newRGBPtr);

extern Boolean UpdateGroupTables(
        SInt16 oldGroup,
        SInt16* classToGroupPtr,
        SInt16* groupToPalettePtr);

extern Boolean UpdateGroupTables(
        SInt16 oldGroup,
        SInt16* classToGroupPtr,
        SInt16* groupToPalettePtr,
        SInt16 numberClasses,
        UInt32 *numberGroupsPtr,
        Handle groupNameHandle);

extern void UpdateThematicLegendControls(
        WindowPtr theWindow);

//			end SThemWin.cpp


//		Routines in SThreads.cpp

extern OSErr CreateFileIOThreadPool(void);

extern void EndFileIOThread(
        FileIOInstructionsPtr fileIOInstructionsPtr);

extern SInt16 GetLineFileIOThread(
        FileIOInstructionsPtr fileIOInstructionsPtr,
        FileInfoPtr fileInfoPtr,
        UInt32 lineNumber,
        SInt16 channelNumber,
        UInt32 columnStart,
        UInt32 columnEnd,
        UInt32* numberSamplesPtr,
        HUCharPtr* fileIOBufferPtrPtr);

extern SInt16 SetupFileIOThread(
        FileIOInstructionsPtr fileIOInstructionsPtr);

extern SInt16 StartFileIOThread(
        FileIOInstructionsPtr fileIOInstructionsPtr);

//			end SThreads.cpp


//		Routines in SUtility.cpp

extern Boolean CheckIfOffscreenImageExists(
        WindowInfoPtr windowInfoPtr);

extern void ClearAreaDescriptionOffsetVariables(
        AreaDescriptionPtr areaDescriptionPtr);

extern void CloseResultsFiles(void);

extern Boolean CloseTheProject(void);

extern void CloseUpAreaDescription(
        AreaDescriptionPtr areaDescriptionPtr);

extern void ConvertLCToWinPoint(
        LongPoint* lineColumnPointPtr,
        LongPoint* windowPointPtr,
        LCToWindowUnitsVariablesPtr lcToWindowUnitsVariablesPtr);

extern void ConvertLCRectToWinRect(
        LongRect* lineColumnRect,
        LongRect* windowRectPtr,
        LCToWindowUnitsVariablesPtr lcToWindowUnitsVariablesPtr);

extern void ConvertLCToOffscreenPoint(
        DisplaySpecsPtr displaySpecsPtr,
        LongPoint* selectedlineColPtr,
        LongPoint* offscreenPointPtr);

extern void ConvertOffScreenPointToWinPoint(
        Handle windowInfoH,
        LongPoint* offscreenPointPtr,
        LongPoint* windowPointPtr);

extern void ConvertOffScreenRectToWinRect(
        LongRect* offscreenRectPtr,
        Rect* windowRectPtr,
        LCToWindowUnitsVariables* lcToWindowUnitsVariablesPtr);

extern void ConvertWinPointToLC(
        LongPoint* selectedPointPtr,
        LongPoint* lineColPoint);

extern void ConvertWinPointToDoubleLC(
        LongPoint* selectedPointPtr,
        DoublePoint* lineColPointPtr);

extern Boolean CreateBackgroundImageFile(
        FileInfoPtr fileInfoPtr,
        HUCharPtr ioOutBufferPtr,
        SInt16 tiffSourceCode,
        UInt32 numberLinesToFill,
        unsigned char backgroundValue,
        Boolean writeBackgroundDataToFileFlag);

extern Boolean CreateResultsDiskFiles(
        SInt16 lOutputStorageType,
        SInt16 numberClasses,
        SInt16 numberProbabilityClasses);

extern UInt16 DefaultBitsPerDataValueSelection(
        UInt16 numberBits,
        SInt16* eightBitsPerDataValuePtr);

extern double DetermineHistogramBinWidth(
        double inMinValue,
        double inMaxValue,
        double* outMinValuePtr,
        double* outMaxValuePtr,
        UInt32 maxNumberHistogramBins);

extern Boolean DetermineIfChannelsInOrder(
        UInt16* channelListPtr,
        UInt32 numberChannels);

extern Boolean DetermineIfContinuousChannels(
        UInt16* channelListPtr,
        UInt32 numberChannels);

extern void DrawSideBySideTitles(
        Handle windowInfoHandle,
        WindowPtr windowPtr,
        Rect* updateRectPtr,
        SInt16 windowCode);

extern SInt16 FormatHistogramSummaryString(
        char* stringPtr,
        double value,
        UInt16 numberEDecimalDigits,
        UInt16 numberFDecimalDigits,
        Boolean forceEFormatFlag);

extern Handle GetActiveDisplaySpecsHandle(void);

extern DisplaySpecsPtr GetActiveDisplaySpecsPtr(
        Handle*);

extern void GetActiveImageClipRectangle(
        SInt16 areaCode,
        Rect* outRectPtr);

extern Handle GetActiveImageFileInfoHandle(void);

extern UInt32 GetBinIndexForDataValue(
        double dataValue,
        HistogramSummaryPtr histogramSummaryPtr);

extern void GetClipRectangle(
        Rect* clipRectanglePtr);

extern Boolean GetCommonArea(
        SInt32 image1StartLine,
        SInt32 image1StartColumn,
        UInt32 image1LineInterval,
        UInt32 image1ColumnInterval,
        UInt32* image1LineStartPtr,
        UInt32* image1LineEndPtr,
        UInt32* image1ColumnStartPtr,
        UInt32* image1ColumnEndPtr,
        SInt32 image2StartLine,
        SInt32 image2StartColumn,
        UInt32* image2LineStartPtr,
        UInt32* image2ColumnStartPtr,
        UInt32 image2NumberLines,
        UInt32 image2NumberColumns);

extern double GetDataValueForBinIndex(
        UInt32 binIndex,
        HistogramSummaryPtr histogramSummaryPtr,
        SInt32 signedValueOffset);

extern Handle GetDisplaySpecsHandle(
        Handle windowInfoHandle);

extern Handle GetDisplaySpecsHandle(
        WindowInfoPtr windowInfoPtr);

extern double GetDoubleValue(
				UCharPtr									doublePtr);

extern Boolean GetFileInformationForChannelList(
        WindowInfoPtr windowInfoPtr,
        LayerInfoPtr imageLayerInfoPtr,
        FileInfoPtr fileInfoPtr,
        SInt16* channelListPtr,
        SInt16 numberChannels);

extern Boolean GetImageInformationPointers(
        SInt16* handleStatusPtr,
        Handle windowInfoHandle,
        WindowInfoPtr* windowInfoPtrPtr,
        LayerInfoPtr* layerInfoPtrPtr,
        FileInfoPtr* fileInfoPtrPtr);

extern SInt16 GetImageList(
        DialogPtr dialogPtr,
        Handle windowInfoHandle,
        UInt16 comboListItem,
        Boolean loadListFlag,
        SInt16* listLengthPtr);

extern Boolean GetInformationPointers(
        SInt16* handleStatusPtr,
        Handle windowInfoHandle,
        WindowInfoPtr* windowInfoPtrPtr,
        LayerInfoPtr* layerInfoPtrPtr,
        FileInfoPtr* fileInfoPtrPtr);

extern Handle GetLayerInfoHandle(
        WindowInfoPtr windowInfoPtr);

extern SInt16 GetLegendWidth(
        Handle windowInfoHandle);

extern SInt16 GetListBottom(
        ListHandle listHandle);

extern SInt32 GetLongIntValue(
        CharPtr longIntPtr);

extern SInt64 GetLongInt64Value(
        CharPtr longInt64Ptr);

extern SInt16 GetMaxSystemPixelSize(void);

extern SInt16 GetMinSystemPixelSize(void);

extern void GetNumberDecimalDigits(
        UInt16 dataTypeCode,
        double xMin,
        double xMax,
        double interval,
        UInt16* eDecimalDigitsPtr,
        UInt16* fDecimalDigitsPtr);

extern SInt16 GetNumberFileTypes(void);

extern SInt64 GetNumberPixelsInArea(
        SInt32 lineStart,
        SInt32 lineEnd,
        SInt32 lineInterval,
        SInt32 columnStart,
        SInt32 columnEnd,
        SInt32 columnInterval,
        SInt16 algorithmCode);

extern FileInfoPtr GetResultsFilePtr(
        SInt16 index);

extern CMFileStream* GetResultsFileStreamPtr(
        SInt16 index);

extern SDouble GetShortDoubleValue (
				UCharPtr									doublePtr);

extern SInt16 GetThresholdCode(
        double thresholdValue,
        Handle probabilityFileInfoHandle,
        SInt16 thresholdTypeCode);

extern SInt16 GetTitleHeight(
        Handle windowInfoHandle);

extern SInt64 GetTotalNumberOfPixels(
        SInt16 fieldTypeCode,
        SInt16* classPtr,
        UInt32 numberClasses,
        SInt32* selectionAreaPtr,
        SInt16 specialMode);

extern UInt32 GetTotalTime(
        time_t startTime);

extern void GetWindowClipRectangle(
        WindowPtr windowPtr,
        SInt16 areaCode,
        Rect* outRectanglePtr);

extern double GetWindowImageMagnification(
        WindowInfoPtr windowInfoPtr);

extern void InitializeAreaDescription(
        AreaDescriptionPtr areaDescriptionPtr);

extern void InitializeAreaDescription(
        AreaDescriptionPtr areaDescriptionPtr,
        SInt32 lineStart,
        SInt32 lineEnd,
        SInt32 columnStart,
        SInt32 columnEnd,
        SInt32 lineInterval,
        SInt32 columnInterval,
        SInt32 startLine,
        SInt32 startColumn,
        SInt16 diskFileFormat);

extern void InitializeDoubleVariables(void);

extern void InvalidateWindow(
        WindowPtr windowPtr,
        SInt16 areaCode,
        Boolean eraseFlag);

extern void LoadChannelsVector(
        Boolean projectFlag,
        Boolean useTransformFlag,
        short int numberFeatures,
        short int* featurePtr,
        short int* numberChannelsPtr,
        short int* channelsPtr);

extern short int LoadClassName(
        SInt16 classNumber,
        SInt16 numberClasses,
        SInt16* classPtr,
        UInt16* classIndexPtr,
        char* outputStringPtr,
        SInt16 classNameCode);

extern void LoadFeatureVector(
        Boolean useTransformFlag,
        SInt16* outputNumberFeaturesPtr,
        SInt16* featurePtr,
        SInt16 inputNumberFeatures);

extern void MInitCursor(void);

extern void* MForeColor(
        CDC* pDC,
        SInt32 color);

SInt16 MGetMarker(
        CMFileStream* fileStreamPtr,
        SInt64* outOffsetPtr,
        SInt16 messageCode);

extern SInt16 MGetNumberPaletteEntries(
        CMPaletteInfo paletteObject);

extern Boolean MGetSelectedAreaInfo(
        WindowPtr imageWindowPtr,
        WindowInfoPtr imageWindowInfoPtr,
        SInt32* lineStartPtr,
        SInt32* lineEndPtr,
        SInt32* columnStartPtr,
        SInt32* columnEndPtr,
        Boolean clearSelectionFlag,
        Boolean useThresholdFlag,
        Boolean adjustToBaseImageFlag);

extern void MHiliteControl(
        WindowPtr windowPtr,
        ControlHandle controlHandle,
        SInt16 hiliteValue);

extern void MDisposePalette(
        CMPaletteInfo paletteObject);

extern void MSetCursor(
        SInt16 cursorIndex);

extern void PauseIfInBackground(void);

extern void RemoveSuffix(
				FileStringPtr							fileNamePtr,
				SInt16									charFormatCode=kUnicodeCharString);

extern void ResetDestinationWindowParameters(
        SInt16 windowCode,
        WindowPtr windowPtr);

extern void ResetMapToWindowUnitsVariables(
        Handle windowInfoHandle,
        MapToWindowUnitsVariablesPtr mapToWindowUnitsVariablesPtr);

extern void SetActiveDisplaySpecsHandle(
        Handle displaySpecsHandle);

extern void SetAreaDescriptionOffsetVariables(
        AreaDescriptionPtr areaDescriptionPtr,
        WindowInfoPtr windowInfoPtr,
        FileInfoPtr fileInfoPtr);

extern void SetLayerInfoHandle(
        WindowInfoPtr windowInfoPtr,
        Handle layerInfoHandle);

extern Boolean SetUpActiveImageInformationGlobals(
        Handle* windowInfoHandlePtr,
        SInt16* handleStatusPtr,
        Boolean useProjectFlag);

extern void SetChannelWindowVariables(
        SInt16 windowCode,
        WindowPtr windowPtr,
        Boolean coreGraphicsFlag);

extern void SetChannelWindowVariables(
        SInt16 windowCode,
        Handle windowInfoHandle,
        Boolean coreGraphicsFlag);

extern void SetDestinationWindowParameters(
        SInt16 windowCode,
        WindowPtr windowPtr);

extern void SetLCToWindowUnitVariables(
        Handle windowInfoHandle,
        SInt16 windowCode,
        Boolean associatedImageFlag,
        LCToWindowUnitsVariablesPtr lcToWindowUnitsVariablesPtr);

extern void SetMapToWindowUnitsVariables(
        Handle windowInfoHandle,
        SInt16 windowCode,
        SInt16 useageCode,
        Boolean coreGraphicsFlag,
        MapToWindowUnitsVariablesPtr mapToWindowUnitsVariablesPtr);

#ifndef multispec_lin
extern void SetUpAreaUnitsPopUpMenu(
        MenuHandle menuHandle,
        Handle windowInfoHandle,
        DialogPtr dialogPtr);
#else
extern void SetUpAreaUnitsPopUpMenu(
        MenuHandle menuHandle,
        Handle windowInfoHandle,
        wxPanel* dialogPtr);
#endif

#if defined multispec_lin
extern void SetUpCoordinateUnitsPopUpMenu(
        MenuHandle menuHandle,
        Handle windowInfoHandle,
        wxPanel* dialogPtr);
#else
extern void SetUpCoordinateUnitsPopUpMenu(
        MenuHandle menuHandle,
        Handle windowInfoHandle,
        DialogPtr dialogPtr);
#endif

extern SInt16 Swap2Bytes(
        SInt16 inputValue);

extern void UnlockActiveImageInformationGlobals(
        SInt16 handleStatus);

extern void UnlockImageInformationHandles(
        SInt16 handleStatus,
        Handle windowInfoHandle);

extern void UpdateActiveImageWScrolls(
        double magnification);

extern void UpdateMapProjectionStructure(
        Handle inputMapProjectionHandle,
        FileInfoPtr outFileInfoPtr,
        SInt32 inputStartLine,
        SInt32 inputStartColumn,
        SInt32 lineInterval,
        SInt32 columnInterval,
        Boolean rightToLeftFlag,
        Boolean bottomToTopFlag);

extern void UpdatePlanarCoordinateInfo(
        Handle inputMapProjectionHandle,
        PlanarCoordinateSystemInfo* planarCoordinatePtr,
        SInt32 newStartColumn,
        SInt32 newStartLine,
        SInt32 numberColumns,
        SInt32 numberLines,
        SInt32 columnInterval,
        SInt32 lineInterval,
        Boolean rightToLeftFlag,
        Boolean bottomToTopFlag);

extern void UpdateImageOverlayMapProjectionInfo(
        FileInfoPtr baseFileInfoPtr,
        ImageOverlayInfoPtr imageOverlayInfoPtr,
        SInt32 overlayStartColumn,
        SInt32 overlayStartLine,
        SInt32 overlayNumberColumns,
        SInt32 overlayNumberLines,
        SInt32 columnInterval,
        SInt32 lineInterval,
        Boolean rightToLeftFlag,
        Boolean bottomToTopFlag);

extern void UpdateWindowList(
        WindowPtr theWindowPtr);

//			end SUtility.cpp


//		Routines in SWindow.cpp	

extern void RemoveWindowFromList(
        WindowPtr theWindowPtr,
        SInt16 windowMenuItem);

extern Boolean SaveIfWindowChanged(
        Handle windowInfoHandle,
        Boolean forceCloseFlag);

extern void UpdateLegendParameters(
        Handle windowInfoHandle,
        SInt16 legendWidth);

extern void UpdateWindowList(
        WindowPtr theWindowPtr,
        SInt16 windowType);

//			end SWindow.cpp


//		Routines in SWinInfo.cpp

extern Boolean CheckIfDefaultHistogramInfoExists(
        WindowInfoPtr windowInfoPtr);

extern Boolean CheckIfEntireImage(
        WindowInfoPtr windowInfoPtr,
        UInt32 lineStart,
        UInt32 lineEnd,
        UInt32 columnStart,
        UInt32 columnEnd);

extern void DisposeOfImageWindowSupportMemory(
        WindowInfoPtr windowInfoPtr);

extern void ReleaseDisplaySupportMemory(
        WindowInfoPtr windowInfoPtr);

extern Handle GetActiveImageLayerInfoHandle(void);

extern Handle GetActiveImageWindowInfoHandle(void);

extern ListHandle GetActiveLegendListHandle(void);

extern SInt16 GetActiveLegendListType(void);

extern Handle GetActiveSelectionInfoHandle(void);

extern CMFileStream* GetActiveSupportFileStreamPointer(
        SignedByte* handleStatusPtr);

extern Handle GetActiveWindowInfoHandle(void);

extern UInt32 GetCoordinateHeight(
        Handle windowInfoHandle);

extern double GetCoordinateViewAreaFactor(
        Handle windowInfoHandle);

extern UInt32 GetCoordinateViewAreaPopupStart(
        Handle windowInfoHandle);

extern SInt16 GetCoordinateViewAreaUnits(
        Handle windowInfoHandle);

extern ControlHandle GetCoordinateViewAreaUnitsControl(
        Handle windowInfoHandle);

extern UInt32 GetCoordinateViewCursorStart(
        Handle windowInfoHandle);

extern double GetCoordinateViewFactor(
        Handle windowInfoHandle);

extern UInt32 GetCoordinateViewNumberChars(
        Handle windowInfoHandle);

extern UInt32 GetCoordinateViewNumberPixelsChars(
        Handle windowInfoHandle);

extern UInt32 GetCoordinateViewNumberPixelsStart(
        Handle windowInfoHandle);

extern UInt32 GetCoordinateViewScaleStart(
        Handle windowInfoHandle);

extern UInt32 GetCoordinateViewSelectionStart(
        Handle windowInfoHandle);

extern SInt16 GetCoordinateViewUnits(
        Handle windowInfoHandle);

ControlHandle GetCoordinateViewUnitsControl(
        Handle windowInfoHandle);

extern SInt16 GetDisplayClassGroupCode(
        Handle windowInfoHandle);

extern UInt32 GetDisplayedLineStart(
        WindowInfoPtr windowInfoPtr);

extern Handle GetFileInfoHandle(
        Handle windowInfoHandle);

extern Handle GetFileInfoHandle(
        WindowInfoPtr windowInfoPtr);

extern SInt16 GetFileInfoVersion(
        WindowInfoPtr windowInfoPtr);

extern Handle GetFileMapProjectionHandle2(
        Handle windowInfoHandle);

extern CMFileStream* GetFileStreamPointer(
        Handle windowInfoHandle,
        SignedByte* handleStatusPtr);

extern Handle GetHistogramSpecsHandle(
        Handle windowInfoHandle);

extern Handle GetHistogramSpecsHandle(
        WindowInfoPtr windowInfoPtr);

extern Handle GetHistogramSummaryHandle(
        WindowInfoPtr windowInfoPtr);

extern Handle GetHistogramSummaryHandle(
        Handle windowInfoHandle);

extern SInt16 GetHistogramSupportFileFormat(
        Handle windowInfoHandle);

extern SInt16 GetHistogramSupportFileFormat(
        WindowInfoPtr windowInfoPtr);

extern UInt32 GetImageTopOffset(
        Handle windowInfoHandle);

extern SInt16 GetImageType(
        Handle windowInfoHandle);

extern void GetImageWindowTitle(
        Handle windowInfoHandle,
        UCharPtr titleStringPtr);

extern Handle GetLayerInfoHandle(
        Handle windowInfoHandle);

extern Handle GetMapProjectionHandle(
        Handle windowInfoHandle);

extern UInt32 GetMaxNumberColumns(
        Handle windowInfoHandle);

extern UInt32 GetMaxNumberLines(
        Handle windowInfoHandle);

extern UInt32 GetNumberImageFiles(
        Handle windowInfoHandle);

extern UInt32 GetNumberImageWindowOverlays(
        Handle windowInfoHandle);

extern UInt32 GetNumberWindowOverlays(
        Handle windowInfoHandle);

extern Boolean GetOutputWindowChangedFlag(void);

extern PMOrientation GetPrintPageOrientation(
        Handle windowInfoHandle);

extern double GetPrintPageScale(
        Handle windowInfoHandle);

extern Boolean GetProjectBaseImageFlag(
        Handle windowInfoHandle);

extern Boolean GetProjectWindowFlag(
        Handle windowInfoHandle);

extern SInt16 GetSelectionInfoDisplayUnits(
        WindowInfoPtr windowInfoPtr);

extern Handle GetSelectionInfoHandle(
        WindowInfoPtr windowInfoPtr);

extern Handle GetSelectionInfoHandle(
        Handle windowInfoHandle);

extern Handle GetSelectionInfoHandle(
        WindowPtr windowPtr);

extern Boolean GetShowLegendFlag(
        Handle windowInfoHandle);

extern CMFileStream* GetSupportFileStreamPointer(
        Handle windowInfoHandle,
        SignedByte* handleStatusPtr);

extern UInt32 GetTotalNumberOfChannels(
        Handle windowInfoHandle);

extern CMImageWindow* GetWindowClassPointer(
        Handle windowInfoHandle);

extern Handle GetWindowInfoHandle(
        WindowPtr windowPtr);

extern Handle GetWindowInfoHandle(
        WindowInfoPtr windowInfoPtr);

extern Handle GetWindowInfoStructures(
        Handle fileInfoHandle,
        SInt16 fileImageType,
        SInt16 windowType);

extern WindowPtr GetWindowPtr(
        Handle windowInfoHandle);

extern WindowPtr GetWindowPtr(
        WindowInfoPtr windowInfoPtr);

extern SInt16 GetWindowType(
        Handle windowInfoHandle);

extern Handle InitializeWindowInfoStructure(
        Handle windowInfoHandle,
        Boolean inputPtrFlag,
        Handle fileInfoHandle,
        SInt16 imageType,
        SInt16 windowType);

extern Boolean OffscreenImageMapExists(
        Handle windowInfoHandle);

extern void ReleaseOffscreenSupportMemory(
        WindowInfoPtr windowInfoPtr);

extern void SetCoordinateHeight(
        Handle windowInfoHandle,
        UInt32 coordinateHeight);

extern void SetCoordinateViewAreaFactor(
        Handle windowInfoHandle,
        double coordinateViewAreaFactor);

extern void SetCoordinateViewAreaPopupStart(
        Handle windowInfoHandle,
        UInt32 coordinateViewAreaPopupStart);

extern void SetCoordinateViewAreaUnits(
        Handle windowInfoHandle,
        SInt16 areaViewUnits);

extern void SetCoordinateViewCursorStart(
        Handle windowInfoHandle,
        UInt32 coordinateViewCursorStart);

extern void SetCoordinateViewFactor(
        Handle windowInfoHandle,
        double coordinateViewFactor);

extern void SetCoordinateViewNumberChars(
        Handle windowInfoHandle,
        UInt32 coordinateViewNumberChars);

extern void SetCoordinateViewNumberPixelsChars(
        Handle windowInfoHandle,
        UInt32 coordinateViewNumberChars);

extern void SetCoordinateViewNumberPixelsStart(
        Handle windowInfoHandle,
        UInt32 coordinateViewNumberChars);

extern void SetCoordinateViewScaleStart(
        Handle windowInfoHandle,
        UInt32 coordinateViewScaleStart);

extern void SetCoordinateViewSelectionStart(
        Handle windowInfoHandle,
        UInt32 coordinateViewSelectionStart);

extern void SetCoordinateViewUnits(
        Handle windowInfoHandle,
        SInt16 coordinateViewUnits);

extern void SetHistogramSpecsHandle(
        WindowInfoPtr windowInfoPtr,
        Handle histogramSpecsHandle);

extern void SetHistogramSummaryHandle(
        WindowInfoPtr windowInfoPtr,
        Handle histogramSummaryHandle);

extern void SetHistogramSupportFileFormat(
        Handle windowInfoHandle,
        SInt16 statFileFormat);

extern void SetImageType(
        Handle windowInfoHandle,
        SInt16 imageType);

extern void SetImageWindowIsUpToDateFlag(
        WindowInfoPtr windowInfoPtr,
        Boolean imageWindowIsUpToDateFlag);

extern void SetOutputWindowChangedFlag(
        Boolean windowChangedFlag);

extern void SetPrintPageOrientation(
        Handle windowInfoHandle,
        PMOrientation printPageOrientation);

extern void SetPrintPageScale(
        Handle windowInfoHandle,
        double printPageScale);

extern void SetSelectionInfoDisplayUnits(
        WindowInfoPtr windowInfoPtr,
        SInt16 unitsDisplayCode);

extern void SetSupportFileStreamHandle(
        Handle windowInfoHandle);

extern void SetWindowType(
        Handle windowInfoHandle,
        SInt16 windowType);

extern void UnlockActiveSupportFileStream(
        SignedByte handleStatus);

extern void UnlockAndDisposeSupportFileStream(
        Handle windowInfoHandle);

extern void UnlockFileStream(
        Handle windowInfoHandle,
        SignedByte handleStatus);

extern void UnlockSupportFileStream(
        Handle windowInfoHandle,
        SignedByte handleStatus);

//			end SWinInfo.cpp

//-----------------------------------------------------------------------------
#if defined multispec_win || defined multispec_lin

inline void CopyPascalStringToC(ConstStr255Param src, char* dst) {
    PtoCstring((char*) src, (char*) dst);
}
#endif	// defined multispec_win

#endif // defined __SPROTOTYPE__