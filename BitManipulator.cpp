//jatin gurjar
//23070123067
#include <iostream>
using namespace std;

int main() {
    int number;
    int bitToSet, bitToReset;
    int resultSet, resultReset;
    
    cout << "Please enter a number in decimal: ";
    cin >> number;

    cout << "Please enter the bit position to be set: ";
    cin >> bitToSet;

    cout << "Please enter the bit position to be reset: ";
    cin >> bitToReset;

    // Setting the bit
    resultSet = number | (1 << bitToSet);

    // Resetting the bit
    resultReset = number & (~(1 << bitToReset));

    cout << "Original number: " << number << endl;
    cout << "Number after setting bit " << bitToSet << ": " << resultSet << endl;
    cout << "Number after resetting bit " << bitToReset << ": " << resultReset << endl;

    return 0;
}

