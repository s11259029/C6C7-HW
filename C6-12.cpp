/*
 Programmer:§õ¦w¥H
 ¢Òate:4/3
 Instructor:Chow-Sing Lin
 Class:Program Design
 make the order of the package
 */
#include <iostream>
#include<fstream>
#include<string>
using namespace std;
//define the class
class BoxOfProduce {
public:
    void setitem(const string newitem[3]);
    void output();
    string* getitem();
private:
    string item[3];
};
int main(void) {
    //open the file
    ifstream in;
    in.open("fruit_vegs.txt");
    if (!in) {
        cout << "Can't open the file" << endl;
        return 1;
    }
    //create the string
    string list[5];
    //read the file
    for (int i = 0; i < 5; i++) {
        getline(in, list[i]);
    }
    //class name
    BoxOfProduce box;
    string select[3];
    //random item
    for (int i = 0; i < 3; i++) {
        int random = rand() % 5;
        select[i] = list[random];
    }
    box.setitem(select);
    //show the initial item in the box
    cout << "The initial item : " << endl;
    box.output();

    int number;
    //let user to change the item
    cout << "Enter the number of what you want to change (1~3): ";
    cin >> number;
    getchar();
    if (number < 1 || number>3) {
        cout << "Enter the wrong number.";
    }
    else {
        cout << "Enter the new item : ";
        string change;
        getline(cin, change);
        box.getitem()[number - 1] = change;
    }
    cout << "--------------------------" << endl;
    //show the final items in the box
    cout << "The final item : " << endl;
    box.output();
    cout << endl;

    return 0;
}
void BoxOfProduce::setitem(const string newitem[3]) {
    for (int i = 0; i < 3; i++) {
        item[i] = newitem[i];
    }
}
string* BoxOfProduce::getitem() {
    return item;
}
void BoxOfProduce::output() {
    for (int i = 0; i < 3; i++) {
        cout << " - " << item[i] << endl;
    }
}
