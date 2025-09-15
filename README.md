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

### These are the resourses I used to complete the first part of this project.
[^1]: https://code-basics.com/blog_posts/what-is-c-plus-plus-programming-language
[^2]: https://code.visualstudio.com/docs/languages/cpp




