/*
 * Line.h
 *
 */

#ifndef LINE_H_
#define LINE_H_

#include "Point.h"

class Line {
public:
	/**
	 * Constructor and destructor
	 */
	Line();
	virtual ~Line();

	/**
	 * Add a point to the end of our line.
	 */
	void push_back(const Point& p);

	/**
	 * Clear the list of points
	 */
	void clear();

	/**
	 * Return the length of the line. The length is calculated as
	 * the sum of the distance between all points in the line.
	 */
	double length();


    /**
     * return the number of Points in our line
     */
    unsigned int size() const;


    /**
     * [] operator override
     */
    Point & operator[](unsigned int index);

private:
	unsigned int index2;
	Point *points;
};

#endif /* LINE_H_ */

