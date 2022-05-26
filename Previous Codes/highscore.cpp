#include<iostream>
using namespace std;
int solve(int arr[], int n){
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[4];
        for(int i=0;i<4;i++){
            cin>>arr[i];
        }
        cout<<solve(arr,4)<<endl;
    }
    return 0;
}