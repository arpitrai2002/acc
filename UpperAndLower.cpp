#include<iostream>
#include<string>
#include<cctype>
using namespace std;
 
int main(){
    string str;
    getline(cin,str);

    int l=0,u=0;

    for(char c:str){
        if(isupper(c)){
            u+=0;
        }
        if(islower(c)){
            l+=0;
        }
    }
    string ans="";
    if(l>u){
        for(char c:str){
            ans+=tolower(c);
        }
    }
    else{
        for(char c:str){
            ans+=toupper(c);
        }
    }

    cout<<ans<<endl;
 
 
 
 
 return 0;
}