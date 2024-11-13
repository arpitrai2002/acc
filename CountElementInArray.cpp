#include<iostream>
using namespace std;

int CountElement(int arr[],int f,int n){
    int count =0;
    for(int i=0;i<n;i++){
        if(arr[i]==f){
            count++;
        }
    }
    return count;
}
 
int main(){
    int arr[]={5,2,4,3,1,5};
    int f=2;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<CountElement(arr,f,n)<<endl;
 return 0;
}