#include <afxwin.h>  
#include <string.h>  
class CMainWin: public CFrameWnd  {
public:  
	CMainWin();  
	int i = 0;
	
	afx_msg void OnChar(UINT ch, UINT, UINT);
	afx_msg void OnPaint();
	afx_msg void OnLButtonDown(UINT flags, CPoint Loc);
	afx_msg void OnRButtonDown(UINT flags, CPoint Loc);
	afx_msg void OnLButtonDblClk(UINT flags, CPoint Loc);
	afx_msg void OnRButtonDblClk(UINT flags, CPoint Loc);
	DECLARE_MESSAGE_MAP()    
};
class CApp: public CWinApp
{   
public:
	BOOL InitInstance();
};
BOOL CApp::InitInstance() 
{     m_pMainWnd = new CMainWin;
m_pMainWnd->ShowWindow(SW_RESTORE);
m_pMainWnd->UpdateWindow();
return TRUE;
}
CMainWin::CMainWin()
{ 
	this->Create(0, L"Обработка сообщений");
}
BEGIN_MESSAGE_MAP 
(CMainWin /* класс */, CFrameWnd /* базовый класс */)
ON_WM_CHAR()
ON_WM_PAINT()
ON_WM_LBUTTONDOWN()
ON_WM_RBUTTONDOWN()
ON_WM_LBUTTONDBLCLK()
ON_WM_RBUTTONDBLCLK()
END_MESSAGE_MAP()

afx_msg void CMainWin::OnChar(UINT ch, UINT, UINT)
{ 
	switch (ch)
	{
	case '1': 
		i = 1;
		OnPaint();
		break;
	case '2':
		i = 2;
		OnPaint();
		break;
	case '3':
		i = 3;
		OnPaint();
		break;
	case '4':
		i = 4;
		OnPaint();
		break;
	case '5':
		i = 5;
		OnPaint();
		break;
	case '6':
		i = 6;
		OnPaint();
		break;



	}
	
this->InvalidateRect(0); 
}
afx_msg void CMainWin::OnLButtonDown(UINT, CPoint loc)
{ 
	i = 7;
	OnPaint();
	this->InvalidateRect(0);
}
afx_msg void CMainWin::OnRButtonDown(UINT, CPoint loc)
{
	i = 8;
	OnPaint();
	this->InvalidateRect(0);
}

afx_msg void CMainWin::OnLButtonDblClk(UINT, CPoint loc)
{
	i = 9;
	OnPaint();
	this->InvalidateRect(0);
}

afx_msg void CMainWin::OnRButtonDblClk(UINT, CPoint loc)
{
	i = 10;
	OnPaint();
	this->InvalidateRect(0);
}
afx_msg void CMainWin::OnPaint() { 
	CPaintDC dc(this);
	if (i == 1)
	{	
		CPen aPen;
		aPen.CreatePen(PS_SOLID, 2, RGB(255, 0, 0));
		CPen* oldPen = dc.SelectObject(&aPen);//сохраняем старое перо											
		dc.MoveTo(50, 200);
		dc.LineTo(100, 150);
		dc.LineTo(100, 300);
									//возвращаем перо
		dc.SelectObject(oldPen);
	}
	if (i == 2)
	{
		CPen aPen;
		aPen.CreatePen(PS_SOLID, 2, RGB(255, 200, 50));
		CPen* oldPen = dc.SelectObject(&aPen);//сохраняем старое перо
		dc.Arc(130, 130,300, 300, 270, 330,130, 55);
		dc.MoveTo(255,288);
		dc.LineTo(130, 360);
		dc.LineTo(320, 360);
		dc.SelectObject(oldPen);
	}

	if (i == 3)
	{
		CPen aPen;
		aPen.CreatePen(PS_SOLID, 2, RGB(0, 200, 50));
		CPen* oldPen = dc.SelectObject(&aPen);//сохраняем старое перо
		dc.Arc(330, 130, 500, 300, 400, 330, 360, 160 );
		dc.Arc(330, 298, 500, 470, 350, 500, 410, 330);
		dc.SelectObject(oldPen);

	}


	if (i == 4)
	{
		CPen aPen;
		aPen.CreatePen(PS_SOLID, 2, RGB(100	, 0, 200));
		CPen* oldPen = dc.SelectObject(&aPen);//сохраняем старое перо
		dc.MoveTo(550, 130);
		dc.LineTo(550, 215);
		dc.LineTo(650, 215);
		dc.LineTo(650, 130);
		dc.LineTo(650, 300);
		dc.SelectObject(oldPen);
		
	}
	if (i == 5)
	{
		CPen aPen;
		aPen.CreatePen(PS_SOLID, 2, RGB(100, 250, 200));
		CPen* oldPen = dc.SelectObject(&aPen);//сохраняем старое перо
		dc.Arc(730, 298, 900, 470, 750, 500, 810, 330);
		dc.MoveTo(807, 299);
		dc.LineTo(807, 200);
		dc.LineTo(900, 200);
		dc.SelectObject(oldPen);

	}
	if (i == 6)
	{
		CPen aPen;
		aPen.CreatePen(PS_SOLID, 2, RGB(200, 50, 250));
		CPen* oldPen = dc.SelectObject(&aPen);//сохраняем старое перо
		dc.Ellipse(900, 200, 1100, 400);
		dc.MoveTo(900, 300);
		dc.LineTo(900, 100);
		dc.Arc(900,0,1100,200,1100,100,900,100);
		dc.SelectObject(oldPen);

	}

	if (i == 7)
	{
		dc.Ellipse(10, 10, 500, 300);

	}
	if (i == 8)
	{
		dc.Rectangle(10, 10, 500, 500);

	}
	if (i == 9)
	{
		dc.Rectangle(10, 10, 800, 500);

	}
	if (i == 10)
	{
		dc.Arc(330, 130, 500, 300, 400, 330, 360, 160);

	}
}

CApp App;