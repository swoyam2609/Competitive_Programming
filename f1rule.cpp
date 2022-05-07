#include<iostream>
using namespace std;
bool check(double a, double b){
    a=1.07*a;
    if(b<=a){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        double a,b;
        cin>>a>>b;
        if(check(a,b)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}