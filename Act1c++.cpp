#include <iostream>
using namespace std;

int main() {
    int grades[5];
    int total = 0;
    double average;

    cout << "Enter 5 grades:" << endl;

    //input&array
    for (int i = 0; i < 5; i++) {
        cout << "Grade " << i + 1 << ": ";
        cin >> grades[i];
        total += grades[i];
    }

    average = total / 5.0;

    cout << "\nGrades:" << endl;

    //loop & if-else
    for (int i = 0; i < 5; i++) {
        cout << "Grade " << i + 1 << ": " << grades[i];

        if (grades[i] >= 75) {
            cout << " - Passed" << endl;
        } else {
            cout << " - Failed" << endl;
        }
    }

    cout << "\nAverage: " << average << endl;

    if (average >= 75) {
        cout << "Overall: Passed" << endl;
    } else {
        cout << "Overall: Failed" << endl;
    }

    return 0;
}
