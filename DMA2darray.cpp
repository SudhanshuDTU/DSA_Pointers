#include<iostream>
using namespace std;
int main(){
    //SMA
    int arr[3][4];
     for(int i=0;i<=3;i++){
        for(int j=0;j<=4;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<=3;i++){
        for(int j=0;j<=4;j++){
            cout<<arr[i][j];
        }
    }

    //DMA
    int **arr = new int*[3];

    for(int i=0;i<=3-1;i++){
        arr[i] = new int[4];
    }

    int arr[3][4];
     for(int i=0;i<=3;i++){
        for(int j=0;j<=4;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<=3;i++){
        for(int j=0;j<=4;j++){
            cout<<arr[i][j];
        }
    }

    // delete array

    for(int i=0;i<=2;i++){
        delete [] arr[i];
        arr[i]=NULL;
    }
     delete [] arr; 
    arr = NULL;
}