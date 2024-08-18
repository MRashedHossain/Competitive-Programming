#include<iostream>
using namespace std;
class circle {
  private:
    double radius,area;
    circle(double r) {
        radius = r;
        area = 3.14*radius*radius;
    }
  public:
    void Input() {
        cout<<"Enter Radius : ";
        cin>>radius;
        area = 3.14*radius*radius;
    }
    void Display() {
        cout<<"The Radius of the circle is : "<<radius<<endl;
        cout<<"The area of the circle is : "<<area<<endl;
    }
};
int main() {
    circle obj(1.0);
    obj.Input();
    obj.Display();
    return 0;
}
