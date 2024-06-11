
//  function templetes are a way to create a function that can work with any datatype
// can be use to generate as many overloaded function as required

#include <iostream>
using namespace std;

// for same data type
template <typename apple>
apple result(apple a, apple b)
{
    return (a > b) ? a : b;
}
// for different data type
template <typename apple, typename ball>
auto result(apple a, ball b)
{
    return (a > b) ? a : b;
}
int main()
{

    cout << " The greatest number among these two are " << result(22, 46) << endl;
    cout << " The greatest number among these two are " << result(22.1, 22) << endl;
    cout << " The greatest  among these two are " << result(string("a"), string("z")) << endl;
    cout << " The greatest  among these two are " << result(string("a"), string("z")) << endl;
    cout << " The greatest  among these two are " << result(string("a"), string("h")) << endl;
    cout << " The greatest  among these two are " << result(string("t"), string("z")) << endl;

    return 0;
}