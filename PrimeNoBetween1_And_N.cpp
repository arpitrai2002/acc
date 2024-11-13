#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

bool CheckPrime(int n){
    if(n==1){
        return false;
    }
    if(n==2){
        return true;
    }
    for(int i=2;i<sqrt(n)+1;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
 
int main(){
    int n;
    cin>>n;

    vector<int> arr;
    for(int i=1;i<=n;i++){
        if(CheckPrime(i)){
            arr.push_back(i);
        }
    }

    for(int c:arr){
        cout<<c<<endl;
    }
 
 return 0;
}