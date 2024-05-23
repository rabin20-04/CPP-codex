#include <iostream>
using namespace std;
int ctof(int);
int ctok(int);
int ftoc(int);
int ftok(int);
int ktoc(int);
int ktof(int);
int result;
int main()
{
    int temp, choice, converted;
    cout << "Enter which  temperature you would like to convert ! \n1) Celsius to  Fahrenheit\n2) Celsius to  kelvin\n3) Fahrenheit to Celsius \n4) Fahrenheit to kelvin\n5) Kelvin to Celsius \n6) Kelvin to  Fahrenheit" << endl;
    cin >> choice;
    cout << "Enter the value of temperature" << endl;
    cin >> temp;

    switch (choice)
    {
    case 1:

        converted = ctof(temp);
        break;

    case 2:

        converted = ctok(temp);
        break;

    case 3:

        converted = ftoc(temp);
        break;

    case 4:

        converted = ftok(temp);
        break;

    case 5:

        converted = ktoc(temp);
        break;

    case 6:

        converted = ktof(temp);
        break;
    default:
        cout << "Invalid choice";
        return 1;
    }
    cout << "The the required temperature is " << converted << endl;

    return 0;
}
int ctof(int temp)
{
    int result;
    result = ((180 * temp) / 100) + 32;
    return result;
}
int ctok(int temp)
{
    int result;
    result = temp + 273;
    return result;
}
int ftoc(int temp)
{
    int result;
    result = ((100 * (temp - 32)) / 180);
    return result;
}
int ftok(int temp)
{
    int result;
    result = ((100 * (temp - 32)) / 180);
    return result;
}
int ktoc(int temp)
{
    int result;
    result = temp - 273;
    return result;
}
int ktof(int temp)
{
    int result;
    result = ((180 * (temp - 273)) / 100) + 32;
    return result;
}
