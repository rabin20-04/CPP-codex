#include <iostream>
using namespace std;

// Abstraction = hiding  unnecessary  data from outside a class
// getter = function that makes a private attribute Readable
// setter = function that makes a private attribute Writeable

class Temperature_reader
{
private:
    int current_temp;

public:
    int getcurrent_temp()
    {
        return current_temp;
    }
    void setcurrent_temp(int temperature)
    {
        this->current_temp = temperature;
    }
};

int main()
{
    Temperature_reader t1;
    t1.setcurrent_temp(2200);

    cout << " Current temperature is : " << t1.getcurrent_temp() << endl;

    return 0;
}