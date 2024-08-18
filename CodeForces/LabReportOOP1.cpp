#include<iostream>
using namespace std;
class Circle {
  private:
    double Radius,Area;
  public:
    Circle(double r) {
        Radius = r;
        Area = 3.1416*Radius*Radius;
        cout<<"Initial Values : "<<endl;
        cout<<"Radius : "<<Radius<<endl;
        cout<<"Area : "<<Area<<endl;
    }
    void input() {
        cout<<"Enter Radius : ";
        cin>>Radius;
        Area = 3.1416*Radius*Radius;
    }
    void display() {
        cout<<"Radius : "<<Radius<<endl;
        cout<<"Area : "<<Area<<endl;
    }
};
int main() {
    Circle c(1.0);
    c.input();
    c.display();
    return 0;
}
