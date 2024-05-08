#include "Square.h"

namespace shapes {
    Square::Square() : side(0) {}

    Square::Square(double s) : side(s) {}

    Square::~Square() {}

    void Square::setSide(double s) {
        side = s;
    }

    double Square::getSide() const {
        return side;
    }

    double Square::calculateArea(const Square& square) {
        return square.side * square.side;
    }
}
