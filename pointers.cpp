#include <iostream>
using namespace std;
int main()
{
    int num = 5;
    int *ptr = &num;
    cout << num << endl;
    cout << *ptr << endl; // value of num that is 5
    cout << ptr << endl;  // value of ptr that is address of num

    // second way
    int *p = 0; // null pointer
    p = &num;
    cout << *p << endl; // value of num that is 5
    cout << p << endl;  // value of p that is address of num

    // size of pointer is generally 8 bytes
    cout << sizeof(p) << endl;

    cout << sizeof(*p) << endl; // *p means 5 to ab 5 to int hai isiliye 4 bytes

    int *z = &num;
    cout << "before" << num << endl; // 5
    (*z)++;
    cout << "after" << num << endl; // 6

    // copying a pointer
    int *c = z;
    cout << c << " " << z << endl;   // address of num  , address of num
    cout << *c << " " << *z << endl; // address of num  , address of num

    // important concept

    int i = 3;
    int *d = &i;
    *d = *d + 1;
    cout << *d << endl; //4

     cout << "before "<<d << endl;
     d = d +1; //address of i + 4 ho jayega kyuki ye next integer pr chala jayega
     cout << "after "<< d << endl;
    return 0;
}