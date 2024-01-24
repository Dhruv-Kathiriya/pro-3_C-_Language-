/*

2. WAP with a mother class and an inherited daugther class.Both of them should have a method void display ()that prints a message 
(different for mother and daugther). In the main define a daughter and call the display() method on it.


output :-

I am the mother class!
I am the daughter class!

*/#include <iostream>
using namespace std;

class Mother{
public:
    void getdis() {
        cout << "I am the mother class!" << endl;
    }
};

class Daughter : public Mother {
public:
    void getdis1() {
        cout << "I am the daughter class!" << endl;
    }
};

int main() {
    Daughter d1;
    d1.getdis();
    d1.getdis1();
    return 0;
}
