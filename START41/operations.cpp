#include<iostream>
using namespace std;
int solve(int a, int b){
    int count=0;
    while(a!=b){
        if(a<b){
            return b-a;
        }
        else{
            if((a-b)%2==0){
                return (a-b)/2;
            }
            else{
                return (a-b)/2+2;
            }
        }
    }
    return count;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        cout<<solve(x,y)<<endl;
    }
    return 0;
}