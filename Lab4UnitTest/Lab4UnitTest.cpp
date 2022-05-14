#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab4Part2.3/Options.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab4UnitTest
{
	TEST_CLASS(Lab4UnitTest)
	{
	public:
		//Used to test sumOfCol

		TEST_METHOD(TestMethod1)
		{
		// Arrange
			const int maxRow = 3;
			const double mat[maxRow][MAX_COL] = { 1,2,3,4,5,6 };
			const int row = 0;
			double total;
		// Act
			total=sumOfRow(mat,row,maxRow);
		// Assert
			Assert::AreEqual(3.0, total);

		}
	};
}
