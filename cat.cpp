// Tuba
// PLP 5: Classes && Inheritance

#include <iostream>
#include <string>
using namespace std;

class cat {
public:
    string cat_name;
    int cat_age;

    cat(string name, int age) {
        cat_name = name;
        cat_age = age;
    }

    void setAge(int age) {
        cat_age = age;
    }

    void printInfo() {
        cout << cat_name << " is " << cat_age << " years old!!" << endl;
    }
};

class petCat : public cat {
    public:
        string cat_owner;
    
        petCat(string name, int age, string owner)
            : cat(name, age) {
            cat_owner = owner;
        }
    
        void setOwner(string owner) {
            cat_owner = owner;
        }
    
        void printCatInfo() {
            cout << cat_name << " is " << cat_age << " years old and belongs to " << cat_owner << "!!" << endl;
        }
    };

    int main() {
        cat c("Black Tail", 6);
        c.printInfo();
    
        petCat p("Luna", 2, "Tuba");
        p.printCatInfo();
    
        p.setAge(3);
        p.setOwner("Selma");
        p.printCatInfo();
    
        return 0;
    }
    
