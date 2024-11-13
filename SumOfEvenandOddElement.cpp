#include<iostream>
using namespace std;
 
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10,11};
    int n=sizeof(arr)/sizeof(arr[0]);

    int e=0;
    int o=0;

    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            e+=arr[i];
        }
        else{
            o+=arr[i];
        }
    }

    cout<<e<<" "<<o<<endl;
 
 
 
 
 return 0;
}