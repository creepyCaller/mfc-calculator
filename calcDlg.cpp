// calcDlg.cpp : implementation file
//

#include "stdafx.h"
#include "calc.h"
#include "calcDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCalcDlg dialog

CCalcDlg::CCalcDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CCalcDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CCalcDlg)
	m_equation = _T("");
	m_result = _T("");
	//}}AFX_DATA_INIT
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCalcDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CCalcDlg)
	DDX_Text(pDX, IDC_EQUATION, m_equation);
	DDX_Text(pDX, IDC_DISPLAY, m_result);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CCalcDlg, CDialog)
	//{{AFX_MSG_MAP(CCalcDlg)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_NUMBN_0, OnNumButton0)
	ON_BN_CLICKED(IDC_NUMBN_1, OnNumButton1)
	ON_BN_CLICKED(IDC_NUMBN_2, OnNumButton2)
	ON_BN_CLICKED(IDC_NUMBN_3, OnNumButton3)
	ON_BN_CLICKED(IDC_NUMBN_4, OnNumButton4)
	ON_BN_CLICKED(IDC_NUMBN_5, OnNumButton5)
	ON_BN_CLICKED(IDC_NUMBN_6, OnNumButton6)
	ON_BN_CLICKED(IDC_NUMBN_7, OnNumButton7)
	ON_BN_CLICKED(IDC_NUMBN_8, OnNumButton8)
	ON_BN_CLICKED(IDC_NUMBN_9, OnNumButton9)
	ON_BN_CLICKED(IDC_OPBN_POM, OnOpNegate)
	ON_BN_CLICKED(IDC_OPBN_POINT, OnOpPoint)
	ON_BN_CLICKED(IDC_OPBN_L_S_BRACKET, OnOpbnLSBracket)
	ON_BN_CLICKED(IDC_OPBN_R_S_BRACKET, OnOpbnRSBracket)
	ON_BN_CLICKED(IDC_OPBN_L_M_BEACKET, OnOpbnLMBeacket)
	ON_BN_CLICKED(IDC_OPBN_R_M_BRACKET, OnOpbnRMBracket)
	ON_BN_CLICKED(IDC_OPBN_C, OnOpbnC)
	ON_BN_CLICKED(IDC_OPBN_ADD, OnOpbnAdd)
	ON_BN_CLICKED(IDC_OPBN_ROOT, OnOpbnRoot)
	ON_BN_CLICKED(IDC_OPBN_RECIPROCAL, OnOpbnReciprocal)
	ON_BN_CLICKED(IDC_OPBN_MINUS, OnOpbnMinus)
	ON_BN_CLICKED(IDC_OPBN_MULTIPLY, OnOpbnMultiply)
	ON_BN_CLICKED(IDC_OPBN_DIVIDE, OnOpbnDivide)
	ON_BN_CLICKED(IDC_OPBN_BACKSPACE, OnOpbnBackspace)
	ON_BN_CLICKED(IDC_OPBN_CALC, OnOpbnCalculate)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCalcDlg message handlers

BOOL CCalcDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CCalcDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

HCURSOR CCalcDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CCalcDlg::OnOK() 
{
	// TODO: Add extra validation here
	CDialog::OnOK();
}

void CCalcDlg::OnNumButton0() 
{
	// TODO: Add your control notification handler code here
	m_equation+="0";
	UpdateData(FALSE);
}

void CCalcDlg::OnNumButton1() 
{
	// TODO: Add your control notification handler code here
	m_equation+="1";
	UpdateData(FALSE);
}

void CCalcDlg::OnNumButton2() 
{
	// TODO: Add your control notification handler code here
	m_equation+="2";
	UpdateData(FALSE);
}

void CCalcDlg::OnNumButton3() 
{
	// TODO: Add your control notification handler code here
	m_equation+="3";
	UpdateData(FALSE);
}

void CCalcDlg::OnNumButton4() 
{
	// TODO: Add your control notification handler code here
	m_equation+="4";
	UpdateData(FALSE);
}

void CCalcDlg::OnNumButton5() 
{
	// TODO: Add your control notification handler code here
	m_equation+="5";
	UpdateData(FALSE);
}

void CCalcDlg::OnNumButton6() 
{
	// TODO: Add your control notification handler code here
	m_equation+="6";
	UpdateData(FALSE);
}

void CCalcDlg::OnNumButton7() 
{
	// TODO: Add your control notification handler code here
	m_equation+="7";
	UpdateData(FALSE);
}

void CCalcDlg::OnNumButton8() 
{
	// TODO: Add your control notification handler code here
	m_equation+="8";
	UpdateData(FALSE);
}

