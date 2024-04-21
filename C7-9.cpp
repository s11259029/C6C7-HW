/*
 Programmer:§õ¦w¥H
 ¢Òate:4/5
 Instructor:Chow-Sing Lin
 Class:Program Design
 transfer zip code and bar code
 */
#include <iostream>
#include<string>
using namespace std;
//define a class
class Zipcode {
public:
    Zipcode(int zip) {
        barcode = encode(zip);
        zipcode = zip;
    }
    Zipcode(const string& code) {
        barcode = code;
        zipcode = decode(code);
    }
    int getzipcode();
    string getbarcode();
private:
    string barcode;
    int zipcode;
    string encode(int zip);
    int decode(const string& barcode);
};
int main(void) {
    //set the number
    Zipcode code1(99504);
    //output
    cout << "Zip code : " << code1.getzipcode() << endl;
    cout << "Bar code : " << code1.getbarcode() << endl;
    cout << endl;
    //set the number
    Zipcode code2("110100101000101011000010011");
    //output
    cout << "Zip code : " << code2.getzipcode() << endl;
    cout << "Bar code : " << code2.getbarcode() << endl;


    return 0;
}
string Zipcode::encode(int zip) {
    //first number is 1
    string barcode = "1";
    //table of value
    int value[5] = { 7,4,2,1,0 };
    //transfer
    int digit;
    for (int i = 0; i < 5; i++) {
        digit = zip / pow(10, 5 - 1 - i);
        digit %= 10;
        switch (digit) {
        case 0:
            barcode += "11000";
            break;
        case 1:
            barcode += "00011";
            break;
        case 2:
            barcode += "00101";
            break;
        case 3:
            barcode += "00110";
            break;
        case 4:
            barcode += "01001";
            break;
        case 5:
            barcode += "01010";
            break;
        case 6:
            barcode += "01100";
            break;
        case 7:
            barcode += "10001";
            break;
        case 8:
            barcode += "10010";
            break;
        case 9:
            barcode += "10100";
            break;
        }

    }
    //the last number is 1
    barcode += "1";

    return barcode;
}
int Zipcode::decode(const string& barcode) {
    int zip = 0;
    //table of value
    int value[5] = { 7,4,2,1,0 };
    //transfer
    for (int i = 1; i < 26; i += 5) {
        int partsum = 0;
        for (int j = 0; j < 5; j++) {
            if (barcode[i + j] == '1') {
                partsum += value[j];
            }
        }
        //if the partial sum  is 11 then define it to be 0
        if (partsum == 11) {
            zip = zip * 10;
            zip += 0;
        }
        else {
            zip = zip * 10 + partsum;
        }
    }
    return zip;
}
int Zipcode::getzipcode() {
    return zipcode;
}
string Zipcode::getbarcode() {
    return barcode;
}


