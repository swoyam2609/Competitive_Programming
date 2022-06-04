#include<iostream>
using namespace std;
int solve(int x, int y, int z){
    return (x*5 + y*10)/8;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        cout<<solve(x,y,z)<<endl;
    }
    return 0;
}