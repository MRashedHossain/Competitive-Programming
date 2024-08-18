#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    // Constructor
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    // Overloading the + operator to add two Complex objects
    Complex operator+(const Complex& other) const {
        Complex temp;
        temp.real = real + other.real;
        temp.imag = imag + other.imag;
        return temp;
    }

    // Overloading the == operator to compare two Complex objects for equality
    bool operator==(const Complex& other) const {
        return (real == other.real) && (imag == other.imag);
    }

    // Function to display the Complex number
    void display() const {
        cout << real << " + " << imag << "i";
    }
};

int main() {
    Complex num1(3.0, 4.0);
    Complex num2(1.0, 2.0);
    Complex result;

    // Using overloaded + operator
    result = num1 + num2;
    cout << "Addition: ";
    result.display();
    cout << endl;

    // Using overloaded == operator
    if (num1 == num2) {
        cout << "num1 and num2 are equal." << endl;
    } else {
        cout << "num1 and num2 are not equal." << endl;
    }

    return 0;
}

