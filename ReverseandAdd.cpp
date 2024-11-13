#include<iostream>
using namespace std;

int ReverseNo(int m){
    int rev=0;
    while(m){
        int rem=m%10;
        rev=rev*10+rem;
        m=m/10;
    }
    return rev;
}

int ReverseAndAdd(int m,int n){
    int sum=0;
    for(int i=m;i<=n;i++){
        int rev=ReverseNo(i);
        sum+=rev;
    }
    return sum;
}
 
int main(){
    int m,n;
    cin>>m;
    cin>>n;
    cout<<ReverseAndAdd(m,n)<<endl;
 
 
 
 
 
 return 0;
}