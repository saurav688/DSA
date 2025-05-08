#include<iostream>
using namespace std;
string name="Saurav";
void fun(){
    cout<<name<<endl;
}
int main(){
    cout<<name<<endl;
    name="Tiwari";
    fun();
    return 0;
}
