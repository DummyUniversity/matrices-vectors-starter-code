#include "matrix.h"

#include <iostream>
#include <iomanip>

Matrix::Matrix() {}
Matrix::Matrix(const int noOfRows, const int noOfCols, const bool isRowMajorOrderIndexed) {}
Matrix::Matrix(const Matrix& other) {}
Matrix& Matrix::operator = (const Matrix& other) {}
Matrix::~Matrix() {}
double Matrix::get (const int i) const {}
void Matrix::set (const int i, const double value) {}
double Matrix::get (const int i, const int j) const {}
void Matrix::set (const int i, const int j, const double value) {}
Matrix Matrix::getTranspose(const Matrix& m) const {}
Matrix Matrix::operator + (const Matrix& other) const {}
Matrix Matrix::operator - (const Matrix& other) const {}
Matrix Matrix::operator * (const Matrix& other) const {}
Matrix Matrix::operator * (const double scalar) const {}
double Matrix::getDeterminant() const {}

void Matrix::print() const
{
	for (int i = 0; i < noOfRows; i++)
	{
		for (int j = 0; j < noOfCols; j++)
		{
			std::cout << std::fixed << std::setprecision(3) << get(i, j) << " ";
		}
		std::cout << "\n";
	}

}
