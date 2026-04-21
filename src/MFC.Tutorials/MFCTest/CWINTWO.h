#pragma once
#include "afxdialogex.h"


// CWINTWO dialog

class CWINTWO : public CDialogEx
{
	DECLARE_DYNAMIC(CWINTWO)

public:
	CWINTWO(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CWINTWO();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_WINTWO };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
