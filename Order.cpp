// Order.cpp: implementation of the Order class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Order.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Order::Order()
{

}

Order::~Order()
{

}
void Order::setTicket(string ticket)
{
	this->ticket=ticket;
}
string Order::getTicket(string ticket)
{
	return ticket;
}