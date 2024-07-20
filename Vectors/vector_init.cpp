#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec1 = {1, 2, 3, 4, 5};
    vector<int> vec2{11, 22, 33, 44, 55}, vec3;
    cout << "Element at Index 2: " << vec2[1] << endl;
    cout << "Element at Index 2: " << vec2.at(1) << endl;
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

    for (const int &i : vec2)
    {
        cout << i << " ";
    }
    cout << endl;
    for (int &i : vec1)
    {
        cout << i << " ";
    }
    return 0;
}

// vector<int> vector3(5, 12);
// Here, 5 is the size of the vector and 12 is the value.
// So, the vector is equivalent to

// vector<int> vector3 = {12, 12, 12, 12, 12};