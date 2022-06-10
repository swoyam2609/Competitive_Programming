#include<iostream>
using namespace std;
bool solve(int n, int k){
    if(n%2==0){
        return true;
    }
    else{
        if(k==1){
            return true;
        }
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(solve(n,k)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}