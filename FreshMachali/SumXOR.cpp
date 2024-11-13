#include<iostream>
using namespace std;

int SumXOR(int arr[],int n){
    int o=0;
    int e=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            e^=arr[i];
        }
        else{
            o+=arr[i];
        }
    }
    return o-e;
}
 
int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<SumXOR(arr,n)<<endl;
 
 return 0;
}