#include <iostream>
using namespace std;
class Period {
private:
    int hours;
    int minutes;
public:
    
    void setHours() {
        int h;
        cout << "Enter hours :";
        cin >> h;
        hours = h;
    }
    void setMinutes() {
        int m;
        cout << "Enter minutes :";
        cin >> m;
        minutes = m;
    }
    void c_out1() {cout << "Period 1" << endl;}
    void c_out2() {cout << "Period 2" <<  endl;} 

    void display() {cout << hours << " hours " << minutes << " minutes" << endl;}
  
    friend Period add(Period p1, Period p2);
};

Period add(Period p1, Period p2) {
    Period sum;
    sum.hours = p1.hours + p2.hours;
    sum.minutes = p1.minutes + p2.minutes;
 
    sum.hours += sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}
int main() {
    Period p1, p2;
    p1.c_out1();
    p1.setHours();
    p1.setMinutes();
    p2.c_out2();
    p2.setHours();
    p2.setMinutes();
    cout << "Period 1: ";
    p1.display();
    cout << "Period 2: ";
    p2.display();
    Period sum = add(p1, p2);
    cout << "\nSum of Periods:\n ";
    sum.display();
    cout<<endl;
    return 0;
}