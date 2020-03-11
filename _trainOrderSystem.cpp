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
	cout << "��ӭ��½�𳵶�Ʊϵͳ" << endl;
	string name;
	string password;
	cout << "�˺�:";
	cin >> name;
	cout << "����:";
	cin >> password;
	cout << "1����½ 2��ע��" << endl;
	int select;
	cin >> select;
	if(select == 1){
		//UserService us;
		User user;
       // user=us.login(name,password);
		//���ݷ��ص��û�������������Ĵ���
		//if(user.getId() == -1){
			//�û�����ʶ
			//cout << "�˺Ż����벻��ȷ�������µ�½" << endl;
			//loginMenu();
			//return;
		//}
		//���ݲ�ͬ���û�����ͬ��ҵ��
		int previlege = user.getPrevilege();
		if(previlege == 1){
			adminMenu(user.getName());
		}
		else if(previlege == 2){
			stuMenu(user.getName());
		}
	}
	else{
		//ע��Ĺ���
	}
}

/************************************************************************/
/* ����Աҵ���ʵ��                                                            */
/************************************************************************/
void adminMenu(string name){
	//��ӭxx����Ա��½,ȥ�������Ա��ҵ��
	cout << "��ӭ" << name << "����Ա��½" << endl;










}

/************************************************************************/
/* ѧ���û���ʹ�ý���
/************************************************************************/
void stuMenu(string name){
	cout << "��ӭ" << name << "ѧ����½" << endl;
	Utils utils;
	Order or;
	utils.printIn("1.������Ϣ");
	utils.printIn("2.��ƱԤ��");
	utils.printIn("3.�ҵĶ���");
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
/*������Ϣ
/********************************************/




/********************************************/
/*��ƱԤ��
/********************************************/
void tickerOrder(string ticket){


}




/********************************************/
/*�ҵĶ���
/********************************************/
void MyOrder(string ticket){
	Utils utils;
	utils.printIn("�ҵĶ�������");
	utils.printIn("1.��ǩ");
	utils.printIn("2.��Ʊ");
	utils.printIn("3.������һ��");
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
		utils.printIn("������Ҫ��ǩ�ĳ�Ʊ:");

	}
void returnOrder(string ticket)
	{
		Utils utils;
		utils.printIn("������Ҫ�˵ĳ�Ʊ:");
	}
