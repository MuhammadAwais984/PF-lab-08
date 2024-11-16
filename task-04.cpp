#include <iostream>
using namespace std;

int main() {
    char grade;

    cout << "Enter a letter grade (A, B, C, D, F): ";
    cin >> grade;

    switch (toupper(grade)) { 
        case 'A':
            cout << "Excellent" << endl;
            break;
        case 'B':
            cout << "Good" << endl;
            break;
        case 'C':
            cout << "Average" << endl;
            break;
        case 'D':
            cout << "Below Average" << endl;
            break;
        case 'F':
            cout << "Failing" << endl;
            break;
        default:
            cout << "Invalid grade. Please enter A, B, C, D, or F." << endl;
            break;
    }

    return 0;
}
