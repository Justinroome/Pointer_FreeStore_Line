#ifndef POINT_H_
#define POINT_H_
#include <iostream>
class Point {
public:
	/** * Constructor and destructor */
	Point();
	Point(const double x, const double y);
	virtual ~Point();

	/** * Get the x value */

	double getX() const;

	/** * Get the y value */

	double getY() const;

	/** * Return the distance between Points */

	double distance(const Point &p) const;

	/** * Output the Point as (x, y) to an output stream */

	friend std::ostream& operator <<(std::ostream& out, const Point& p);

	/** * Declare comparison relationships */

	friend bool operator ==(const Point &lhs, const Point &rhs);

	friend bool operator <(const Point &lhs, const Point &rhs);

	/** * Declare math operators */

	friend Point operator +(const Point &lhs, const Point &rhs);

	friend Point operator -(const Point &lhs, const Point &rhs);

	//copy constructor
	Point(const Point& t);

	//copy assignment
	Point& operator =(const Point& rhs);

private:
	double x;
	double y;
};
#endif /* POINT_H_ */