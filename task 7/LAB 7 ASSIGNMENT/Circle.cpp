#include "Circle.h"
#include <cmath>

namespace shapes {
    Circle::Circle() : radius(0) {}

    Circle::Circle(double r) : radius(r) {}

    Circle::~Circle() {}

    void Circle::setRadius(double r) {
        radius = r;
    }

    double Circle::getRadius() const {
        return radius;
    }

    double Circle::calculateArea(const Circle& circle) {
        return M_PI * circle.radius * circle.radius;
    }
}
