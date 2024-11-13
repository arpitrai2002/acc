#include<iostream>
using namespace std;

string StringEO(int arr[],int n){
    string ans="";
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            ans+="Even";
        }
        else{
            ans+="Odd";
        }
    }
    return ans;
}
 
int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<StringEO(arr,n)<<endl;
 
 return 0;
}