#include<iostream>
using namespace std;

bool CheckArray(int arr[],int f,int n){
    for(int i=0;i<n;i++){
        if(arr[i]==f){
            return true;
        }
    }
    return false;
}
 
int main(){
    int arr[]={5,2,4,3,1,5};
    int f=2;
    int n=sizeof(arr)/sizeof(arr[0]);
    
    if(CheckArray(arr,f,n)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
 return 0;
}