#include <bits/stdc++.h>

using namespace std;

int main(){
    unsigned long long arr[5];
    unsigned long long max=0;
    unsigned long long min=INT32_MAX;
    unsigned long long sum=0;
    for(int i=0;i<5;i++){
        cin>>arr[i];
        sum+=arr[i];
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<sum-max<<" "<<sum-min;
    return 0;
}