// Calculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Calculator.h"

using namespace std;

Calculator::Calculator(){}
Calculator::Calculator(int num1, int num2)
{
	this->num1 = num1;
	this->num2 = num2;
}

int Calculator::add()
{
	return num1 + num2;
}

int Calculator::subtract()
{
	return num1 - num2;
}

int Calculator::multiply()
{
	return num1 * num2;
}

int Calculator::divide()
{
	return num1 / num2;
}

int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

