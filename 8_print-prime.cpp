#include <iostream>
#include <cmath>
int isprime(int);
using namespace std;
int main()
{

    int num1, num2;
    cout << " Enter first and last number " << endl;
    cin >> num1 >> num2;

    for (int i = num1; i < num2; i++)
    {
        if (isprime(i))
        {

            cout << i << endl;
        }
    }
    return 0;
}
int isprime(int num)

{
    if (num <= 1)
        return false; // 0 and 1 are not prime numbers

    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}