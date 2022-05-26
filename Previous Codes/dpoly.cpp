#include<iostream>
using namespace std;
int solve(int arr[], int n){
    int deg;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            deg=i;
        }
    }
    return deg;
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
        cout<<solve(arr,n)<<endl;
    }

}