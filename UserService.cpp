// UserService.cpp: implementation of the UserService class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "UserService.h"
#include"Utils.h"
#include<vector>
#include<string>
#include<iterator>
#include<iostream>
#include"User.h"
using namespace std;
//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

UserService::UserService()
{

}

UserService::~UserService()
{

}
/*User UserService::login(string name,string password)
{
	//��ȡ���е��û�
	vector<User>  users = getAllUsers();
	//�������е��û�
	vector<User>::iterator it;
	for(it = users.begin(); it != users.end(); it++){
		//it���������ÿһ���û�
		User user = *it;
		if(name.compare(user.getName()) == 0 && password.compare(user.getPassword()) == 0){
			//��ʾ���ǵ�½�û�
			return user;
		}
	}
}
/*
 *��ȡ���е��û�
 */
/*vector<User> UserService::getAllUsers(){
	vector<User> users;
	//��ȡ�û��йص��ļ�
	Utils us;
	vector<string> vec = us.getAllLineString("../data/user.txt");
	//������̬����
	vector<string>::iterator it;
	for(it = vec.begin(); it != vec.end(); it++){
		//cout << *it << endl;
		User user = getUserByString(*it);
		users.push_back(user);
	}
	return users;
}
*/