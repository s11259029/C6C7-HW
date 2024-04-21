
/*
 Programmer:§õ¦w¥H
 ¢Òate:4/4
 Instructor:Chow-Sing Lin
 Class:Program Design
 calculate the hotdog stands sold number
 */
#include <iostream>
using namespace std;
//define class
class HotDogStand {
public:
    HotDogStand(int standID, int initial) :id(standID), hotdogsold(initial) {};
    void JustSold();
    int getJustsold();
    static int gettotalsold();
private:
    int id;
    int hotdogsold;
    static int totalsold;
};
int HotDogStand::totalsold = 0;
int main(void) {
    //class name
    HotDogStand stand1(1, 0);
    HotDogStand stand2(2, 0);
    HotDogStand stand3(3, 0);
    //create the sold number
    stand1.JustSold();
    stand1.JustSold();
    stand2.JustSold();
    stand2.JustSold();
    stand2.JustSold();
    stand3.JustSold();
    //output the number
    cout << "Hot Dogs Sold at Stand 1: " << stand1.getJustsold() << endl;
    cout << "Hot Dogs Sold at Stand 2: " << stand2.getJustsold() << endl;
    cout << "Hot Dogs Sold at Stand 3: " << stand3.getJustsold() << endl;
    cout << endl;
    //output the total number
    cout << "Total Hot Dogs Sold by All Stands: " << HotDogStand::gettotalsold() << endl;

    return 0;
}
void HotDogStand::JustSold() {
    //calculate the sold number
    hotdogsold++;
    totalsold++;
}
int HotDogStand::getJustsold() {
    return hotdogsold;
}
int HotDogStand::gettotalsold() {
    return totalsold;
}

