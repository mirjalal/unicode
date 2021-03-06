
// unicodeDlg.h : header file
//

#pragma once
#include "afxwin.h"


// CunicodeDlg dialog
class CunicodeDlg : public CDialogEx
{
// Construction
public:
	CunicodeDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_UNICODE_DIALOG };

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
	afx_msg void OnBnClickedButton1();
	CEdit m_first;
	CEdit m_second;
	CEdit m_result;
	CString first, second, result;
	afx_msg void OnBnClickedButton2();
	CEdit undo;
};
