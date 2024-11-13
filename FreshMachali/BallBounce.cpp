#include<iostream>
#include<math.h>
using namespace std;
 
int main(){
    int H,V,Vn;
    cin>>H;
    cin>>V;
    cin>>Vn;

    int En=V/Vn;
    int ans=H*pow(En,2);

    cout<<ans<<endl;
 
 return 0;
}