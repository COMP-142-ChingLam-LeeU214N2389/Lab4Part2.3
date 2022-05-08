/** \file Lab2Part2.3.cpp
* \brief Small matris program
* \author Ching Lam Lee
* \date 5/8/2022
*/

#include <iostream> 
#include <cstdlib>
#include"Options.h"
using namespace std;

/**
* Present the menu to the user with the valid options
* @return Returns 0
*/
int main() {
	srand(static_cast<unsigned int>(time(NULL)));

	const int MAX_ROW = 3;

	double matrix[MAX_ROW][MAX_COL] = { 0 };
	int choice, column, row;

	do {
		cout << "\n1. Sum of row"
			<< "\n2. Sum of column"
			<< "\n3. Fill with random numbers"
			<< "\n4. Print the matrix"
			<< "\n5. Fill matrix"
			<< "\n6. Fill maximum element"
			<< "\n7. Find minimum element"
			<< "\n8. Is it a square matrix?"
			<< "\n9. Exit";

		cout << "\nEnter your choice: ";

		cin >> choice;
		if (1 == choice) {
			cout << "\nWhich row are you looking for?";
			cin >> row;
			cout << "\nSum of row " << row << " is "
				<< sumOfRow(matrix, row, MAX_ROW);
		}
		if (2 == choice) {
			cout << "\nWhich column are you looking for?";
			cin >> column;
			cout << "\nSum of column " << column << " is "
				<< sumOfCol(matrix, column, MAX_ROW);
		}
		if (choice == 3) {
			cout << "\nNumber between 1 and 100 is now assigned randomly to the elements of the matrix";
			fillWithRandomNum(matrix, MAX_ROW);
			cout << endl;
		}
		if (4 == choice) {
			printMatrix(matrix, MAX_ROW);
		}
		if (5 == choice) {
			fillMatrix(matrix, MAX_ROW);
		}
		if (6 == choice) {
			cout << "\nThe smallest element is "
				<< findMinElement(matrix, MAX_ROW) << endl;
		}
		if (7 == choice) {
			cout << "\nThe largest element is "
				<< findMaxElement(matrix, MAX_ROW) << endl;
		}
		if (8 == choice) {
			cout << "\nMAX_ROW is " << MAX_ROW;
			cout << "\nMAX_COL is " << MAX_COL;
			if (isSquare(matrix, MAX_ROW))
				cout << "\nYes, it is a square matrix" << endl;
			else
				cout << "\nNo, it is not a square matrix" << endl;
		}

	} while (9 != choice);
	
	return 0;
}

