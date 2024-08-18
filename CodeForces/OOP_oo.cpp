#include <iostream>
using namespace std;

class Vector {
private:
    double x;
    double y;

public:
    // Constructor
    Vector(double x_val = 0.0, double y_val = 0.0) : x(x_val), y(y_val) {}

    // Overloading the + operator for vector addition
    Vector operator+(const Vector& other) const {
        return Vector(x + other.x, y + other.y);
    }

    // Overloading the * operator for scalar multiplication
    Vector operator*(double scalar) const {
        return Vector(x * scalar, y * scalar);
    }

    // Function to display the vector
    void display() const {
        cout << "(" << x << ", " << y << ")";
    }
};

int main() {
    Vector v1(3.0, 4.0);
    Vector v2(1.0, 2.0);
    Vector result;

    // Using overloaded + operator for vector addition
    result = v1 + v2;
    cout << "Vector Addition: ";
    result.display();
    cout << endl;

    // Using overloaded * operator for scalar multiplication
    double scalar = 2.5;
    result = v1 * scalar;
    cout << "Scalar Multiplication: ";
    result.display();
    cout << endl;

    return 0;
}

