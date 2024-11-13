#include<iostream>
#include<math.h>
using namespace std;

double SquareRootDifference(int m,int n){
    double odd=0;
    double even=0;
    for(int i=m;i<=n;i++){
        if(i%2==0){
            even+=sqrt(i);
        }
        else{
            odd+=sqrt(i);
        }
    }
    return even-odd;
}
 
int main(){
    int m,n;
    cin>>m;
    cin>>n;
    cout<<SquareRootDifference(m,n)<<endl;
 
 
 
 
 return 0;
}