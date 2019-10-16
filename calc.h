// calc.h : main header file for the CALC application
//

#if !defined(AFX_CALC_H__B1EE0CDE_6612_4A49_9445_A42C6FDF75FE__INCLUDED_)
#define AFX_CALC_H__B1EE0CDE_6612_4A49_9445_A42C6FDF75FE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols
#include "math.h"

/////////////////////////////////////////////////////////////////////////////
// CCalcApp:
// See calc.cpp for the implementation of this class
//

class CCalcApp : public CWinApp
{
public:
	CCalcApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCalcApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CCalcApp)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CALC_H__B1EE0CDE_6612_4A49_9445_A42C6FDF75FE__INCLUDED_)
