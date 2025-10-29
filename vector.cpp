#include "vector.h"
#include "matrix.h"

Vector::Vector(const double x, const double y, const double z) {}
Vector::Vector(const Vector& other) {}
Vector& Vector::operator = (const Vector& other) {}
Vector Vector::operator * (const double scalar) const {}
double Vector::getDotProduct(const Vector& other, const double theta_radians) const {}
Vector Vector::operator * (const Vector other) const {}	//Cross product

double Vector::getX() const {}
double Vector::getY() const {}
double Vector::getZ() const {}
void Vector::setX(const double x) {}
void Vector::setY(const double y) {}
void Vector::setZ(const double z) {}

double Vector::getMagnitude() const {}

void Vector::print() const {}

Vector::~Vector() {}


