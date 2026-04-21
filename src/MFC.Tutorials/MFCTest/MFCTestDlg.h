
// MFCTestDlg.h : header file
//

#pragma once
#include "CWINONE.h"
#include "CWINTWO.h"


// CMFCTestDlg dialog
class CMFCTestDlg : public CDialogEx
{
	// Construction
public:
	CMFCTestDlg(CWnd* pParent = nullptr);	// standard constructor

	// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCTEST_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


	// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

private:
	CWINONE m_winOne;
	CWINTWO m_winTwo;

public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
};
