#pragma once

#define _USE_MATH_DEFINES

#include <cmath>

#include "Shapes.h"

class Circle : public Shapes
{
private:
	double radius = 0;

public:
	Circle(int x, int y, double radius);
	Circle(const Point& p, double radius);

	const double getRadius() const;

	double getArea() const override;
	double getPerimeter() const override;
	bool isPointInside(int x, int y) const override;

	Shapes* clone() const override;
};