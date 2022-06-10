#include<bits/stdc++.h>
using namespace std;
int solve(int n){
    int count=n*n;
    for(int i=3;i<=n;i+=2){
        count+=(n-i+1)*(n-i+1);
    }
    return count;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<solve(n)<<endl;
    }
    return 0;
}