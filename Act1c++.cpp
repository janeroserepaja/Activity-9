#include <iostream>
using namespace std;

int main() {
    int grades[5];
    int total = 0;
    double average;

    cout << "===== Grade Calculator =====" << endl;
    cout << "Enter 5 grades:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Grade " << i + 1 << ": ";
        cin >> grades[i];
        total += grades[i];
    }

    average = total / 5.0;

    cout << "\n===== Grade Results =====" << endl;
    cout << "Total Grades: " << total << endl;
    cout << "Average: " << average << endl;

    return 0;
}
