#include<bits/stdc++.h>
using namespace std;

class Vector {
  private:
    double x;
    double y;
    double z;
  public:
    Vector(double a = 0.0,double b = 0.0,double c = 0.0) {
        x = a;
        y = b;
        z = c;
    }
    Vector operator+(const Vector& other)const {
        return Vector(x+other.x,y+other.y,z+other.z);
    }
    Vector operator*(double scalar){
        return Vector(x*scalar,y*scalar,z*scalar);
    }
    void Display(){
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
};
int main(){
    Vector fst(1.0,2.0,3.0);
    Vector snd(2.0,3.0,4.0);
    Vector res;
    res = fst + snd;
    res.Display();
    res = res * 2;
    res.Display();
    return 0;
}
