/*
1)
WAP that defines a shape class with a constructor that gives value to width and height.
The define two sub-classes triangle and rectangle, that calculate the area of the shape area ().
In the main, define two variables a triangle and a rectangle and then call the area() function in
this two varibles.

Area of the triangle: 24
Area of the rectangle: 70
	

*/
#include <iostream>

using namespace std;

class Shape {
public:
    int width;
    int height;

public:
    Shape(int w, int h) {
        width = w;
        height = h;
    }

    int area() {
       return 0;
    }
};

class Triangle : public Shape {
public:
    Triangle(int w, int h) : Shape(w, h) {}

    int area()  {
     return 4 * width * height;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(int w, int h) : Shape(w, h) {}

    int area()  {
        return 2  * width * height;
    }
};

int main() {
    Triangle t1(2,3);
    Rectangle r1(5,7);

    cout << "Area of the triangle: " << t1.area() << endl;
    cout << "Area of the rectangle: " << r1.area() << endl;

    return 0;
}
