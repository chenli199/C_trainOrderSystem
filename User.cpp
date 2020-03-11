// User.cpp: implementation of the User class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "User.h"
#include<string>
using namespace std;
//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

User::User()
{

}

User::~User()
{

}
void User::setName(string name){
	this->name=name;
}

string User::getName(){
	return name;
}

void User::setPassword(string password){
	this->password = password;
}

string User::getPassword(){
	return password;
}

void User::setPrevilege(int previlege){
	this->previlege = previlege;
}

int User::getPrevilege(){
	return previlege;
}