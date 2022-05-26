#include<iostream>
#include<cmath>
using namespace std;
int solve(int n){
    int i=1;
    int count=0;
    if(n==1){
        return 0;
    }
    else if(n==2 || n==3){
        return 1;
    }
    else{
        if(n%2==0){
            int half=n/2;
        }
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