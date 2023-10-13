#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int*, int*);
extern "C" int getArea(int*, int*);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace REQ001
{
	TEST_CLASS(REQ001)
	{
	public:

		TEST_METHOD(GetPerimeterFunctionality)
		{
			//This is testing the getPerimeter function using
			// a length of 2 and a width of 2
			int PerimeterTest = 0;
			int Length1 = 1;
			int Width1 = 1;
			PerimeterTest = getPerimeter(&Length1, &Width1);
			Assert::AreEqual(4, PerimeterTest);
		}
		TEST_METHOD(GetAreaFunctionality)
		{
			//This is testing the getArea function using
			// a length of 2 and a width of 2
			int AreaTest = 0;
			int ALength = 1;
			int AWidth = 1;
			AreaTest = getArea(&ALength, &AWidth);
			Assert::AreEqual(1, AreaTest);
		}
	};
}
