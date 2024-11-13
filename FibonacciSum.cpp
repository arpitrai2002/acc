#include<iostream>
using namespace std;

int FibonacciSum(int m,int n){
    int a=0,b=1,temp,sum=0;
    while(b<=n){
        if(b>=m){
            sum+=b;
        }
        temp=a+b;
        a=b;
        b=temp;
    }
    return sum;
}
 
int main(){
    int n,m;
    cin>>m;
    cin>>n;

    cout<<FibonacciSum(m,n)<<endl;
 
 
 
 return 0;
}