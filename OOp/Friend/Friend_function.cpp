#include <iostream>
using namespace std;

class Complex
{
private:
    float real, imag;
    friend Complex add(Complex, Complex);

public:
    void get_value()
    {

        cout << "Enter real part:  ";
        cin >> real;
        cout << "Enter imaginary  part:  ";
        cin >> imag;
    }

    void showvalue()
    {
        cout << "(" << real << "+" << imag << "i)";
    }
};

Complex add(Complex cc1, Complex cc2)
{
    Complex temp;
    temp.real = cc1.real + cc2.real;



    
    temp.imag = cc1.imag + cc2.imag;
    return temp;
}
//  temp is a variable that holds an object of the Complex class.

int main()
{
    Complex c1, c2, c3;
    c1.get_value();
    c2.get_value();
    c3 = add(c1, c2);
    c1.showvalue();
    cout << "+";
    c2.showvalue();
    cout << "=";
    c3.showvalue();

    return 0;
}