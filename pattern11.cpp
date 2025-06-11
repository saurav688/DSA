#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the row no.:";
    cin>>n;
    cout<<"Enter column no.:";
    cin>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i);j++){
            cout<<" ";
        }
        for(int j=1;j>=1;j=(i-1);j++){
            cout<<" ";
        }
        for(int j=1;j<=m;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}//doubt
