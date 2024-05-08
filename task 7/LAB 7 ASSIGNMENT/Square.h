#ifndef SQUARE_H
#define SQUARE_H

namespace shapes {
    class Square {
    private:
        double side;

    public:
        Square();
        Square(double s);
        ~Square();

        void setSide(double s);
        double getSide() const;

        static double calculateArea(const Square& square);
    };
}

#endif // SQUARE_H
