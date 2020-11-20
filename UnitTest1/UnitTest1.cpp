#include "pch.h"
#include "CppUnitTest.h"
#include "../6.3_iter/6.3_iter.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			const int n = 6;
			int a[n] = { -8,5,8,1,0,-3 };
			t = Sum(a, n);
			Assert::AreEqual(t, 0);
		}
	};
}
