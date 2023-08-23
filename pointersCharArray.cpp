#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde";
//integer arr aur char array me difference hota hai pointer k case me
 
    cout<<arr<<endl;
    cout<<ch<<endl; //yahan abcde print hota hai 

    char *ptr = &ch[0];
    cout<<"Address of ch[0] "<<ptr<<endl;  //yahan bhi abcde print hota hai 

   
   char temp = 'z';
   char *a = &temp; 
   cout<<a<<endl; // jb tk null character nhi aayega wahan tk print krega z??

//    char *c = 'abcde'; //ye accha tareeka nhi h bilkul bhi
    return 0;
}