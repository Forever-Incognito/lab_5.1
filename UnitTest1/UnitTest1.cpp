#include "pch.h"
#include "CppUnitTest.h"
#include "../Лабораторна 5.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = pow(2, 4);
			Assert::AreEqual(t, 16.);
		}
	};
}
