#include<iostream>
using namespace std;
void solve(int n, int k, int arr[]){
    for(int i=0;i<n;i++){
        if(arr[i]<=k){
            cout<<"1";
            k-=arr[i];
        }
        else{
            cout<<"0";
        }
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        solve(n,k,arr);
    }
    return 0;
}