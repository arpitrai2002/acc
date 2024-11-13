#include <iostream>
#include <vector>
#include<limits.h>
using namespace std;

pair<int,int> MaxPair(int arr[], int n) {
    pair<int,int> ans={0,0};
    int maxpod=INT_MIN;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == 18){
                int temp=arr[i]*arr[j];
                if(temp>maxpod){
                    maxpod=temp;
                    ans.first=arr[i];
                    ans.second=arr[j];
                }
            }
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    pair<int,int> result = MaxPair(arr, n);
    if(result.first<result.second){
        swap(result.first,result.second);
    }
    cout<<result.first<<" "<<result.second<<endl;
    return 0;
}
