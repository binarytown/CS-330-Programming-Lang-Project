# CS-330-Programming-Lang-Project
This repository is to learn and successfully code in the programming language C++.

## History & Creation
C++ is a programming language which was created by **Bjarne Stroustrup** as an extension of the programming language - C.

![BjarneStroustrup](https://github.com/user-attachments/assets/e7c18ef1-c042-4f12-871e-43285f5561da)


**Milestone[^1]**
- 1998: The first standardized version of C++.
- 2011: Introduced lambda expressions, smart pointers, and multithreading.
- 2014 and 2017: Simplified syntax and enhanced libraries.
- 2020: Added concepts, coroutines, and improved modular programming.

## Programming Development 
C++ does not come with any primary recommended programming environment. Progammers in our day and age use Integrated development environments like 
Visual Studio Code(Microsoft), CLion(JetBrains), and more.

I'll be using **_VS Code_** because I'm familiar with the software application, it's free of cost, beginner-friendly, highly compatible
with MacOS, and provides an official Microsoft C/C++ extention.

## Gettin Started(set-up) 
**_Installing Process_**

**For MacOs, you have to open your terminal and run the following command:**
```
xcode-select --install
```

**After you're done, check to see if it successfully worked or not by running this command:**
```
clang++ --version
```

**If it worked, your screen should show something like:**
```
Apple clang version 17.0.0 (clang-1700.0.13.5)
```

<img width="567" height="208" alt="Screenshot 2025-09-14 at 9 20 55 PM" src="https://github.com/user-attachments/assets/70a6b381-e1da-4e1b-9049-9ecd8e6aea62" />



## A first in every programmer's journey - "Hello World!"

**This is to show how to display the "Hellow World!" message in VS Code using C++[^2]**

1. First step is to open up VS Code and create a file named "hello_world" with a **cpp** format on your software.
2. After the file is created and saved in a folder of your choice, write down the following code:
   
```
#include<iostream> // this line is a pre-processor, it allows us to perform our operations
using namespace std;

int main(){ // to return int data types
    cout << "Hello World!" << endl;  // to help us print our desired texts or sentenses
    return 0;
}
```

### Terms you might need help with to understand the code 

- #include <iostream> - It brings in input/output tools so we can display our statements;
- using namespace std; - It lets you use cout instead of std::cout, which is much shorter and more approachable for smaller coding tasks;
- int main(){} - It's a function, which marks the start of our program. It's going to be the first thing to runs when we execute the program;
- cout << "Hello World!" << endl; - _cout_ helps us print "Hello World!" to our screen;
- endl - It is used for two reasons: a) to jump to a new line; b) to flush our output so we can see our statement on the terminal immediadetly;
- return 0; - It ends the program and gives a thumps-up to the operating system when our program runs successfully;

## How to comment on your codes using C++
**Programming is easy when you know what you're doing, and it's better to write down what goes through your mind when you write your code so you don't forget and lose all your progress.**

This is to show how one can write comments while writing s program in C++.

1. To write a single line code, we can use an **_//_** operator.
```
// This is a single line comment;
```

2. To write comments which might take more than just one single, we can use the /* */operator.
```
/* This is used to write comments which might take more than a single line to describe
the reasoning behind your coding choices; */
```
## PLP2 - Data Types and Naming Conventions in C++
** Now we'll be talkin about and seeing examples of C++ primitive and composite data types 
**  Some of which include int, float, bool, string, vector, and map
** This short program shows basic variable types and simple operations.

#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main() { // We will be using basic datatypes
    // Basic data types
    int age = 20;                 // integer
    float height = 5.5;           // floating-point number
    bool isStudent = true;        // boolean (true or false)
    string name = "Isis";         // string (text)

    // These are collection types - array/list example using vector
    vector<int> numbers = {1, 2, 3, 4, 5};

    // dictionary example using map
    map<string, int> grades = {{"Math", 95}, {"CS", 98}};

    // simple operations
    int nextYearAge = age + 1;    // arithmetic operation
    float total = height + 1.2;   // mixed type (int + float → float)

    // our output
    cout << "Name: " << name << endl;
    cout << "Age next year: " << nextYearAge << endl;
    cout << "Height: " << total << endl;
    cout << "Is Student: " << isStudent << endl;
    cout << "Math Grade: " << grades["Math"] << endl;

    return 0;
}
/* Notes: 
Data types tell the computer what kind of information a variable storesFor example:
int means whole numbers like 5, 100, -3

float means numbers with decimals like 5.5 or 3.14

bool means true or false values

string means text, like "Hello" */



## PLP Assignment 4 - Functions

In C++, fucntions are used as reusable blocks of code designed to perform our desired tasks. They allow us programmers to organize our code, avoid any sort of repetition, and make programs easier to maintain and debug. A function can take inputs (called parameters), execute statements, and return a result.

// Every C++ function has:
a return type (int, void, etc.)
a name
a parameter list inside parentheses
a body wrapped in {}

// Multiplying two numbers
int multiply(int x, int y) {
    return x * y;

// Recursive Functions, also known as Factorials
int factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

// Splitting a String into Two
// C++ doesn’t directly return multiple values, but you can use a pair or tuple to return more than one item.

#include <string>
#include <utility>
using namespace std;

pair<string, string> splitString(string s) {
    int mid = s.size() / 2;
    return make_pair(s.substr(0, mid), s.substr(mid));
}


// Pass by Value v/s Pass by Reference
// C++ passes arguments by value,  meaning the function receives a copy. To modify the original, you must pass by reference using &.

void modifyValue(int x) { x = 100; }
void modifyReference(int &x) { x = 100; }

int main() {
    int num = 5;
    modifyValue(num);       // num stays 5
    modifyReference(num);   // num becomes 100
}

// Multiple Parameters and Different Types
// Functions can take multiple parameters, even of different types:

double describe(string name, int age) {
    cout << name << " is " << age << " years old.";
    return age * 1.0;
}

// More infomaton: 
//C++ functions combine power and structure for clean code design.
//They support recursion, overloading, multiple parameter types, and multiple return options.
//pass-by-value - copies data. Use & for pass-by-reference.
//Locals live on the stack and are destroyed after execution.
//C++ also supports features like constexpr, inline, tuple returns, and static locals.

## PLP 3 - Selection, loops, and conditionals
** C++ uses the boolean data tyle, which offers two values: true and false;
** C++ also supports condtional statements like: if, if/else, if/else if/else, switch/case;
*/

// Example 1: one-condition if/else

bool x = true;
if (x == true) {
    cout << "The boolean x is true" << endl;
} else {
    cout << "The boolean x is false" << endl;
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

if (x > 0) { 
    if (x < 10) {
        cout << "X is Positive";
   } else {
        cout << "X is not positive"; // else pairs with the inner if
   }
}





// sources: https://learn.microsoft.com/en-us/cpp/cpp/functions-cpp?view=msvc-170
### These are the resourses I used to complete the first part of this project.
[^1]: https://code-basics.com/blog_posts/what-is-c-plus-plus-programming-language
[^2]: https://code.visualstudio.com/docs/languages/cpp




