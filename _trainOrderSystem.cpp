// _trainOrderSystem.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"Utils.h"
#include"User.h"
#include"Order.h"
#include<iostream>
#include<string>
using namespace std;
void loginMenu();
void adminMenu(string name);
void stuMenu(string name);
void personMessage(string name);
void ticketOrder(string ticket);
void MyOrder(string ticket);
void changeOrder(string ticket);
void returnOrder(string ticket);
int main(int argc, char* argv[])
{
	loginMenu();
	return 0;
}
void loginMenu(){
	cout << "欢迎登陆火车订票系统" << endl;
	string name;
	string password;
	cout << "账号:";
	cin >> name;
	cout << "密码:";
	cin >> password;
	cout << "1、登陆 2、注册" << endl;
	int select;
	cin >> select;
	if(select == 1){
		//UserService us;
		User user;
       // user=us.login(name,password);
		//根据返回的用户结果进行其他的处理
		//if(user.getId() == -1){
			//用户不认识
			//cout << "账号或密码不正确，请重新登陆" << endl;
			//loginMenu();
			//return;
		//}
		//根据不同的用户处理不同的业务
		int previlege = user.getPrevilege();
		if(previlege == 1){
			adminMenu(user.getName());
		}
		else if(previlege == 2){
			stuMenu(user.getName());
		}
	}
	else{
		//注册的功能
	}
}

/************************************************************************/
/* 管理员业务的实现                                                            */
/************************************************************************/
void adminMenu(string name){
	//欢迎xx管理员登陆,去处理管理员的业务
	cout << "欢迎" << name << "管理员登陆" << endl;










}

/************************************************************************/
/* 学生用户的使用界面
/************************************************************************/
void stuMenu(string name){
	cout << "欢迎" << name << "学生登陆" << endl;
	Utils utils;
	Order or;
	utils.printIn("1.个人信息");
	utils.printIn("2.车票预订");
	utils.printIn("3.我的订单");
	int select;
	cin>>select;
	if(select==1){
		personMessage(name);
	}
	else if(select==2)
	{
		ticketOrder(or.getTicket());
	}
	else if(select==3)
	{
		MyOrder(or.getTicket());
	}
}
/********************************************/
/*个人信息
/********************************************/




/********************************************/
/*车票预定
/********************************************/
void tickerOrder(string ticket){


}




/********************************************/
/*我的订单
/********************************************/
void MyOrder(string ticket){
	Utils utils;
	utils.printIn("我的订单界面");
	utils.printIn("1.改签");
	utils.printIn("2.退票");
	utils.printIn("3.返回上一级");
	int select;
	cin>>select;
	if(select==1){
		changeOrder(ticket);
	}
	else if(select==2){
		returnOrder(ticket);
	}
	else if(select==3){
		void loginMenu();
		return;
	}
}
void changeOrder(string ticket)
	{
		Utils utils;
		utils.printIn("请输入要改签的车票:");

	}
void returnOrder(string ticket)
	{
		Utils utils;
		utils.printIn("请输入要退的车票:");
	}
