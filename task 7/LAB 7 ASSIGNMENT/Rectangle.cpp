#include <iostream>

using namespace std;

7
class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle() : length(0), width(0) {}  // Default constructor
    ~Rectangle() {}                      // Destructor

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
    Rectangle rect;
    float length, width;

    cout << "Enter the length of the rectangle: ";
    cin >> length;
    rect.setLength(length);

    cout << "Enter the width of the rectangle: ";
    cin >> width;
    rect.setWidth(width);

    cout << "Area of the rectangle: " << rect.area() << endl;

    return 0;
}
