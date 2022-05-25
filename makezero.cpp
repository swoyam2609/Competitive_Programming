#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, bit[32]={};
        cin>>n;
        for(int i=0;i<n;i++){
            int a,j=0;
            cin>>a;
            while(a){
                if(bit[j]==0){
                    bit[j]=a%2;
                }
                a/=2;
                j++;
            }
        }
        int ans=0;
        for(int i=0;i<32;i++){
            ans+=bit[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}