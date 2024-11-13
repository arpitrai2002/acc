#include<iostream>
#include<math.h>
using namespace std;

bool CheckPrime(int m){
    if(m<2){
        return false;
    }
    if(m==2){
        return true;
    }

    for(int i=2;i<=(sqrt(m)+1);i++){
        if(m%i==0){
            return false;
        }
    }
    return true;
}

int CalculatePrimeSum(int m,int n){
    int sum=0;
    for(int i=m;i<=n;i++){
        if(CheckPrime(i)){
            sum+=i;
        }
    }
    return sum;
}
 
int main(){
    int m,n;
    cin>>m;
    cin>>n;
    cout<<CalculatePrimeSum(m,n)<<endl;

 
 
 
 
 
 return 0;
}