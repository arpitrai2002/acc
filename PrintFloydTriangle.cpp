#include<iostream>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int count=1;
    for(int i=1;i<n+1;i++){
        for(int j=0;j<i;j++){
            cout<<count++<<" ";
        }
        cout<<endl;
    }
 
 
 
 
 
 return 0;
}