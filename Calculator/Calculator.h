#ifndef CALCULATOR_FILE
#define	CLCULATOR_FILE

#include "stdafx.h"
	class Calculator{
	public:
		Calculator();
		Calculator(int, int);
		int add();
		int subtract();
		int multiply();
		int divide();

	private:
		int num1;
		int num2;
	};

#endif

