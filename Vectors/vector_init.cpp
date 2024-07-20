#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec1 = {1, 2, 3, 4, 5};
    vector<int> vec2{1, 2, 3, 4, 5};
    cout << "Vec1 = {";
    for (int i = 0; i < vec1.size(); i++)
    {

        cout << vec1[i] << ",";
    }
    cout << "}\n";
    cout << "Vec2 = {";
    for (int i = 0; i < vec2.size(); i++)
    {

        cout << vec2[i] << ",";
    }
    cout << "}\n";

    return 0;
}