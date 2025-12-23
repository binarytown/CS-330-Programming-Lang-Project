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
**Notes:**
- Data types tell the computer what kind of information a variable storesFor example:
- int means whole numbers like 5, 100, -3
- float means numbers with decimals like 5.5 or 3.14
- bool means true or false values
- string means text, like "Hello" */


## PLP Assignment 3 - Selection, loops, and conditionals
** C++ uses the boolean data tyle, which offers two values: true and false;
** C++ also supports **condtional statements[^3]:** like: if, if/else, if/else if/else, switch/case;


<img width="435" height="576" alt="Screenshot 2025-12-22 at 6 55 40 PM" src="https://github.com/user-attachments/assets/3d1e8cb1-41f7-489b-bb55-9e4ff6bd3b16" />

<img width="529" height="571" alt="Screenshot 2025-12-22 at 6 56 09 PM" src="https://github.com/user-attachments/assets/7db2a8a8-cf77-4820-bb13-164d8f1a51d7" />

<img width="609" height="112" alt="Screenshot 2025-12-22 at 6 56 17 PM" src="https://github.com/user-attachments/assets/2e0f3aad-f29d-4cb8-b4bb-72466896dc9d" />


## PLP Assignment 4 - Functions

In C++, **fucntions[^4]** are used as reusable blocks of code designed to perform our desired tasks. They allow us programmers to organize our code, avoid any sort of repetition, and make programs easier to maintain and debug. A function can take inputs (called parameters), execute statements, and return a result.

** Every C++ function has:
a return type (int, void, etc.)
a name
a parameter list inside parentheses
a body wrapped in {}

** Multiplying two numbers: 

```
int multiply(int x, int y) {
   return x * y;
```

** Recursive Functions, also known as Factorials:
```
int factorial(int n) {
   if (n <= 1)
      return 1;
   return n * factorial(n - 1);
}
```


** Splitting a String into Two:
**C++ doesn’t directly return multiple values, but you can use a pair or tuple to return more than one item.**

<img width="575" height="757" alt="Screenshot 2025-12-22 at 7 00 51 PM" src="https://github.com/user-attachments/assets/71d76e45-2754-4065-af25-4e50e4b02cf1" />

<img width="1016" height="155" alt="Screenshot 2025-12-22 at 7 01 12 PM" src="https://github.com/user-attachments/assets/215ac19d-9d46-4968-ae26-e7fa28d5a9fa" />

**More infomaton:**
- C++ functions combine power and structure for clean code design.
- They support recursion, overloading, multiple parameter types, and multiple return options.
- pass-by-value: copies data. Use & for pass-by-reference.
- Locals live on the stack and are destroyed after execution.
- C++ also supports features like constexpr, inline, tuple returns, and static locals.


## PLP Assignment 5 - Classes and Inheritance

In C++, classes are used to create objects that group together data and functions that operate on the same data. This helps model real-world entities like people and students. C++ is an object-oriented language, so it fully supports classes, objects, and inheritance.

** Every C++ class has:
- a class name
- data members (attributes / instance variables)
- an access specifier (public or private)
- member functions (methods)

** Creating a class in C++: 
The Person class represents a basic person with a cat name and its age. 
```
```


** Inheritance in C++: 
In C++ inheritance allows one class to reuse the attributes and functions of another class.
Here the student class inherits from person using public inheritance.

```

```

### These are the resourses I used to complete the first part of this project.
[^1]: https://code-basics.com/blog_posts/what-is-c-plus-plus-programming-language
[^2]: https://code.visualstudio.com/docs/languages/cpp
[^3]: https://www.geeksforgeeks.org/cpp/cpp-decision-making/
[^4]: https://learn.microsoft.com/en-us/cpp/cpp/functions-cpp?view=msvc-170