void CCalcDlg::OnNumButton9() 
{
	// TODO: Add your control notification handler code here
	m_equation+="9";
	UpdateData(FALSE);
}

void CCalcDlg::OnOpNegate() 
{
	// TODO: Add your control notification handler code here
	if(m_equation == "")
	{
		m_equation = "0";
		m_equation = "Negate(" + m_equation + ')';
		UpdateData(FALSE);
	}
	else
	{
		m_equation = "Negate(" + m_equation + ')';
		UpdateData(FALSE);
	}
	m_equation.Replace("Negate", "-");
}

void CCalcDlg::OnOpPoint() 
{
	// TODO: Add your control notification handler code here
	m_equation+=".";
	UpdateData(FALSE);
}

void CCalcDlg::OnOpbnLSBracket() 
{
	// TODO: Add your control notification handler code here
	m_equation+="(";
	UpdateData(FALSE);
}

void CCalcDlg::OnOpbnRSBracket() 
{
	// TODO: Add your control notification handler code here
	m_equation+=")";
	UpdateData(FALSE);
}

void CCalcDlg::OnOpbnLMBeacket() 
{
	// TODO: Add your control notification handler code here
	m_equation+="[";
	UpdateData(FALSE);
}

void CCalcDlg::OnOpbnRMBracket() 
{
	// TODO: Add your control notification handler code here
	m_equation+="]";
	UpdateData(FALSE);
}

void CCalcDlg::OnOpbnC() 
{
	// TODO: Add your control notification handler code here
	m_equation="";
	m_result="";
	UpdateData(FALSE);
}

void CCalcDlg::OnOpbnAdd() 
{
	// TODO: Add your control notification handler code here
	m_equation+="+";
	UpdateData(FALSE);
}

void CCalcDlg::OnOpbnRoot() 
{
	// TODO: Add your control notification handler code here
	double temp;
	if(m_equation == "")
	{
		m_equation = "0";
		m_equation = "Root(" + m_equation + ")";
		UpdateData(FALSE);
	}
	else
	{
		m_equation = "Root(" + m_equation + ")";
		UpdateData(FALSE);
	}
	m_result = Calculate(m_equation);
	temp = atof(m_result.GetBuffer(m_result.GetLength()));
	temp = sqrt(temp);
	m_result.Format("%lf", temp);
	int l = m_result.GetLength(), p = m_result.Find("."), i; //处理结果里的小数点
	if(p >= 0)
	{
		for(i = l - 1;i >= 0;i--)
		{
			if(m_result.GetAt(i) == '0')
			{
				m_result.Delete(i, 1);
			}
			else
			{
				break;
			}
		}
		if(p == i)
		{
			m_result.Delete(i, 1);
		}
		for(i = 1;i <= 4;i++)
		{
			show[i - 1] = show[i];
			result[i - 1] = result[i];
		}
		show[4] = m_equation;
	}
	UpdateData(FALSE);
	m_equation = m_result;

}

void CCalcDlg::OnOpbnReciprocal() 
{
	// TODO: Add your control notification handler code here
	if(m_equation == "")
	{
		m_equation = "0";
		m_equation = "1/(" + m_equation + ")";
		UpdateData(FALSE);
	}
	else
	{
		m_equation = "1/(" + m_equation + ")";
		UpdateData(FALSE);
	}
}

void CCalcDlg::OnOpbnMinus() 
{
	// TODO: Add your control notification handler code here
	m_equation+="-";
	UpdateData(FALSE);
}

void CCalcDlg::OnOpbnMultiply() 
{
	// TODO: Add your control notification handler code here
	m_equation+="*";
	UpdateData(FALSE);
}

void CCalcDlg::OnOpbnDivide() 
{
	// TODO: Add your control notification handler code here
	m_equation+="/";
	UpdateData(FALSE);
}

void CCalcDlg::OnOpbnBackspace()
{
	m_equation.Delete(m_equation.GetLength() - 1, 1);
	UpdateData(FALSE);
}

