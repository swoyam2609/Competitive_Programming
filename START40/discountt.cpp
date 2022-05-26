#include<iostream>
using namespace std;
bool solve(int n, int x, int y, int arr[]){
    int a=0;
    int b=x;
    for(int i=0;i<n;i++){
        a+=arr[i];
        if(arr[i]-y<0){
            continue;
        }
        else{
            b+=(arr[i]-y);
        }
    }
    if(b<a){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(solve(n,x,y,arr)){
            cout<<"COUPON"<<endl;
        }
        else{
            cout<<"NO COUPON"<<endl;
        }
    }
    return 0;
}