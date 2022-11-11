#include "pch.h"
#include "CppUnitTest.h"
#include "../pr6.3.1/pr6.3.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest631
{
	TEST_CLASS(UnitTest631)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int x[10] = { 1, 2, 3, 4, 5 , 6 ,7 ,8 , 9 , 10 };
			int f = 2;
			int res = findNegative(x, 10, f);

			Assert::AreEqual(res, res);
		}
	};
}