/** \file Lab2Part2.3.cpp
* \brief Small matrix program
* \details Showing the menu to the users
* \author Ching Lam Lee
* \date 5/8/2022
*/

#include <iostream> 
#include <cstdlib>
#include"Options.h"
using namespace std;

/**
* presents the menu to the user with the valid options
* @return  returns 0
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
			<< "\n9. Sum of all row in once"
			<< "\n10. Sum of all column in once"
			<< "\n11. Exit";

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
			if (isSquare(matrix, MAX_ROW))
				cout << "\nYes, it is a square matrix" << endl;
			else
				cout << "\nNo, it is not a square matrix" << endl;
			break;
		case 9: 
			double* pSum;
			int i;

			pSum = sumOfRows(matrix, MAX_ROW);

			for (i = 0; i < MAX_ROW; i++) {
				cout << "\nSum of row " << i << " is "
					<< *(pSum + i);
			}

			cout << "\nThe array sum is" << ":\n[";

			for (i = 0; i < MAX_ROW; i++) {
				if (i != MAX_ROW - 1)
					cout << *(pSum + i) << ",";
				else
					cout << *(pSum + i) << ']';
			}
			break;
		case 10:
			double* pSum;
			int i;

			pSum = sumOfCols(matrix, MAX_ROW);

			for (i = 0; i < MAX_COL; i++) {
				cout << "\nSum of column " << i << " is "
					<< *(pSum + i);
			}

			cout << "\nThe array sum is" << ":\n[";

			for (i = 0; i < MAX_COL; i++) {
				if (i != MAX_COL - 1)
					cout << *(pSum + i) << ",";
				else
					cout << *(pSum + i) << ']';
			}
			break;
		case 11:
			//no code needed
			break;
		default:
			cerr << "\nWrong choice!";
			break;
		}
	} while (11 != choice);
	
	cout << "\nHave a nice day!!";
	
	return 0;
}

