/*
 Programmer:§õ¦w¥H
 ¢Òate:4/3
 Instructor:Chow-Sing Lin
 Class:Program Design
 make a pizza order
 */
#include <iostream>
using namespace std;
//define a class
class Pizza {
public:
    void outputDescription();
    double computePrice();
    int gettype();
    int getsize();
    int gettopping();
    int gettoppintnumber();

private:
    int type;
    int size;
    int topping;
    int toppingnumber;
};
int main(void) {
    //class name
    Pizza customer;
    //output the all description of the pizza
    customer.outputDescription();
    double price;
    //output the total price
    price = customer.computePrice();
    cout << "-------------------------------------------" << endl;
    cout << "Your pizza is " << price << " dollars.\n\n";


    return 0;
}
void Pizza::outputDescription() {
    //output the description of the pizza
    cout << "Type: " << endl;
    cout << "1.Deep dish  2.Hand tossed   3.Pan" << endl;
    cout << "Size: " << endl;
    cout << "1.Small     2.Medium    3.Large" << endl;
    cout << "Topping: " << endl;
    cout << "1.Pepperoni    2.Cheese" << endl;
    cout << "-------------------------------------------" << endl;

}
double Pizza::computePrice() {
    //let customer to input the pizza type and size
    int money = 0;
    cout << "Choose the type of the pizza : ";
    cin >> type;
    cout << "Choose the size of the pizza : ";
    cin >> size;
    //the rule of the price
    if (size == 1) {
        money = 10;
    }
    else if (size == 2) {
        money = 14;
    }
    else if (size == 3) {
        money = 17;
    }
    cout << "Choose the topping : ";
    cin >> topping;
    cout << "How many topping you want : ";
    cin >> toppingnumber;

    if (type > 3 || type < 1 || size>3 || size < 1 || topping>2 || topping < 1 || toppingnumber < 0) {
        cout << "wrong input" << endl;
        exit(1);
    }
    return money += (2 * toppingnumber);
}
int Pizza::gettype() {
    return type;
}
int Pizza::getsize() {
    return size;
}
int Pizza::gettopping() {
    return topping;
}
int Pizza::gettoppintnumber() {
    return toppingnumber;
}
