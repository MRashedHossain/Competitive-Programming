/**
Yes,
you can write more than one function with the same name in C++,
as long as they have different parameter lists.
This is known as function overloading.
Function overloading allows you to define multiple functions with the same name but different parameters,
enabling you to perform similar operations on different types of data.
*/
#include<iostream>
using namespace std;

class Overriding {
public:
    void display(string Name) {
        cout << "Name: " << Name << endl;
    }
    void display(double grade) {
        cout << "Grade: " << grade << endl;
    }
    void display(int due) {
        cout << "Due: " << due << endl;
    }
    void display() {
        cout << "Madam please 10/10 diyen!" << endl;
    }
};

int main() {
    Overriding o;
    o.display("Rashed Hossain");
    o.display(1.56);
    o.display(20080);
    o.display();
    return 0;
}

