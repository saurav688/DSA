//pre and post address and value using pointer arithmetic in an array.
#include<iostream>
using namespace std;
int main(){
    int arr[2]={1,2};
    int *ptr=&arr[0];
    cout<<ptr<<" "<<*ptr<<endl;
    cout<<(ptr+1)<<" "<<*(ptr+1)<<endl;
    cout<<*ptr++<<endl;
    cout<<arr[0]<<" "<<arr[1]<<endl;
    cout<<ptr<<" "<<*ptr<<endl;
    return 0;
}
