#include<iostream>
using namespace std;
class MathOperation {
  public:
    void calculate(int x,int y) {
        cout<<"Product of two : "<<x*y<<endl;
    }
    void calculate(int x,int y,int z) {
        cout<<"Sum of three : "<<x+y+z<<endl;
    }
    void calculate(double x,double y) {
        cout<<"Division of two : "<<x/y<<endl;
    }
};
class Book {
  public:
    void displayBookInfo(string title) {
        cout<<"Book Name with Title : "<<title<<endl;
    }
    void displayBookInfo(string title,string authName) {
        cout<<"Book Name with Title & Author's Name : "<<title<<" , "<<authName<<endl;
    }
    void displayBookInfo(string title,string authName,string pubYear) {
        cout<<"Book Name with Title & Author's Name & Publication year : "<<title<<" , "<<authName<<" , "<<pubYear<<endl;
    }
};
int main() {
    MathOperation m;
    m.calculate(10,20);
    m.calculate(10,20,30);
    m.calculate(4.5,1.5);
    Book b;
    b.displayBookInfo("Standings");
    b.displayBookInfo("Top","Tourist");
    b.displayBookInfo("Leader","BenQ","2018");
    return 0;
}

