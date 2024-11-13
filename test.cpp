#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;


int secSmallest(int n,vector<int> &arr){
    int i=1;
    while(i<n){
        if(arr[i]!=arr[i-1]){
            return arr[i];
        }
        i++;
    }
    return -1;
}
int secLargest(int n,vector<int> &arr){
    int i=n-2;
    while(i>=0){
        if(arr[i]!=arr[i-1]){
            return arr[i];
        }
        i--;
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end());

    int sL=secLargest(n,arr);
    int sS=secSmallest(n,arr);
    cout<<sL<<" "<<sS<<endl;


}