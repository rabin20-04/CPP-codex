#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec1 = {1, 2, 3, 4, 5};
    vector<int> vec2{11, 22, 33, 44, 55}, vec3;

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

// vector<int> vector3(5, 12);
// Here, 5 is the size of the vector and 12 is the value.

// https://www.programiz.com/cpp-programming/vectors