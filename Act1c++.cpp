```cpp
#include <iostream>
using namespace std;

int main() {
    int grades[5];
    int total = 0;
    double average;

    cout << "===== Grade Calculator =====" << endl;
    cout << "Enter 5 grades:" << endl;

    // Input grades and calculate total
    for (int i = 0; i < 5; i++) {
        cout << "Grade " << i + 1 << ": ";
        cin >> grades[i];
        total += grades[i];
    }
    
    average = total / 5.0;

    cout << "\n===== Grade Results =====" << endl;

    // Display grades and pass/fail status
    for (int i = 0; i < 5; i++) {
        cout << "Grade " << i + 1 << ": " << grades[i];

        if (grades[i] >= 75) {
            cout << " - Passed" << endl;
        } else {
            cout << " - Failed" << endl;
        }
    }

    cout << "\nAverage: " << average << endl;

    // Display overall result
    if (average >= 75) {
        cout << "Overall: Passed" << endl;
    } else {
        cout << "Overall: Failed" << endl;
    }

    return 0;
}
```
