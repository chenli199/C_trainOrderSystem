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
	//获取所有的用户
	vector<User>  users = getAllUsers();
	//遍历所有的用户
	vector<User>::iterator it;
	for(it = users.begin(); it != users.end(); it++){
		//it就是里面的每一个用户
		User user = *it;
		if(name.compare(user.getName()) == 0 && password.compare(user.getPassword()) == 0){
			//表示就是登陆用户
			return user;
		}
	}
}
/*
 *获取所有的用户
 */
/*vector<User> UserService::getAllUsers(){
	vector<User> users;
	//读取用户有关的文件
	Utils us;
	vector<string> vec = us.getAllLineString("../data/user.txt");
	//遍历动态数组
	vector<string>::iterator it;
	for(it = vec.begin(); it != vec.end(); it++){
		//cout << *it << endl;
		User user = getUserByString(*it);
		users.push_back(user);
	}
	return users;
}
*/