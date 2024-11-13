#include<iostream>
#include<vector>
#include<string>
#include<limits.h>
using namespace std;
 
int main(){
    vector<string> Team={"Team A", "Team B", "Team C", "Team D", "Team E"};
    vector<int> Score={5,2,3,6,4};

    int max=Score[0];
    int ind=0;

    for(int i=1;i<Score.size();i++){
        if(Score[i]>max){
            max=Score[i];
            ind=i;
        }
    }

    cout<<Team[ind]<<endl;
 
 
 return 0;
}