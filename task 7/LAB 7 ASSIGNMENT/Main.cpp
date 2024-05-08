#include <iostream>
#include "shapes/Square.h"
#include "shapes/Triangle.h"
#include "shapes/Circle.h"
#include "shapes/Area.h"

using namespace std;
using namespace shapes;

int main() {
    int choice;
    double side, base, height, radius;

    while (true) {
        cout << "Choose an option:\n";
        cout << "1. Calculate the area of a square\n";
        cout << "2. Calculate the area of a triangle\n";
        cout << "3. Calculate the area of a circle\n";
        cout << "4. Quit\n";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the side length of the square: ";
                cin >> side;
                Square square(side);
                cout << "Area of the square: " << Area::calculateSquareArea(square) << endl;
                break;
            case 2:
                cout << "Enter the base and height of the triangle: ";
                cin >> base >> height;
                Triangle triangle(base, height);
                cout << "Area of the triangle: " << Area::calculateTriangleArea(triangle) << endl;
                break;
            case 3:
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                Circle circle(radius);
                cout << "Area of the circle: " << Area::calculateCircleArea(circle) << endl;
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid option. Please try again." << endl;
        }
    }
}
