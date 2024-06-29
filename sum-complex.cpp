#include <iostream>
using namespace std;
class sum
{
private:
    int real;
    float imag;

public:
    void get_numbers()
    {
        cout << "Enter real part : " << endl;
        cin >> real;
        cout << "Enter imaginary part : " << real << " + i*";
        cin >> imag;
    };
    void show_value()
    {
        cout << "(" << real << "+" << imag << "i)";
    };
    void sum_numbers(sum s1, sum s2)
    {
        real = s1.real + s2.real;
        imag = s2.imag + s1.imag;
        cout << real << " + " << imag << "i" << endl;
    };
};

int main()
{
    sum s1, s2, s3;
    cout << "Enter the values of first complex number : " << endl;
    s1.get_numbers();
    cout << "\n  Enter the values of second complex number : " << endl;
    s2.get_numbers();
    cout << "\n";
    s1.show_value();
    cout << " + ";
    s2.show_value();
    cout << " = ";
    s3.sum_numbers(s1, s2);

    return 0;
}