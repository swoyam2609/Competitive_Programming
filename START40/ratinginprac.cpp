#include<iostream>
using namespace std;
bool solve(int arr[], int n){
    int curr=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<curr){
            return false;
        }
        else{
            curr=arr[i];
        }
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(solve(arr,n)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}