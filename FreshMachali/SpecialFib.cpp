#include<iostream>
using namespace std;

int SpecialFib(int N){
    if(N == 0){
        return 1;
    }
    if(N == 1){
        return 1;
    }
    
    int f[N+1];
    f[0] = 1;
    f[1] = 1;

    for(int i = 2; i <= N; i++){
        f[i] = (f[i-1] * f[i-1] + f[i-2] * f[i-2]) % 47;
    }

    return f[N];
}

int main(){
    cout << SpecialFib(10) << endl;
    return 0;
}