void CCalcDlg::OnOpbnCalculate() 
{
	// TODO: Add your control notification handler code here
	if(m_equation == "") //当算式是空算式或者
	{
		MessageBox("请输入算式!", MB_OK);
	}
	else if(IsLeagal(m_equation)) //判断是否可算
	{
		if(m_equation.Find("(") >= 0) //如果有括号
		{

			m_result = GetBrankR(m_equation);

		}
		else if(m_equation.Find("Root(") >= 0)
		{
			OnOpbnRoot();
		}
		else
		{
			m_result = Calculate(m_equation);
		}
		
		int l = m_result.GetLength(), p = m_result.Find("."), i; //处理结果里的小数点
		if(p >= 0)
		{
			for(i = l - 1;i >= 0;i--)
			{
				if(m_result.GetAt(i) == '0')
				{
					m_result.Delete(i, 1);
				}
				else
				{
					break;
				}
			}
			if(p == i)
			{
				m_result.Delete(i, 1);
			}
			for(i = 1;i <= 4;i++)
			{
				show[i - 1] = show[i];
				result[i - 1] = result[i];
			}
			show[4] = m_equation;
		}
		//以下代码须修改
		if((m_equation.Find("/0") >= 0 && m_equation.Find("/0.") < 0) || m_equation.Find("/(0)") >= 0) //处理除0的情况
		{
			m_result = "0不可作除数";
		}
		UpdateData(FALSE);
	}
	else //或者算式不符合规范时重置计算器
	{
		MessageBox("算式有错误,计算器将重置！", "错误", MB_ICONSTOP | MB_OK);
		OnOpbnC();
	}
}

Status CCalcDlg::IsLeagal(CString equa) //判断算式是否符合规范
{
	int Brank_L = 0, Brank_R = 0, MBrank_L = 0, MBrank_R = 0, Point = 0;//左，右括号数相等
	int i;
	char BeginOfEquation = m_equation.GetAt(0);//算式开头不能为某些符号
	char EndOfEquation = m_equation.GetAt(m_equation.GetLength() -1);//算式末尾不能为某些符号
	//算式
	if(BeginOfEquation == '+' || BeginOfEquation == '*' || BeginOfEquation == '/' || BeginOfEquation == ')' || BeginOfEquation == ']')
	{
		return FALSE;
	}
	if(BeginOfEquation == '.')
	{
		m_equation = '0' + m_equation;
	}
	if(EndOfEquation == '.')
	{
		m_equation += '0';
	}
	if(EndOfEquation == '+' || EndOfEquation == '-' || EndOfEquation == '*' || EndOfEquation == '/' || EndOfEquation == '(' || EndOfEquation == '[')
	{
		return FALSE;
	}
	//括号
	for(i=0;i<m_equation.GetLength();i++)
	{
		if(m_equation.GetAt(i) == '(')
		{
			Brank_L++;
		}
		else if(m_equation.GetAt(i) == ')')
		{
			Brank_R++;
		}
		else if(m_equation.GetAt(i) == '[')
		{
			MBrank_L++;
		}
		else if(m_equation.GetAt(i) == ']')
		{
			MBrank_R++;
		}
	}
	if(Brank_L != Brank_R || MBrank_L != MBrank_R)
	{
		return FALSE;
	}
	//连号
	if(m_equation.Find("++") >= 0 || m_equation.Find("--") >= 0 || m_equation.Find("**") >= 0 || m_equation.Find("//") >= 0)
	{
		return FALSE;
	}
	if(m_equation.Find("-.") >= 0 || m_equation.Find("+.") >= 0 || m_equation.Find("*.") >= 0 || m_equation.Find("/.") >= 0)
	{
		return FALSE;
	}
	if(m_equation.Find(".-") >= 0 || m_equation.Find(".+") >= 0 || m_equation.Find(".*") >= 0 || m_equation.Find("./") >= 0)
	{
		return FALSE;
	}
	if(m_equation.Find("+*") >= 0 || m_equation.Find("+/") >= 0 || m_equation.Find("+-") >= 0)
	{
		return FALSE;
	}
	if(m_equation.Find("-+") >= 0 || m_equation.Find("-*") >= 0 || m_equation.Find("--") >= 0)
	{
		return FALSE;
	}
	if(m_equation.Find("*+") >= 0 || m_equation.Find("*/") >= 0 || m_equation.Find("*-") >= 0)
	{
		return FALSE;
	}
	if(m_equation.Find("/+") >= 0 || m_equation.Find("/*") >= 0 || m_equation.Find("/-") >= 0)
	{
		return FALSE;
	}
	return TRUE;
}

