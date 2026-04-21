
// MFCCalculatorDlg.h : header file
//

#pragma once


// CMFCCalculatorDlg dialog
class CMFCCalculatorDlg : public CDialogEx
{
	// Construction
public:
	CMFCCalculatorDlg(CWnd* pParent = nullptr);	// standard constructor

	// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCCALCULATOR_DIALOG };
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
	// 计算结果
	CString m_strResult = L"0";
	// 历史记录字符串，存储之前的计算过程和结果
	CString m_strHistory = _T("");
	// 临时用到的字符串
	CString m_strTemp = _T("");

	// 输入的数1
	double num1 = 0;
	// 输入的数2
	double num2 = 0;
	// 临时存放的结果，用于连续计算
	double tempResult = 0;



};
