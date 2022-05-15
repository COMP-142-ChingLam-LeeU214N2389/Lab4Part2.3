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
		// Arrange
			const int maxRow = 3;
			const double mat[maxRow][MAX_COL] = { 1,2,3,4,5,6 };
			double total;
			const int column = 0;

		// Act
			total=sumOfCol(mat,column,maxRow);

		// Assert
			Assert::AreEqual(9.0, total);

		}

		//Used to test sumOfRow
		TEST_METHOD(TestMethod_SumOfRow)
		{
			// Arrange
			const int maxRow = 3;
			const double mat[maxRow][MAX_COL] = { 1,2,3,4,5,6 };
			const int row = 0;
			double total;

			// Act
			total = sumOfRow(mat, row, maxRow);

			// Assert
			Assert::AreEqual(3.0, total);
		}
		
		Used to test findMinElement
		TEST_METHOD(TestMethod_FindMinElement)
		{
			// Arrange
			const double mat[3][2] = { 1,2,3,4,5,6};
			const int maxRow = 3;
			double small;

			// Act
			small = findMinElement(mat, maxRow);
			//bool isSquare(const double mat[][MAX_COL], const int maxRow) {
			//findMinElement(const double mat[][MAX_COL], const int maxRow){

			// Assert
			Assert::AreEqual(1.0,small);
		}
	};
}
