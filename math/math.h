#pragma once

#ifndef MATH_
#define MATH_


class MATH {
private:
	double x;
	double y;
public:
	void setXY(double xx, double yy) {
		x = xx;
		y = yy;
	}

	double xplusy() {
		double result = (x*x) + (y*y) + (2 * x*y);
		return result;

	}

	double xminusy() {
		double result = (x*x) + (y*y) - (2 * x*y);
		return result;

	}

};

#endif // !MATH_