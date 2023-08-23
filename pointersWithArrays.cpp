#include<iostream>
using namespace std;
int main(){
 
 int arr[10] ={2,7,4,6};

 cout<<"Address of first element of array "<< arr<<endl;   
 cout<<"Address of first element of array "<< &arr[0]<<endl;
 cout<<"value of first element of array "<< *arr<<endl;  //2

 cout<<"Value of first element + 1 of array "<< *arr + 1<<endl; //3

cout<<"Value of second element of array "<< *(arr + 1)<<endl; //7
//  cout<<"value of first element of array "<< *arr[0]<<endl;   error dega ye



//Formula 
// arr[i] = *(arr + i)
// i[arr] = *(i + arr)
int *ptr = &arr[0];


cout<<sizeof(*ptr)<<endl; //4 size of integer at arr[0]
cout<<sizeof(&ptr)<<endl; // 8 size of pointer
    return 0; 
}