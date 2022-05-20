#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int max;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            if(a>0){
                max=i;
            }
        }
        cout<<max<<endl;
    }

}