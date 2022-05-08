/** file Options.h
* \brief Library to the menu
* \details function prototypes of the function 
* \author Ching Lam Lee
* \date 5/8/2022
*/
#ifndef OPTIONS_H
#define OPTIONS_H

//global constants 
const int MAX_COL = 2;

//function prototypes
double sumOfRow(const double mat[][MAX_COL], const int row, const int maxRow);
double sumOfCol(const double mat[][MAX_COL], const int column, const int maxRow);
void fillWithRandomNum(double mat[][MAX_COL], const int maxRow);
void printMatrix(const double mat[][MAX_COL], const int maxRow);
void fillMatrix(double mat[][MAX_COL], const int maxRow);
double findMaxElement(const double mat[][MAX_COL], const int maxRow);
double findMinElement(const double mat[][MAX_COL], const int maxRow);
bool isSquare(const double mat[][MAX_COL], const int maxRow);

#endif

