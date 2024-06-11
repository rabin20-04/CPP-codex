
// Inheritance : A class can receive attributes and methods from another class
// Childern class inherit from another class
// Help to reuse similar code found within multiple class

#include <iostream>
using namespace std;

class Shape
{
public:
    double area;
    double volume;
};

class Square : public Shape
{
public:
    double side;

    Square(double sidee)
    {
        this->side = sidee;
        this->area = side * side;
    };
};

///  ////////////////////////////////
class Cube : public Shape
{
public:
    double radius;
    Cube(double radiuss)
    {
        this->radius = radiuss;
        this->area = radius * radius * 6;
        this->volume = radius * radius * radius;
    };
};

////////////////////////////////////////////////////

class Sphere : public Shape
{
public:
    double radius;
    Sphere(double radiuss)
    {
        this->radius = radiuss;
        this->area = 4 * 3.1415 * radius * radius;
        this->volume = (4 / 3) * 3.1415 * radius * radius * radius;
    };
};
///  ////////////////////////////////////////////
///
int main()
{

    Square s1(2.2);
    cout << "The  area of Square is " << s1.area << endl;

    Cube cube(2.2);
    cout << "The surface area of Cube is " << cube.area << endl;
    cout << "The  Volume of Cube is " << cube.volume << endl;

    Sphere sp1(2.2);
    cout << "The surface area of Sphere is " << sp1.area << endl;
    cout << "The  Volume of Sphere is " << sp1.volume << endl;

    return 0;
}
