/** \file Options.cpp
* \brief Library to the menu of a small matrix program
* \details Incuding code of the functions runing in the menu
* \author Ching Lam Lee
* \date 5/8/2022
*/

#include <iostream> 
#include <cstdlib>
#include<cassert>
#include"Matrix.h"
using namespace std;

/**
* Function <code>sumOfCol</code> returns the sum of the selected columns
* 
* @param mat		the matirx stored in the program
* @param column		the column chosen by the user
* @param maxRow		number of rows in the matrix
* @return			returns the sum of column chosen by the user
*/
double sumOfCol(const double mat[][MAX_COL], const int column, const int maxRow) {
	assert(column >= 0 && column < MAX_COL);
	
	double total = 0;
	int i;

	for (i = 0; i < maxRow; i++) {
		total += mat[i][column];
	}

	assert(i==maxRow);

	return total;
}

/**
* Function <code>sumOfRow</code> returns the sum of the selected rows
* 
* @param mat		the matrix stored in the program
* @param row		the row chosen by the user
* @param maxRow		the number of rows in the matrix
* @return			returns sum of the row chosen by the user
*/
double sumOfRow(const double mat[][MAX_COL], const int row, const int maxRow) {
	assert(row >= 0 && row < maxRow);

	double total = 0;
	int i;

	for (i = 0; i < MAX_COL; i++) {
		total += mat[row][i];
	}

	assert(i == MAX_COL);

	return total;
}

/**
* Function <code>fillWithRandomNUm</code> fills the elements of the matrix randomly between 1 and 100
* 
* @param mat	the matrix to be filled
* @param maxRow	number of rows in the matrix
*/
void fillWithRandomNum(double mat[][MAX_COL], const int maxRow){
	assert(maxRow > 0);
	
	for (int i = 0; i < maxRow; i++) {
		for (int j = 0; j < MAX_COL; j++) {
			mat[i][j] = rand() % 100;
		}
	}
}

/**
* Function <code>printMatirx</code> prints the matrix
* 
* @param mat	the matrix to be printed
* @param maxRow number of rows in the matrix
*/
void printMatrix(const double mat[][MAX_COL], const int maxRow) {
	assert(maxRow > 0);
	
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
* Function <code>fillMatrix</code> Let the user fill in the matrix
* 
* @param mat		matix to be filled
* @param maxRow		the number of rows in the matrix
*/
void fillMatrix(double mat[][MAX_COL], const int maxRow){
	assert(maxRow > 0);

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
* Function <code>findMaxElement</code> finds the largest element in the matrix. Returns the largest element in the matrix
* 
* @param mat		the matix to be checked
* @param maxRow		the number of rows in the matrix
* @return			returns the largest element in the matrix
*/
double findMaxElement(const double mat[][MAX_COL], const int maxRow) {
	assert(maxRow > 0);

	double max = mat[0][0];
	int i, j;

	for ( i = 0; i < maxRow; i++) {
		for ( j = 0; j < MAX_COL; j++) {
			if (max < mat[i][j])
				max = mat[i][j];
		}
	}
	
	assert(j == MAX_COL);
	assert(i == maxRow);

	return max;
}

/**
* Function <code>findMinElement</code> finds the smallest element in the matrix. Returns the smallest element in the matrix
* 
* @param mat		the matrix to be checked
* @param maxRow		the number of rows in the matrix
* @return			returns the smallest element in the matrix
*/
double findMinElement(const double mat[][MAX_COL], const int maxRow){
	assert(maxRow > 0);
	
	double min = mat[0][0];
	int i, j;

	for (i = 0; i < maxRow; i++) {
		for (j = 0; j < MAX_COL; j++) {
			if (min > mat[i][j])
				min = mat[i][j];
		}
	}

	assert(j == MAX_COL);
	assert(i == maxRow);

	return min;
}
/**
* Function <code>isSquare</code> checks if the matrix is a square matrix
* 
* @param mat		the matix to be checked
* @param maxRow		the number of rows in the matrix
* @return			returns <code>true<\code> if the matrix is a squared matrix, <code>false<\code> false otherwise
*/
bool isSquare(const double mat[][MAX_COL], const int maxRow) {
	assert(maxRow > 0);
	
	bool postiive = false;

	if (MAX_COL == maxRow)
		postiive = true;

	return postiive;
}