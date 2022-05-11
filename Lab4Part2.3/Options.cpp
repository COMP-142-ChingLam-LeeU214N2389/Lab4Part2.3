/** \file Options.cpp
* \brief Library to the menu of a small matrix program
* \details Function including in the options
* \author Ching Lam Lee
* \date 5/8/2022
*/

#include <iostream> 
#include <cstdlib>
#include<cassert>
#include"Options.h"
using namespace std;

/**
* Sum of the selected columns
* @param mat The matirx stored in the program
* @param column The column chosen by the user
* @param maxRow The number of rows is in the matrix
* @return Retuns sum of the column cosen by the user
*/
double sumOfCol(const double mat[][MAX_COL], const int column, const int maxRow) {
	assert(column >= 0 && column < MAX_COL);
	
	double total = 0;

	for (int i = 0; i < maxRow; i++) {
		total += mat[i][column];
	}

	return total;
}

/**
* Sum of the selected rows
* @param mat The matrix stored in the program
* @param row The row chosen by the user
* @param maxRow The number of rows in the matrix
* @return Retuns sum of the row chosen by the user
*/
/*Returns an array of MAX_ROW where each element is the sum of that specific row. 
The array you declares are dynamically allocated (using the keyword new), hence 
you must remember to reclaim that memory in the calling function (using the 
keyword delete).*/
double* sumOfRows(const double mat[][MAX_COL], const int maxRow){

	double* total=new double[maxRow];
	
	int i;
	while(i<maxRow){
		total[i] = mat[i][0];
	//for (int i = 0; i < maxRow; i++) {
		//total[i]=mat[i][0];

		//for (int j = 0; j < maxRow; j++) {
			//if (j == 0)
				//*total = mat[i][j];
			//else
				//*total += mat[i][j];
		//}
	}

	return total;
}

/**
* Fill the elemetns of the matrix randomly between 1 and 100
* @param mat The matrix to be filled
* @param maxRow Number of rows in the matrix
*/
void fillWithRandomNum(double mat[][MAX_COL], const int maxRow){
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
void fillMatrix(double mat[][MAX_COL], const int maxRow){
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
* @param mat The matix to be checked
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
* @param mat The matrix to be checked
* @param maxRow The number of rows in the matrix
* @return Returns the smallest element in the matrix
*/
double findMinElement(const double mat[][MAX_COL], const int maxRow){
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