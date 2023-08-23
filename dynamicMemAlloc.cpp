#include<iostream>
using namespace std;

int main(){
    //Static memory allocation
    int x;
    x=10;

    //Dynamic  memory allocation
    int *aptr = new int;
    *aptr = 10;

    //delete variable
    delete aptr; // free the memory this is pointed by aptr
               //that address will contain garbage value now (instead of 10)

   aptr = NULL;  // bcz never point a pointer to garbage value

 }