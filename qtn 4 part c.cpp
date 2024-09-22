#include <iostream>
using namespace std;

int main() {
    int grade; 

    do {
        cout << "Enter a grade (0-100): "; // Prompting my user for input
        cin >> grade; 

        // Validating input
        if (grade < 0 || grade > 100) {
            cout << "Invalid grade. Please enter a value between 0 and 100." << endl;
        }
    } while (grade < 0 || grade > 100); // Repeat until valid input is received

    cout << " Well done  you entered a valid grade: " << grade << endl; // Output the valid grade
    return 0;
}

