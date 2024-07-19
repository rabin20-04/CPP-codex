//------------------Vector vs array
// Flexibility: std::vector is more flexible due to its ability to change size dynamically.
// Memory Management: std::vector handles memory management internally, unlike arrays where you need to manage it yourself.
// Safety and Convenience: std::vector provides bounds checking and other utility functions (e.g., .push_back(), .size())
// that make it safer and more convenient to use.

#include <iostream>
#include <vector>
using namespace std;

void after_inserting();
void before_inserting();
void print_element();

int main()
{
    before_inserting();
    after_inserting();
    print_element();
    return 0;
}

void before_inserting()
{
    //--------------------------------- Vectors comes empty by default
    vector<int> primes; // so we must specify the data type
    // primes.push_back(2);
    // primes.push_back(3);
    // primes.push_back(4);
    // primes.push_back(5);

    cout << "The size of vector(before inserting) is: " << primes.size() << " elements" << endl;
}

//--------output will be zero

//-----------------------------------------------------------------------------------------

void after_inserting()
{
    vector<int> primes;
    primes.push_back(2);
    primes.push_back(3);
    primes.push_back(4);
    primes.push_back(5);

    cout << "The size of vector(after inserting ) is:  " << primes.size() << " elements" << endl; //---- to get the number of elements in the vector  use .size()

    //  cout << "Enter " << sizeof(primes) << endl; //--- size of gives size of the data type not of the array
}
///------- output ----4

void print_element()
{
    vector<int> primes;
    primes.push_back(2);
    primes.push_back(3);
    primes.push_back(4);
    primes.push_back(5);
    cout << "Element at place 2 is: " << primes[1] << endl;
}

// {2,3,4,5}