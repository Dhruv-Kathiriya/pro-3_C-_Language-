/*
3) WAP with a mother class animal. Inside it define a name and an age variables,
 and set_value() function. Then create two bases variables Zebra and Dolphin which 
 write a message telling the age, the name and giving some extra information (e.g. place of origin).


output:-
I am a zebra named         .
I am 0 years old.
I come from Africa.
I am a dolphin named.
I am 0 years old.
I come from the ocean.
*/
#include <iostream>
#include<string.h>
using namespace std;

class Animal {
public:
    char name[100];
    int age;

public:
    void set_value(char name[100],int age) {
        name = name;
        age = age;
    }
};

class Zebra : public Animal {
public:
    void write_message() {
        cout << "I am a zebra named " << name << "." << endl;
        cout << "I am " << age << " years old." << endl;
        cout << "I come from Africa." << endl;
    }
};

class Dolphin : public Animal {
public:
    void write_message() {
        cout << "I am a dolphin named " << name << "." << endl;
        cout << "I am " << age << " years old." << endl;
        cout << "I come from the ocean." << endl;
    }
};

int main() {
    Zebra z;
    Dolphin d;

    z.set_value("Stripes",5);
    d.set_value("Flipper", 10);

    z.write_message();
    d.write_message();

    return 0;
}
