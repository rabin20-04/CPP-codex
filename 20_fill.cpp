#include <iostream>
using namespace std;
void fruits(int);
int main()
{
    int num = 10;
    string food[num];
    fill(food, food + num, "pizza");

    for (string foods : food)
    {
        cout << foods << " ";
    }
    cout << "\n";
    fruits(num);

    return 0;
}
void fruits(int num)
{
    string fruit[num];
    fill(fruit, fruit + (num / 2), "apple");
    fill(fruit + (num / 2), fruit + num, "mango");
    for (int i = 0; i < num; i++)
    {
        cout << fruit[i] << " ";
    }
}
