#include<iostream>
using namespace std;
int main(){
    //SMA
    int arr[5];

    for(int i=0;i<=n-1;i++){
        cout<<arr[i];
    }

    //DMA
    int *ptr = new int[5];

    for(int i=0;i<=n-1;i++){
        cout<<ptr[i];
    }

    // delete array
    delete [] ptr;
    
    ptr = NULL;
}