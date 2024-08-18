#include<iostream>
using namespace std;

class Bank {
  private:
    int SWIFT_code;
    string BankName,Location;
  public:
    Bank(string Name,string Loc) {
        BankName = Name;
        Location = Loc;
    }
    void Display() {
        cout<<"Bank Name : "<<BankName<<endl;
        cout<<"Location : "<<Location<<endl;
    }
};
class Customer : public Bank {
  private:
    string Customer_ID;
    double Amount;
  public:
    Customer(string ID,double money) {
        Customer_ID = ID;
        Amount = money;
    }
    void Display2() {
        cout<<"Customer ID : "<<Customer_ID<<endl;
        cout<<"Amount : "<<Amount<<endl;
    }

};
int main() {
    Bank b("Shonali Bank","Dhaka");
    Customer c("0282310005101020",20080.53);
    b.Display();
    c.Display2();
    return 0;
}
