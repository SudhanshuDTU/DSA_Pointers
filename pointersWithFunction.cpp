#include <iostream>
using namespace std;
void updateValue(int *ptr)
{
    *ptr = *ptr + 1;
}

void update(int *ptr)
{
    ptr = ptr + 1;
}


int main()
{
    int value = 5;
    int *p = &value;
    cout << "before address" << p << endl;
    update(p);
    cout << "after address" << p << endl;  //same address aayega because of pass by value


    cout << "before value " << *p << endl;
    updateValue(p);
    cout << "after value" << *p << endl;

    return 0;
}