// CWINONE.cpp : implementation file
//

#include "pch.h"
#include "MFCTest.h"
#include "afxdialogex.h"
#include "CWINONE.h"


// CWINONE dialog

IMPLEMENT_DYNAMIC(CWINONE, CDialogEx)

CWINONE::CWINONE(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_WINONE, pParent)
{

}

CWINONE::~CWINONE()
{
}

void CWINONE::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CWINONE, CDialogEx)
END_MESSAGE_MAP()


// CWINONE message handlers
