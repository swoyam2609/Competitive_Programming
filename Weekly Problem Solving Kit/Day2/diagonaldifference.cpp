#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int sum1=0, sum2=0;
    for(int i=0;i<n;i++){
        sum1+=arr[i][i];
        sum2+=arr[n-1-i][i];
    }
    if(sum2>sum1){
        cout<<sum2-sum1;
    }
    else{
        cout<<sum1-sum2;
    }
    return 0;
}