#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        int ans=0;
        for(int i=0;i<n/2;i++){
            if(s[i]!=s[n-i-1]){
                ans++;
            }  
        }
        cout<<(ans+1)/2<<endl;
    }
}