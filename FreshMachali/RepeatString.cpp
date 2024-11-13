#include<iostream>
#include<string>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;

    string result;
    for(int i=0;i<n;i++){
        result+=str;
    }
    cout<<result<<endl;
 return 0;
}