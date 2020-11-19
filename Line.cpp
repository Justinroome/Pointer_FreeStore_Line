#include <iostream>
#include <assert.h>
#include "FloatCompare.h"
#include "Point.h"
#include <stdexcept>
#include "Line.h"
#include <array>
using namespace std;

Line::Line() {
	index2 = 0;
	points = NULL;
}

Line::~Line() {
	delete[] points;
}

void Line::clear() {
	delete[] points;
	points = NULL;
	index2 = 0;

}

void Line::push_back(const Point& p) {
	Point * newPoints = new Point[index2 + 1];
	for (unsigned int copyIndex = 0; copyIndex < index2; copyIndex++) {
		//could be wrong
		newPoints[copyIndex] = points[copyIndex];\
	}
	newPoints[index2] = p;
	index2++;
	delete[] points;
	points = newPoints;
}

double Line::length() {
	if (index2 < 2) {
		return 0.0;
	}

	double sum = 0.0;
	for (unsigned int i = 0; i < index2 - 1; i++) {
		sum = points[i].distance(points[i + 1]) + sum;
	}
	double total = sum;
	return total;
}

unsigned int Line::size() const {
	return index2;
}

Point & Line::operator[](unsigned int index) {
	if (index >= index2){
		throw std::out_of_range("Index out of range");
	}
	return points[index];
}
