/** \file Lab2Part2.2.cpp
* \brief Small matris program
* \author Ching Lam Lee
* \date 5\8\2022
*/

#include <iostream> 
#include <cstdlib>
using namespace std;

//global constants 
const int MAX_COL = 2;

//function prototype 
double sumOfRow(const double mat[][MAX_COL], const int row, const int maxRow);
double sumOfCol(const double mat[][MAX_COL], const int column, const int maxRow);
void fillWithRandomNum(double mat[][MAX_COL], const int maxRow);
void printMatrix(const double mat[][MAX_COL], const int maxRow);
void fillMatrix(double mat[][MAX_COL], const int maxRow);
double findMaxElement(const double mat[][MAX_COL], const int maxRow);
double findMinElement(const double mat[][MAX_COL], const int maxRow);
bool isSquare(const double mat[][MAX_COL], const int maxRow);

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
}

/**
* sum of the columns
* @param mat The matix
* @param column The column chosen by the user
* @param maxRow The number of rows is in the matrix
* @return Retuns sum of the column cosen by the user
*/
double sumOfCol(const double mat[][MAX_COL], const int column, const int maxRow) {
	double total = 0;
	for (int i = 1; i < maxRow; i++) {
		total += mat[i][column];
	}
	return total;
}

/**
* sum of the rows
* @param mat The matix
* @param row The row chosen by the user
* @param maxRow The number of rows in the matrix
* @return Retuns sum of the row chosen by the user
*/
double sumOfRow(const double mat[][MAX_COL], const int row, const int maxRow) {
	double total = 0;
	for (int i = 1; i < maxRow; i++) {
		total += mat[i][row];
	}
	return total;
}

/**
* Fill the elemetns of the matrix randomly between 1 and 100
* @param mat The matrix to be filled
* @param maxRow Number of rows in the matrix
*/
void fillWithRandomNum(double mat[][MAX_COL], const int maxRow)
{
	for (int i = 0; i < maxRow; i++) {
		for (int j = 0; j < MAX_COL; j++) {
			mat[i][j] = rand() % 100;
		}
	}
}

/**
* Print the matrix
* @param mat The matrix to be printed
* @param maxRow Number of rows in the matrix
*/
void printMatrix(const double mat[][MAX_COL], const int maxRow) {
	for (int i = 0; i < maxRow; i++) {
		cout << "\n[";
		for (int j = 0; j < MAX_COL; j++) {
			if (j == MAX_COL - 1)
				cout << mat[i][j];
			else
				cout << mat[i][j] << ",";
		}
		cout << "]" << endl;
	}
}

/**
* Let the user fill in the matrix
* @param mat Matix to be filled
* @param maxRow The number of rows in the matrix
*/
void fillMatrix(double mat[][MAX_COL], const int maxRow)
{
	double blank;

	for (int i = 0; i < maxRow; i++) {
		for (int j = 0; j < MAX_COL; j++) {
			cout << "\n[" << i << "," << j << "]: ";
			cin >> blank;
			mat[i][j] = blank;
		}
	}
}

/**
* Find the largest element in the matrix
* @param mat The matix checking 
* @param maxRow The number of rows in the matrix
* @return Returns the largest element in the matrix
*/
double findMaxElement(const double mat[][MAX_COL], const int maxRow) {
	double max = mat[0][0];

	for (int i = 0; i < maxRow; i++) {
		for (int j = 0; j < MAX_COL; j++) {
			if (max < mat[i][j])
				max = mat[i][j];
		}
	}
	return max;
}

/**
* Find the smallest element in the matrix
* @param mat The matix checking
* @param maxRow The number of rows in the matrix
* @return Returns the smallest element in the matrix
*/
double findMinElement(const double mat[][MAX_COL], const int maxRow)
{
	double min = mat[0][0];

	for (int i = 0; i < maxRow; i++) {
		for (int j = 0; j < MAX_COL; j++) {
			if (min > mat[i][j])
				min = mat[i][j];
		}
	}
	return min;
}
/**
* Check if the matrix is a square matrix
* @param mat The matix checking
* @param maxRow The number of rows in the matrix
* @return Retuns true if the matrix is a square matrix
*/
bool isSquare(const double mat[][MAX_COL], const int maxRow) {
	bool postiive = false;

	if (MAX_COL == maxRow)
		postiive = true;

	return postiive;
}