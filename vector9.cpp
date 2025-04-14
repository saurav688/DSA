//sort arr of 0s and 1s only
#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int>&v){
    int zeroes_count=0;
    for(int ele:v){
        if(ele==0){
            zeroes_count++;
        }
    }
    for(int i=0;i<v.size();i++){
        if(i<zeroes_count){
            v[i]=0;
        }
        else{
            v[i]=1;
        }
    }
    return;
}
int main(){
    vector<int>v;
    int n;
    cout<<"Enter the size of vector:";
    cin>>n;
    for(int i=0;i<n;i++){
        int ele;
        cout<<"Enter the elements of vector:";
        cin>>ele;
        v.push_back(ele);
    }
    sort(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}
