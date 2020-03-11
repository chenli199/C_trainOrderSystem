// User.h: interface for the User class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_USER_H__3F691AFD_CF19_4B36_9BE0_BB5FD4795A99__INCLUDED_)
#define AFX_USER_H__3F691AFD_CF19_4B36_9BE0_BB5FD4795A99__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include<iostream>
#include<string>
using namespace std;

class User  
{
private:
	string name;
    string password;
	int previlege;
public:
	void setName(string name);
	string getName();
	void setPassword(string password);
	string getPassword();
	void setPrevilege(int previlege);
	int getPrevilege();
	User();
	User(string name,string password,int previlege):name(name),password(password),previlege(previlege){};
	virtual ~User();

};

#endif // !defined(AFX_USER_H__3F691AFD_CF19_4B36_9BE0_BB5FD4795A99__INCLUDED_)
