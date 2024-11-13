#include<iostream>
#include<algorithm>
using namespace std;
 
int main(){
    int arr[]={5,3,7,6,1,3,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);

    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]){
            continue;
        }
        cout<<arr[i]<<endl;
        break;
    }

 
 
 
 
 
 return 0;
}