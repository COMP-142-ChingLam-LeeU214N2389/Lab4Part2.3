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
		switch (choice) {
		case 1:
			cout << "\nWhich row are you looking for?";
			cin >> row;
			cout << "\nSum of row " << row << " is "
				<< sumOfRow(matrix, row, MAX_ROW);
			break;
		case 2:

			cout << "\nWhich column are you looking for?";
			cin >> column;
			cout << "\nSum of column " << column << " is "
				<< sumOfCol(matrix, column, MAX_ROW);
			break;

		case 3:
			cout << "\nNumber between 1 and 100 is now assigned randomly to the elements of the matrix";
			fillWithRandomNum(matrix, MAX_ROW);
			cout << endl;
			break;
		case 4:
			printMatrix(matrix, MAX_ROW);
			break;
		case 5:
			fillMatrix(matrix, MAX_ROW);
			break;
		case 6:
			cout << "\nThe smallest element is "
				<< findMinElement(matrix, MAX_ROW) << endl;
			break;
		case 7:
			cout << "\nThe largest element is "
				<< findMaxElement(matrix, MAX_ROW) << endl;
			break;
		case 8:
			//cout << "\nMAX_ROW is " << MAX_ROW;
			//cout << "\nMAX_COL is " << MAX_COL;
			if (isSquare(matrix, MAX_ROW))
				cout << "\nYes, it is a square matrix" << endl;
			else
				cout << "\nNo, it is not a square matrix" << endl;
			break;
		case 9:
			//no code needed
			break;
		default:
			cerr << "\nWrong choice!";
			break;
		}
	} while (9 != choice);
	
	cout << "\nHave a nice day!!";
	
	return 0;
}

