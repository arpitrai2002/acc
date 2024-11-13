#include<iostream>
#include<vector>
using namespace std;

int ratcount(int r,int unit,int n,vector<int> arr){
    int food=r*unit;
    int totalfood=0;

    if(arr.empty()){
        return 0;
    } 

    for(int i=0;i<n;i++){
        totalfood+=arr[i];
        if(totalfood>=food){
            return i+1;
        }
    }
    return -1;
}
 
int main(){
    int r,unit,n;
    cin>>r;
    cin>>unit;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    cout<<"output "<<ratcount(r,unit,n,arr);
 
 return 0;
}