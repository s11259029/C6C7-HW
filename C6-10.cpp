/*
 Programmer:§õ¦w¥H
 ¢Òate:4/3
 Instructor:Chow-Sing Lin
 Class:Program Design
 transform the weight and pounds amd onces
 */
#include <iostream>
using namespace std;
//define the class
class Weight {
public:
    Weight() {
        pound = 0;
    }
    void setWeightPounds(double p);
    void setWeightKilograms(double k);
    void setWeightOunces(double o);
    double getWeightPounds();
    double getWeightKilograms();
    double getWeightOnces();
private:
    double pound;
};
int main(void) {
    //class name
    Weight weight;
    weight.setWeightPounds(10);
    weight.setWeightKilograms(5);
    weight.setWeightOunces(80);
    //output the answer of the transform
    cout << "Weight in pounds : " << weight.getWeightPounds() << endl;
    cout << "Weight in kilograms : " << weight.getWeightKilograms() << endl;
    cout << "Weight in onces : " << weight.getWeightOnces() << endl;

    return 0;
}
void Weight::setWeightPounds(double p) {
    pound = p;
}
void Weight::setWeightKilograms(double k) {
    //calculate
    pound = k * 2.21;
}
void Weight::setWeightOunces(double o) {
    //calculate
    pound = o / 16;
}
double Weight::getWeightPounds() {
    return pound;
}
double Weight::getWeightKilograms() {
    //calculate
    return pound / 2.21;
}
double Weight::getWeightOnces() {
    //calculate
    return pound * 16;
}

