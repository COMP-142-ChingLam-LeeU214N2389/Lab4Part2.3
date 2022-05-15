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
		TEST_METHOD(TestMethod_SumOfCol)
		{
			const int maxRow = 3;
			const double mat[maxRow][MAX_COL] = { 1,2,3,4,5,6 };
			const int column = 0;
		// Arrange
			double total;
			

		// Act
			total=sumOfCol(mat,column,maxRow);

		// Assert
			Assert::AreEqual(9.0, total);

		}

		//Used to test sumOfRow
		TEST_METHOD(TestMethod_SumOfRow)
		{
			const int maxRow = 3;
			const double mat[maxRow][MAX_COL] = { 1,2,3,4,5,6 };
			const int row = 0;
			// Arrange
			double total;

			// Act
			total = sumOfRow(mat, row, maxRow);

			// Assert
			Assert::AreEqual(3.0, total);
		}
		
		//Used to test findMinElement
		TEST_METHOD(TestMethod_FindMinElement)
		{
			const double mat[3][2] = { 1,2,3,4,5,6};
			const int maxRow = 3;
			// Arrange
			double small;

			// Act
			small = findMinElement(mat, maxRow);

			// Assert
			Assert::AreEqual(1.0,small);
		}
	};
}
