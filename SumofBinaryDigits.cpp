#include<iostream>
using namespace std;
 
int main(){
    int n;
    cin>>n;

    int count=0;

    while(n){
        if(n%2==1){
            count++;
        }
        n/=2;
    }
 
    cout<<count<<endl;
 
 
 return 0;
}

// int to srting 
// to_string(num)

// strintg to int
// stoi(num)