/*
 * Point.cpp
 *
 *  Created on: Sep 16, 2020
 *      Author: student
 */
#include "Point.h"
#include <cmath>
#include "FloatCompare.h"

Point::Point() {
	x = 0.0;
	y = 0.0;
}

Point::~Point() {

}

double Point::getX() const {
	return x;
}

double Point::getY() const {
	return y;
}

Point::Point(const double x, const double y) {
	this->x = x;
	this->y = y;
}

double Point::distance(const Point &p) const {
	double distance = sqrt(pow((this->x - p.x), 2) + pow((this->y - p.y), 2));
	return distance;
}

std::ostream& operator <<(std::ostream& out, const Point& p) {
	out << "(" << p.x << ", " << p.y << ")";
	return out;
}

bool operator ==(const Point &lhs, const Point &rhs) {
	return (essentiallyEqual(lhs.x, rhs.x) && essentiallyEqual(lhs.y, rhs.y));
}

bool operator<(const Point &lhs, const Point &rhs) {
	return (definitelyLessThan(lhs.x, rhs.x)
			|| (essentiallyEqual(lhs.x, rhs.x)
					&& definitelyLessThan(lhs.y, rhs.y)));
}

Point operator +(const Point &lhs, const Point &rhs) {
	return Point((lhs.x + rhs.x), (lhs.y + rhs.y));
}

Point operator -(const Point &lhs, const Point &rhs) {
	return Point((lhs.x - rhs.x), (lhs.y - rhs.y));
}

//copy constructor
Point::Point(const Point& t) {
	x = t.x;
	y = t.y;
}

//copy assignment operator
//copy assignment
Point& Point::operator =(const Point& rhs) {
	this->x = rhs.x;
	this->y = rhs.y;

	return *this;
}