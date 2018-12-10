/* 
 * File:   LImageCanvas.h
 * Author: multispec
 *
 * Created on June 22, 2011, 5:00 PM
 * Revised by Larry Biehl		10/19/2018
 */

#ifndef LIMAGECANVAS_H
#define	LIMAGECANVAS_H
#include "SMultiSpec.h"
#include "LImageView.h"
//#include "LImageFrame.h"
#include "wx/wx.h"


//#define DocViewTestCanvasStyle wxNO_BORDER|wxHSCROLL|wxVSCROLL|wxTAB_TRAVERSAL
#define LImageCanvasName wxT("ImageCanvas")

//class CMImageView;

class CMImageCanvas : public wxScrolledWindow {
    DECLARE_DYNAMIC_CLASS(CMImageCanvas)

    wxPoint m_TR;
    wxPoint m_BL;
    wxPoint unscrolledpt;
    int size_h, size_w;
    CMImageView * m_View;
    wxRect m_Selection;
    static wxSize ScrollingIncrement;
    bool m_displayImageFlag;
    void Init();
    
    bool m_featureListShowFlag;
    bool m_dataListShowFlag;
    wxPoint m_LastSelectionPoint;
    
public:
    CMImageCanvas();
    CMImageCanvas(wxWindow * parent,
            wxWindowID id = wxID_ANY,
            const wxPoint & pos = wxDefaultPosition,
            const wxSize & size = wxDefaultSize,
            long style = wxSUNKEN_BORDER,
            const wxString & name = LImageCanvasName);
    bool Create(wxWindow * parent,
            wxWindowID id = wxID_ANY,
            const wxPoint & pos = wxDefaultPosition,
            const wxSize & size = wxDefaultSize,
            long style = wxSUNKEN_BORDER,
            const wxString & name = LImageCanvasName);

    CMImageView * GetView();
    void SetView(CMImageView * value);

    const wxRect & GetSelection();
    wxPoint GetLastSelectionPoint();
    
    wxSize GetCurrentSize();    
    wxPoint GetScrollPosition();

    //void Scroll(wxPoint pt);
    void CanvasScroll(int x, int y);

    void FixViewOffset();
    void AdjustScrollBars(bool callScrollFlag);

    wxRect GetImageDisplayRect(const wxPoint & scrollPos);
    wxPoint ClientToImage(const wxPoint & pos);

    bool AutoScroll(wxPoint currentPos, wxPoint scrollPos);
    void EraseBackground(bool);
    
    bool updatedbmp;

private:
    void OnPaint(wxPaintEvent& event);
    void OnIdle(wxIdleEvent& event);
    void OnEraseBackground(wxEraseEvent& event);
	 //void OnKeyDown(wxKeyEvent& event);
    void OnLeftDown(wxMouseEvent& event);
    void OnLeftUp(wxMouseEvent& event);
    void OnDlbClk(wxMouseEvent& event);
    void OnLeaveImageWindow(wxMouseEvent& event);
    void OnMotion(wxMouseEvent& event);
    void OnScrollChanged(wxScrollWinEvent& event);
    void OnButtonPress(wxKeyEvent& event) ;
    DECLARE_EVENT_TABLE()
};

#endif	/* LIMAGECANVAS_H */
