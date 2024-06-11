#include <iostream>
using namespace std;
void sort(int[], int);

int main()
{
    int size;
    cout << "Enter the number of elements" << endl;
    cin >> size;
    int elements[size];
    cout << " Enter the elements of array " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> elements[i];
    }
    sort(elements, size);

    return 0;
}
void sort(int element[], int size)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (element[j] < element[i])
            {
                int temp = element[j];
                element[j] = element[i];
                element[i] = temp;
            }
        }
    }
    cout << "The ascending order or of your input is : \n";
    for (int i = 0; i < size; i++)
    {

        cout << element[i] << " ";
    }
}
