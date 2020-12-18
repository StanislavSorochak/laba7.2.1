#include "pch.h"
#include "CppUnitTest.h"
#include "../laba7.2.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest721
{
	TEST_CLASS(UnitTest721)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int c;
			int rowCount = 2, colCount = 2;
			int** a = new int* [rowCount];
			for (int i = 0; i < rowCount; i++)
				a[i] = new int[colCount];
			a[0][0] = 1, a[0][1] = -8, a[1][0] = 9, a[1][1] = -1;
			int S = 7;
			c = Sum(a, 2, S);
			Assert::AreEqual (c, 0);
		}
	};
}
