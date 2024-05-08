#include <iostream>

using namespace std;

// Class Declaration and Implementation
class Rectangle {
private:
    float length;
    float width;

public:
    // Default constructor
    Rectangle() : length(0), width(0) {}

    // Overloaded constructor
    Rectangle(float l, float w) : length(l), width(w) {}

    // Destructor
    ~Rectangle() {}

    void setLength(float l) {
        length = l;
    }

    void setWidth(float w) {
        width = w;
    }

    float getLength() const {
        return length;
    }

    float getWidth() const {
        return width;
    }

    float area() const {
        return length * width;
    }
};

// Main Function
int main() {
    // First rectangle instance
    Rectangle rect;
    float length, width;

    cout << "Enter the length of the first rectangle: ";
    cin >> length;
    rect.setLength(length);

    cout << "Enter the width of the first rectangle: ";
    cin >> width;
    rect.setWidth(width);

    cout << "Area of the first rectangle: " << rect.area() << endl;

    // Second rectangle instance using overloaded constructor
    cout << "Enter the length of the second rectangle: ";
    cin >> length;
    cout << "Enter the width of the second rectangle: ";
    cin >> width;
    Rectangle rect2(length, width);

    cout << "Area of the second rectangle: " << rect2.area() << endl;

    return 0;
}
