#include<iostream>
#include<string>
using namespace std;

int CharCount(string S,int N,char C){
    int count=0;
    if(S.length()==0){
        return -1;
    }
    for(int i=0;i<N;i++){
        if(S[i]==C){
            count++;
        }
    }
    return count;
}
 
int main(){
    string S;
    int N;
    char C;
    getline(cin,S);
    cin>>N;
    cin>>C;
    cout<<CharCount(S,N,C)<<endl;
 return 0;
}