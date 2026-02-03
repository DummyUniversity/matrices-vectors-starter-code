#ifndef MATRIX_20252010_H
#define MATRIX_20252010_H

#include <iostream>

class Matrix
{
	double* array = NULL;
	int arraySize = 0;
	int noOfRows = 0, noOfCols = 0;
	bool isRowMajorOrderIndexed = true;	//True by default; use column major order indexing if set to false in constructor.

public:
	Matrix();
	Matrix(const int noOfRows, const int noOfCols, const bool isRowMajorOrderIndexed = true);
	Matrix(const Matrix& other);
	Matrix& operator = (const Matrix& other);
	~Matrix();
	double get (const int i) const;
	void set (const int i, const double value);
	double get (const int i, const int j) const;
	void set (const int i, const int j, const double value);
	Matrix getTranspose() const;
	Matrix operator + (const Matrix& other) const;
	Matrix operator - (const Matrix& other) const;
	Matrix operator * (const Matrix& other) const;
	Matrix operator * (const double scalar) const;
	double getDeterminant() const;

	void print() const;
	void printMatrixSize() const;
};

#endif

