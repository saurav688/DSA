#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the no.:";
    cin>>x;
    if(x<0){
        x=x*(-1);
    }
        cout<<"Absolute value is "<<x;
    
    return 0;
