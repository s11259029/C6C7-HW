/*
 Programmer:§õ¦w¥H
 ¢Òate:4/4
 Instructor:Chow-Sing Lin
 Class:Program Design
 make the hisogram of the grade
 */
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    vector<int>grades;
    int grade;
    int max = 0;
    //input the grade
    cout << "Enter the grade (enter -1 to finish) : " << endl;
    while (true) {
        cin >> grade;
        if (grade == -1) {
            break;
        }
        //put the grade in to the list
        grades.push_back(grade);
    }
    for (int g : grades) {
        //find the highest score
        if (g > max) {
            max = g;
        }
    }
    vector<int>histogram(max + 1, 0);

    for (int g : grades) {
        histogram[g]++;
    }
    //output the hisogram
    cout << "Hisogram of grade : " << endl;
    for (int i = 0; i < max; i++) {
        cout << i << " : ";
        for (int j = 0; j < histogram[i]; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
