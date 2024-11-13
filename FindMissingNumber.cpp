#include<iostream>
#include<vector>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    vector<int> arr;

    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    n+=1;
    int tsum=((n+1)*n)/2;
    int sum=0;
    for(int c:arr){
        sum+=c;
    }

    cout<<tsum-sum<<endl;
 
 
 
 
 
 return 0;
}