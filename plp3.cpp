// Tuba Siddiqui - PLP 3 - Selection, loops, and conditionals

// Example 1: one-condition if/else

#include <iostream>
using namespace std;

int main() {
    bool m = true;
    if (m == true) {
        cout << "The boolean m is true" << endl;
    } else {
        cout << "The boolean m is false" << endl;
    }
    // Example 2: multi-condition if/else

    int x = 4;
    int y = 8;
    if (x > 0 && y < 10) {
        cout << "x is greater than 0 and y is less than 10" << endl;
    } else {
        cout << "The loop conditions were not satisfied" << endl;
    }

    // Example 3: if/else if/else

    int num = 0;
    if (num > 0) {
        cout << "Positive number" << endl;
    } else if (num < 0) {
        cout << "Negative number" << endl;
    } else {
        cout << "The value of num is zero!" << endl;
    }

    // Short-circut logic: 
    // X && Y: evaluate Y only if X is true
    // X || Y: evaluate Y only if X is false

    // Example 4: Short-circuit

    int a = 4;
    int b = 0;
    if (b > 0 && (a/b) >= 2) {
        cout << "There might be some trouble running this code" << endl;
    } 
    else {
        cout << "Short circuit prevents div by 0" << endl;
    }


    // Example 5: Switch Statements
    // C++ supports switch statements with case labels;
    // You must use break to exit a case;
    // If you omit break, execution falls through to the next case;


    int choice = 3;
    switch (choice) {
        case 1:
            cout << "Weather is pleasant" << endl;
            break;
        case 2:
            cout << "There's incoming rain" << endl;
            break;
        case 3:
            cout << "Winter is comming" << endl;
            break;
        default:
            cout << "Invalid option" << endl;
    }

    // Dangling Else Issue
    // C++ solves any sort of dangling else issues by matching with the closest unmatched if

    int z = 5;
    if (z > 0) { 
        if (z < 10) {
            cout << "Z is Positive";
    } else {
            cout << "Z is not positive"; // else pairs with the inner if
    }
    }
}


