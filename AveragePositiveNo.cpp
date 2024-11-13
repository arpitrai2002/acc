#include<iostream>
#include<math.h>
using namespace std;
 
int main(){
    int arr[]={-2,6,3,8,-1,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    int sum=0;
    int pos=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            sum+=arr[i];
            pos++;
        }
    }

    float Average=(float)sum/pos;
    cout<<ceil(Average)<<endl;
 return 0;
}