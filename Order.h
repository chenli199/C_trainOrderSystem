// Order.h: interface for the Order class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_ORDER_H__FAEB1F26_4633_4F37_97F0_98440EAF6DC8__INCLUDED_)
#define AFX_ORDER_H__FAEB1F26_4633_4F37_97F0_98440EAF6DC8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include<iostream>
#include<string>
using namespace std;
class Order  
{
private:
	string ticket;
public:
	
	void setTicket(string ticket);
	string getTicket(string ticket);
	Order();
	virtual ~Order();

};

#endif // !defined(AFX_ORDER_H__FAEB1F26_4633_4F37_97F0_98440EAF6DC8__INCLUDED_)