CString CCalcDlg::GetBrankR(CString equa)
{
	int i, j, k, g;

	while(equa.Find("(")>=0) //处理小括号
	{
		CString str1 = "", str2 = "", str3 = "";

		for(i=1;i<equa.GetLength();i++)
		{
			if(equa.GetAt(i)==')')
			{
				for(j=i+1;j<equa.GetLength();j++)
				{
					char ch[2];
					ch[0]=equa.GetAt(j);
					ch[1]='\0';
					str3+=ch;
				}
				break;
			}
		}

		for(j=i-1;j>=0;j--)
		{
			if(equa.GetAt(j)=='(')
			{
				break;
			}
			else
			{
				char ch[2];
				ch[0]=equa.GetAt(j);
				ch[1]='\0';
				str2=ch+str2;
			}
		}

		for(i=0;i<j;i++)
		{
			char ch[2];
			ch[0]=equa.GetAt(i);
			ch[1]='\0';
			str1+=ch;
		}
		
		if(!(str2.Find("(") >= 0))
		{
        	str2=Calculate(str2);
		}
		else
		{
			str2=GetBrankR(str2);
		}

	   	equa = str1 + str2 + str3;
	}

	while(equa.Find("[")>=0) //处理中括号
	{
		CString str1 = "", str2 = "", str3 = "";

		for(k=1;k<equa.GetLength();k++)
		{
			if(equa.GetAt(k)==']')
			{
				for(g=k+1;g<equa.GetLength();g++)
				{
					char ch[2];
					ch[0]=equa.GetAt(g);
					ch[1]='\0';
					str3+=ch;
				}
				break;
			}
		}

		for(g=k-1;g>=0;g--)
		{
			if(equa.GetAt(g)=='[')
			{
				break;
			}
			else
			{
				char ch[2];
				ch[0]=equa.GetAt(g);
				ch[1]='\0';
				str2=ch+str2;
			}
		}

		for(k=0;k<g;k++)
		{
			char ch[2];
			ch[0]=equa.GetAt(k);
			ch[1]='\0';
			str1+=ch;
		}
		
		if(!(str2.Find("[") >= 0))
		{
        	str2=Calculate(str2);
		}
		else
		{
			str2=GetBrankR(str2);
		}

	   	equa = str1 + str2 + str3;
	}			

	return Calculate(equa);
}

CString CCalcDlg::Calculate(CString equa)
{
	CString ret;
	double num[100] = {0}, temp = 0, rate = 10;
	char fu[100] = {NULL}, ch;
	int pnum = 0, cutf, count = 0, i, j, k, q;

	for(i = 0;i < equa.GetLength();i++) //处理算式+-*/
	{
		ch = equa.GetAt(i);
		cutf = 1;
		if(ch <= '9' && ch >= '0')
		{
			if(rate == 10)
			{
				temp  = temp * rate + ch - 48;
			}
			else
			{
				temp += rate*(ch - 48);
				rate *= 0.1;
			}
		}
		else if(ch == '.')	
		{
			rate = 0.1;
		}
		else if(ch == '+')
		{
			num[pnum++] = temp;
			temp = 0;
			rate = 10;
			fu[pnum++] = '+';
		}
		else if(ch == '-')
		{
			while(ch == '-' || ch == '+')
			{
				if(ch == '-')
				{
					cutf = -cutf;
				}
				ch = equa.GetAt(++i);
			}
			--i;
			num[pnum++]=temp;
			temp=0;
			rate=10;
			if(cutf == -1)
			{
		    	fu[pnum++] = '-';
			}
			else
			{
				fu[pnum++] = '+';
			}
		}
		else if(ch == '*')
		{
			num[pnum++] = temp;
			temp = 0;
			rate = 10;
			fu[pnum++] = '*';
			count++;
		}
		else if(ch == '/')
		{
			num[pnum++] = temp;
			temp = 0;
			rate = 10;
			fu[pnum++] = '/';
			count++;
		}
	}

	num[pnum] = temp;

	for( i=0;i<count;++i)
	{
		for(j = 1;j<pnum;++j)
		{
			k = j;
			while((fu[j]=='/' || fu[j]=='*') && i<count)
			{
				if(fu[j] == '/')
				{
					num[k-1] = num[k-1] * 1.0 / num[j+1];
					fu[j] = '0';
					num[j+1] = 0;
				}
				else if(fu[j] == '*')
				{
					num[k-1] = num[k-1] * 1.0 * num[j+1];
					fu[j] = '0';
					num[j+1] = 0;
				}
				i++;
				for(q = j+1;q < pnum;q++)
					if(fu[q] == '*' || fu[q] == '/' ||fu[q] == '+' || fu[q] == '-')
					{
						break;
					}
				if(fu[q]=='*' || fu[q]=='/')
				{
					j=q;
				}
				else
				{
					break;
				}
			}
		}
	}

	for(i=1;i < equa.GetLength();++i)
	{
		if(fu[i] == '+')
		{
			num[0] += num[i+1];
			fu[i] = '0';
		}
		else if(fu[i] == '-')
		{
			num[0] -= num[i+1];
			fu[i] = '0';
		}
	}
	ret.Format("%lf", num[0]);
	return ret;
}
