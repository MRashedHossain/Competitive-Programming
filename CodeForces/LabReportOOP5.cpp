//Inheritance Problems 2. Multilevel Inheritance
#include <iostream>
using namespace std;

class Shape {
  protected:
    double width, height;
  public:
    Shape(double w, double h) : width(w), height(h) {}
    void displayDimensions() const {
        cout << "Width: " << width << ", Height: " << height << endl;
    }
};

class Rectangle : public Shape {
  protected:
    string color;
  public:
    Rectangle(double w, double h, const string &c) : Shape(w, h), color(c) {}
    void displayColor() const {
        cout << "Color: " << color << endl;
    }
};

class ColoredRectangle : public Rectangle {
  private:
    string texture;
  public:
    ColoredRectangle(double w, double h, const string &c, const string &t)
        : Rectangle(w, h, c), texture(t) {}
    void displayTexture() const {
        cout << "Texture: " << texture << endl;
    }
};

int main() {
    ColoredRectangle coloredRectangle(5.0, 10.0, "Red", "Smooth");
    coloredRectangle.displayDimensions();
    coloredRectangle.displayColor();
    coloredRectangle.displayTexture();

    return 0;
}
