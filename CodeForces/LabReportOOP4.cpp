//Inheritance Problems 1.Hierarchical Inheritance
#include <iostream>
#include <cmath>
using namespace std;

class Shape {
  protected:
    string type;
    double area;
  public:
    Shape(const string &t) : type(t), area(0) {}
    virtual void calculateArea() = 0;
    void display() const {
        cout << "Type: " << type << ", Area: " << area << endl;
    }
};

class Circle : public Shape {
  private:
    double radius;
  public:
    Circle(double r) : Shape("Circle"), radius(r) {
        calculateArea();
    }
    void calculateArea() override {
        area = M_PI * radius * radius;
    }
};

class Square : public Shape {
  private:
    double side;
  public:
    Square(double s) : Shape("Square"), side(s) {
        calculateArea();
    }
    void calculateArea() override {
        area = side * side;
    }
};

int main() {
    Circle circle(5);
    Square square(4);
    circle.display();
    square.display();

    return 0;
}

