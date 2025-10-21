#ifndef VECTOR_20252010_H
#define VECTOR_20252010_H

#include "matrix.h"
#include <cmath>

class Vector
{
	Matrix m;	//Should always be a 3D vector: Matrix m(3, 1);

public:

	Vector(const double x = 0, const double y = 0, const double z = 0);

	Vector(const Vector& other);
	Vector& operator = (const Vector& other);
	Vector operator * (const double scalar) const;
	Vector getDotProduct(const Vector& other, const double theta) const;	//Dot product
	Vector operator * (const Vector other) const;	//Cross product
	
	double getX() const;
	double getY() const;
	double getZ() const;
	void setX(const double x);
	void setY(const double y);
	void setZ(const double z);

	double getMagnitude() const;

	void print() const;

	~Vector();
};


#endif
