#include<iostream>
using namespace std;
int solve(int x, int y, int z){
    int ans=(x-y)*z;
    if(ans>0){
        return ans;
    }
    else{
        return 0;
    }
}
int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        cout<<solve(a,b,c)<<endl;
    }
    return 0;
}