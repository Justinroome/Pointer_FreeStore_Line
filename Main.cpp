#include <ostream>
#include <assert.h>
#include "FloatCompare.h"
#include "Point.h"
#include <stdexcept>
#include "Line.h"
using namespace std;

int main() {
	Point pointA(1.0, 0.0);
	Point pointB(2.0, 0.0);
	Point pointC(2.0, 2.0);
	assert(pointA.getX() == 1.0);
	assert(pointA.getY() == 0.0);
	assert(pointB.getX() == 2.0);
	assert(pointB.getY() == 0.0);
	assert(pointC.getX() == 2.0);
	assert(pointC.getY() == 2.0);

	Line myLine;
	try {
		Point result = myLine[myLine.size()];
	} catch (const std::out_of_range& oor) {
		std::cerr << "Out of Range error: " << oor.what() << '\n';
	}

	//Testing member functions
	myLine.push_back(pointB);
	std::cout << myLine.size() << endl;
	assert(myLine[0] == pointB);

	assert(myLine.size() == 1);
	myLine.clear();
	assert(myLine.size() == 0);

	myLine.push_back(pointA);
	myLine.push_back(pointB);
	myLine.push_back(pointC);
	myLine.length();

	assert(myLine.length() == 3);
	std::cout << myLine.length() << endl;
}
