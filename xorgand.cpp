#include<iostream>
using namespace std;
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
        int q;
        cin>>q;
        while(q--){
            int l,r,x;
            cin>>l>>r>>x;
            l--;r--;
            int count=0;
            for(int i=l;i<=r;i++){
                if((arr[i]^x)>(arr[i]&x)){
                    count++;
                }
            }
            cout<<count<<endl;
        }
    }
    return 0;
}