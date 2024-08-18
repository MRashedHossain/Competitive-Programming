#include<iostream>
using namespace std;
class student {
  private:
    int RollNumber;
    string StudentName;
    double GPA;
    public:
    student(int R,string S,double G) {
    RollNumber = R;
    StudentName = S;
    GPA = G;
        cout<<"Initial Values : "<<endl;
        cout<<"Roll Number : "<<RollNumber<<endl;
        cout<<"Student Name : "<<StudentName<<endl;
        cout<<"Student GPA : "<<GPA<<endl;
    }
    void input() {
        cout<<"Enter Student Roll Number : ";
        cin>>RollNumber;
        cout<<"Enter Student Name : ";
        cin>>StudentName;
        cout<<"Enter Student GPA : ";
        cin>>GPA;
    }
    void display() {
        cout<<"Roll Number : "<<RollNumber<<endl;
        cout<<"Student Name : "<<StudentName<<endl;
        cout<<"Student GPA : "<<GPA<<endl;
    }
};
int main() {
    student rashed{101,"John Doe",3.50};
    rashed.input();
    rashed.display();
    return 0;
}
