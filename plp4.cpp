// CS330: Programming Language Project (PLP) – Assignment 4
// Author: Tuba Siddiqui
// Functions in C++

#include <iostream>
#include <string>
#include <utility>
using namespace std;

int multiply(int x, int y) {
    return x * y;
}

int factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

pair<string, string> splitString(string s) {
    int mid = s.size() / 2;
    string firstHalf = s.substr(0, mid);
    string secondHalf = s.substr(mid);
    return make_pair(firstHalf, secondHalf);
}

void modifyValue(int x) {
    x = 100;
}

void modifyReference(int &x) {
    x = 100;
}

int main() {
    cout << "C++ Functions Demonstration" << endl;

    int product = multiply(5, 7);
    cout << "multiply(5, 7) = " << product << endl;

    int fact = factorial(5);
    cout << "factorial(5) = " << fact << endl;

    auto parts = splitString("HelloWorld");
    cout << "splitString(\"HelloWorld\") = \"" << parts.first << "\" and \"" << parts.second << "\"" << endl;

    int num = 10;
    modifyValue(num);
    cout << "After modifyValue(num): num = " << num << endl;
    modifyReference(num);
    cout << "After modifyReference(num): num = " << num << endl;

    string name = "Tuba";
    int age = 21;
    cout << name << " is " << age << " years old." << endl;

    return 0;
}
