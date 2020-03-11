// Utils.h: interface for the Utils class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_UTILS_H__B0273623_EE3B_47B1_9FB8_2BCCF6DA6326__INCLUDED_)
#define AFX_UTILS_H__B0273623_EE3B_47B1_9FB8_2BCCF6DA6326__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include<iostream>
#include<string>
using namespace std;
class Utils  
{
public:
	static void printIn(string ticket);
	Utils();
	virtual ~Utils();

};

#endif // !defined(AFX_UTILS_H__B0273623_EE3B_47B1_9FB8_2BCCF6DA6326__INCLUDED_)
