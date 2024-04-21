/*
 Programmer:§õ¦w¥H
 ¢Òate:4/3
 Instructor:Chow-Sing Lin
 Class:Program Design
 transform the money
 */
#include <iostream>
using namespace std;
//define the class
class Money {
public:
    Money() {
        dollar = 0;
        cent = 0;
    }
    void setdollar(int dl);
    void setcent(int ct);
    int getdollar();
    int getcent();
    double amount();
private:
    int dollar;
    int cent;
};
int main(void) {
    //class name
    Money m1;
    m1.setdollar(10);
    m1.setcent(50);
    //class name
    Money m2;
    m2.setdollar(5);
    m2.setcent(75);
    //output the final
    cout << "Money 1 = " << m1.getdollar() << "." << m1.getcent() << endl;
    cout << "Amount 1 = " << m1.amount() << endl;
    //output the final
    cout << "Money 2 = " << m2.getdollar() << "." << m2.getcent() << endl;
    cout << "Amount 2 = " << m2.amount() << endl;



    return 0;
}
void Money::setdollar(int dl) {
    dollar = dl;
}
void Money::setcent(int ct) {
    cent = ct;
}
int Money::getdollar() {
    return dollar;
}
int Money::getcent() {
    return cent;
}
double Money::amount() {
    return dollar + (cent / 100.0);
}
