#include<iostream>
#include<vector>
using namespace std;

int SuperiorArrayElement(vector<int> arr,int n){
    int ans=0;
    for(int i=0;i<n;i++){
        int j;
        for(j=i+1;j<n;j++){
            if(arr[i]<=arr[j]){
                break;
            }
        }
        if(j==n){
            ans++;
        }
    }
    return ans;
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

    cout<<SuperiorArrayElement(arr,n)<<endl;
 
 
 return 0;
}