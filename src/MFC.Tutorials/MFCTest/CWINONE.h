#pragma once
#include "afxdialogex.h"


// CWINONE dialog

class CWINONE : public CDialogEx
{
	DECLARE_DYNAMIC(CWINONE)

public:
	CWINONE(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CWINONE();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_WINONE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
