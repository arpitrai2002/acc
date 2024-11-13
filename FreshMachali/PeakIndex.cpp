#include<iostream>
#include<vector>
using namespace std;

int Peak(vector<int> arr,int n){
    int low=0;
    int high=n-1;
    int mid=(low+high)/2;
    while(low<high){
        if(arr[mid]<arr[mid+1]){
            low=mid+1;
        }
        else{
            high=mid;
        }
        mid=(low+high)/2;
    }
    return mid;
}
 
int main(){
    int n;
    vector<int> arr;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    int index=Peak(arr,n);
    cout<<arr[index]<<endl;
 return 0;
}