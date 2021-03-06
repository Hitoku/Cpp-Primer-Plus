// stack.срр -- функции-члены класса Stack 
//#include "stdafx.h" --- Visual Studio --- precompiled headers
#include <iostream>
#include <cstring>
#include "Move_class.h" 

//-------------------------------------------------------------------------------------------------
Move::Move(double a, double b)
{
	x = a;
	y = b;
}
//-------------------------------------------------------------------------------------------------
void Move::show_move() const
{
	std::cout << "X = " << x << std::endl;
	std::cout << "Y = " << y << std::endl;
}
//-------------------------------------------------------------------------------------------------
Move Move::add(const Move & m) const 
{
	x += m.x;
	y += m.y;
	return *this;
}
//-------------------------------------------------------------------------------------------------
void Move::reset(double a, double b) 
{
	x = a;
	y = b;
}
//-------------------------------------------------------------------------------------------------