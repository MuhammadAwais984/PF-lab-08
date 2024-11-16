#include <iostream>
using namespace std;

int main() {
    char light;

    cout << "Enter the traffic light color (R for Red, G for Green, Y for Yellow): ";
    cin >> light;

    switch (toupper(light)) { 
        case 'R':
            cout << "Stop" << endl;
            break;
        case 'G':
            cout << "Go" << endl;
            break;
        case 'Y':
            cout << "Slow down" << endl;
            break;
        default:
            cout << "Invalid input. Please enter R, G, or Y." << endl;
            break;
    }

    return 0;
}
