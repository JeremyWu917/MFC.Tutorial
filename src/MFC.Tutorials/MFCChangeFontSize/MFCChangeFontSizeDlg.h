
// MFCChangeFontSizeDlg.h : header file
//

#pragma once


// CMFCChangeFontSizeDlg dialog
class CMFCChangeFontSizeDlg : public CDialogEx
{
	// Construction
public:
	CMFCChangeFontSizeDlg(CWnd* pParent = nullptr);	// standard constructor

	// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCCHANGEFONTSIZE_DIALOG };
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
public:
	CFont m_font;
	CEdit m_ControlEdit;

	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
};
