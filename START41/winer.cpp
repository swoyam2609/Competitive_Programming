#include<iostream>
using namespace std;
void solve(int a, int b, int c, int d){
    int p = max(a,b);
    int q=max(c,d);
    if(p<q){
        cout<<"P"<<endl;
    }
    else if(p>q){
        cout<<"Q"<<endl;
    }
    else{
        cout<<"TIE"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        solve(a,b,c,d);
    }
    return 0;
}