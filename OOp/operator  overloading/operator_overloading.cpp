#include <iostream>
using namespace std;
class complex
{
private:
    int real;
    int imag;

public:
    complex() : real(0), imag(0) {}
    complex(int r, int c) : real(r), imag(c) {}
    complex operator+(complex c1)
    {
        complex temp;
        temp.real = real + c1.real;
        temp.imag = imag + c1.imag;
        return temp;
    }
    void display()
    {
        cout << real << "+" << imag << "*i";
    }
};

int main()
{
    complex p(2, 3), q(5, 7), r;
    r = p + q;

    p.display();
    cout << " + ";
    q.display();
    cout << "=";
    r.display();
    return 0;

    return 0;
}