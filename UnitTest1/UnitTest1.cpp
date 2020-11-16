#include "pch.h"
#include "CppUnitTest.h"
#include "../Project6.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int s;

			const int n = 5;

			int a[n] = { 1,2,3,4,5 };
			s = sum_i(a, n);
			Assert::AreEqual(s, 15);
		}
	};
}
