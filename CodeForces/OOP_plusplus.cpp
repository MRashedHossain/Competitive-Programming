#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Constructor
    Time(int h = 0, int m = 0, int s = 0) : hours(h), minutes(m), seconds(s) {}

    // Overloading the ++ operator (prefix)
    Time operator++() {
        seconds++;
        if (seconds >= 60) {
            seconds = 0;
            minutes++;
            if (minutes >= 60) {
                minutes = 0;
                hours++;
                if (hours >= 24) {
                    hours = 0;
                }
            }
        }
        return *this;
    }

    // Function to display the time
    void display() {
        cout << "Time: " << hours << "h " << minutes << "m " << seconds << "s" << endl;
    }
};

int main() {
    Time t1(10, 30, 45);

    cout << "Initial Time:" << endl;
    t1.display();

    // Using pre-increment (++t1)
    ++t1;
    cout << "After pre-increment:" << endl;
    t1.display();

    // Incrementing multiple times
    ++t1;
    ++t1;
    cout << "After two more pre-increments:" << endl;
    t1.display();

    return 0;
}
