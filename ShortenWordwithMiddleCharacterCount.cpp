#include<iostream>
#include<string>
using namespace std;
 
int main(){
    string a="examination";
    int l=a.size();
    string b=to_string(l-2);
    cout<<a[0]+b+a[l-1]<<endl;
 
 
 
 
 
 return 0;
}