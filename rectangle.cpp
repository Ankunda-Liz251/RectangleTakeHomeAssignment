#include <iostream>
using namespace std;

class Rectangle {
private:
    double width;
    double length;

public:
    // Setters
    void setWidth(double w) {
        width = w;
    }
    void setLength(double l) {
        length = l;
    }

    // Getters
    double getWidth() {
        return width;
    }
    double getLength() {
        return length;
    }
    double getArea() {
        return width * length;
    }
    double getPerimeter()  {
        return 2 * (width + length);
    }
};

int main() {
    Rectangle R;

    // Setting dimensions
    R.setWidth(3);
    R.setLength(6);

    cout << "The width is: " << R.getWidth() << endl;
    cout << "The length is: " << R.getLength() << endl;
    cout << "The area is: " << R.getArea() << endl;
    cout << "The perimeter is: " << R.getPerimeter() << endl;

    return 0;
}