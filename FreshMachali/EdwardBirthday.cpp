#include<iostream>
using namespace std;
 
int main(){
    int m=1000000007;
    int n;
    cin>>n;

    int sum=1;
    while(n!=0){
        sum+=n--;
    }
    cout<<sum%m<<endl;
 
 
 return 0;
}