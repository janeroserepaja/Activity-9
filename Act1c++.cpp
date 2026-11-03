#include <iostream>
using namespace std;

int main() {
    int grades[5];
    int total = 0;
    int highest, lowest;
    double average;

    cout << "===== Grade Calculator =====" << endl;
    cout << "Enter 5 grades:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Grade " << i + 1 << ": ";
        cin >> grades[i];
        total += grades[i];
    }

    highest = grades[0];
    lowest = grades[0];

    for (int i = 1; i < 5; i++) {
        if (grades[i] > highest) {
            highest = grades[i];
        }

        if (grades[i] < lowest) {
            lowest = grades[i];
        }
    }

    average = total / 5.0;

    cout << "\n===== Grade Results =====" << endl;
    cout << "Total Grades: " << total << endl;
    cout << "Average: " << average << endl;
    cout << "Highest Grade: " << highest << endl;
    cout << "Lowest Grade: " << lowest << endl;

    return 0;
}
