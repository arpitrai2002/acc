#include<iostream>
using namespace std;

int DigitSumDifference(int m,int n){
    int sum4=0,sum7=0,sum=0;
    for(int i=m;i<=n;i++){
        if(i%4==0){
            int temp=i;
            int s=0;
            while(temp){
                int rem=temp%10;
                s+=rem;
                temp/=10;
            }
            sum4+=s;
        }
        else if (i%7==0)
        {   int temp=i;
            int s=0;
            while(temp){
                int rem=temp%10;
                s+=rem;
                temp/=10;
            }
            sum7+=s;
        }
    }
    sum=abs(sum4-sum7);
    return sum;
}
 
int main(){
    int m,n;
    cin>>m;
    cin>>n;
    cout<<DigitSumDifference(m,n)<<endl;
 
 return 0;
}