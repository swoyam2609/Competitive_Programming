#include<iostream>
using namespace std;
void solve(int);
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        solve(m);
        cout<<endl;
    }
}
void solve(int n){
    cout<<n-1<<" "<<n<<" "<<n+1;
    return;
}