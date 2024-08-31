#include <iostream>
using namespace std;

// Function template to swap two values of the same data type
template <typename T>

// or    template <class T>

void swapValues(T &a, T &b)

// or T swapValues(T &a, T &b)

{

    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 90, b = 42;
    swapValues(a, b); // Swaps integers
    cout << "Swapped integers: " << a << " " << b << endl;

    double x = 9.2, y = 8.6;
    swapValues(x, y); // Swaps doubles
    cout << "Swapped doubles: " << x << " " << y << endl;

    string p = "hello", q = "world";
    swapValues(p, q); // Swaps strings
    cout << "Swapped strings: " << p << " " << q << endl;

    return 0;
}
