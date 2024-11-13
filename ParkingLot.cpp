#include<iostream>
using namespace std;
 
int main(){
    int n;
    cin>>n;

    char arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    int i=0,car=0;
    while (i<n-1)
    {
        if(arr[i]=='S' && arr[i+1]=='S'){
            car++;
            i++;
        }
        i++;
    }

    cout<<car*2<<endl;
    
 return 0;
}