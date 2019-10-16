// calcDlg.h : header file
//

#if !defined(AFX_CALCDLG_H__ECF2AD8A_0689_4851_9182_6828DFF0B50A__INCLUDED_)
#define AFX_CALCDLG_H__ECF2AD8A_0689_4851_9182_6828DFF0B50A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define Status int
#define TRUE 1
#define FALSE 0

/////////////////////////////////////////////////////////////////////////////
// CCalcDlg dialog

class CCalcDlg : public CDialog
{
// Construction
public:
	Status IsLeagal(CString equa); //判断算式是否符合规范
	CString Calculate(CString equa); //决定使用CString来承载算式
	CString GetBrankR(CString equa); //括号
	CString result[5];
	CString show[5];
	CCalcDlg(CWnd* pParent = NULL);	// standard constructor
// Dialog Data
	//{{AFX_DATA(CCalcDlg)
	enum { IDD = IDD_CALC_DIALOG };
	CString	m_equation;
	CString	m_result;
	//}}AFX_DATA
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCalcDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;
	// Generated message map functions
	//{{AFX_MSG(CCalcDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	virtual void OnOK();
	afx_msg void OnNumButton0();
	afx_msg void OnNumButton1();
	afx_msg void OnNumButton2();
	afx_msg void OnNumButton3();
	afx_msg void OnNumButton4();
	afx_msg void OnNumButton5();
	afx_msg void OnNumButton6();
	afx_msg void OnNumButton7();
	afx_msg void OnNumButton8();
	afx_msg void OnNumButton9();
	afx_msg void OnOpNegate();
	afx_msg void OnOpPoint();
	afx_msg void OnOpbnLSBracket();
	afx_msg void OnOpbnRSBracket();
	afx_msg void OnOpbnLMBeacket();
	afx_msg void OnOpbnRMBracket();
	afx_msg void OnOpbnC();
	afx_msg void OnOpbnAdd();
	afx_msg void OnOpbnRoot();
	afx_msg void OnOpbnReciprocal();
	afx_msg void OnOpbnMinus();
	afx_msg void OnOpbnMultiply();
	afx_msg void OnOpbnDivide();
	afx_msg void OnOpbnBackspace();
	afx_msg void OnOpbnCalculate();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CALCDLG_H__ECF2AD8A_0689_4851_9182_6828DFF0B50A__INCLUDED_)
