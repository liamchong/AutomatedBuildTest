#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Calculator/Calculator.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestAdd)
		{
			Calculator* cal = new Calculator(1, 2);
			int value = cal->add();
			Assert::AreEqual(3, value);
			delete cal;
		}

		TEST_METHOD(TestSubtract)
		{
			Calculator* cal = new Calculator(2, 1);
			int value = cal->subtract();
			Assert::AreEqual(1, value);
			delete cal;
		}

		TEST_METHOD(TestMultipy)
		{
			Calculator* cal = new Calculator(1, 2);
			int value = cal->multiply();
			Assert::AreEqual(3, value);
			delete cal;
		}

		TEST_METHOD(TestDivide)
		{
			Calculator* cal = new Calculator(2, 1);
			int value = cal->divide();
			Assert::AreEqual(2, value);
			delete cal;
		}
	};
}