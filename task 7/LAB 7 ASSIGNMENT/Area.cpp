#include "Area.h"

namespace shapes {
    double Area::calculateSquareArea(const Square& square) {
        return Square::calculateArea(square);
    }

    double Area::calculateTriangleArea(const Triangle& triangle) {
        return Triangle::calculateArea(triangle);
    }

    double Area::calculateCircleArea(const Circle& circle) {
        return Circle::calculateArea(circle);
    }
}
