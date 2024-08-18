#include <iostream>

// Base class
class Shape {
public:
    // Virtual function to be overridden by derived classes
    virtual void draw() {
        std::cout << "Drawing shape" << std::endl;
    }
    // Virtual destructor
    virtual ~Shape() {}
};

// Derived class Circle
class Circle : public Shape {
public:
    // Overriding the draw() function
    void draw() override {
        std::cout << "Drawing circle" << std::endl;
    }
};

// Derived class Square
class Square : public Shape {
public:
    // Overriding the draw() function
    void draw() override {
        std::cout << "Drawing square" << std::endl;
    }
};

// Derived class Triangle
class Triangle : public Shape {
public:
    // Overriding the draw() function
    void draw() override {
        std::cout << "Drawing triangle" << std::endl;
    }
};

int main() {
    // Creating objects of derived classes
    Shape* shape1 = new Circle();
    Shape* shape2 = new Square();
    Shape* shape3 = new Triangle();
    Shape* shape4 = new Shape();

    // Demonstrating method overriding
    shape4->draw();  // Output: Drawing Shape
    shape1->draw();  // Output: Drawing circle
    shape2->draw();  // Output: Drawing square
    shape3->draw();  // Output: Drawing triangle

    // Cleaning up memory
    delete shape1;
    delete shape2;
    delete shape3;

    return 0;
}
