#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
 
int main(){
    int arr[]={10,20,30,40,50};
    reverse(arr,arr+5);
    vector<int> o;
    vector<int> e;

    for(int i=0;i<5;i=i+2){
        e.push_back(arr[i]);
    }
    for(int i=1;i<5;i=i+2){
        o.push_back(arr[i]);
    }

    cout<<"ODD"<<endl;
    for(int c:o){
        cout<<c<<" ";
    }
    cout<<endl;
    cout<<"Even"<<endl;

     for(int c:e){
        cout<<c<<" ";
    }

 
 
 
 
 
 return 0;
}