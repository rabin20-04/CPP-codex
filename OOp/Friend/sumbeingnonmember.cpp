
#include <iostream>
using namespace std;
class secondclass;                     //
class firstclass
{
private:
    int a, b;

public:
    firstclass(int a, int b) : a(a), b(b) {}
    friend void sum(firstclass, secondclass);
};
class secondclass
{
private:
    int x, y;

public:
    secondclass(int x, int y) : x(x), y(y) {}
    friend void sum(firstclass, secondclass);
};
void sum(firstclass f1, secondclass s1)                       // outside of classes
{
    int temp;
    temp = f1.a + s1.x + f1.b + s1.y;
    cout << temp << endl;
}

int main()
{
    firstclass f1(2, 9);
    secondclass s1(3, 2);
    sum(f1, s1);

    return 0;
}