#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int, int> map;
    int a;
    int flag = 0,temp,las;

    while (cin >> a)
    {
        las=a;
        if (flag == 0)
        {
            temp = a;
            flag = 1;
        }
        map[a]++;
        
    }
    cout << "You have entered " <<a<<" "<< map[las]<< "times" ;
    return 0;
}