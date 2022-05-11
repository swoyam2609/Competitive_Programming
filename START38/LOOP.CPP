#include <iostream>
using namespace std;

int mod(int n){
    if(n<0){
        return -1*n;
    }
    return n;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;
        int dis=mod(b-a);
        int dis2=n-mod(b-a);
        if(dis<dis2){
            cout<<dis<<endl;
        }
        else{
            cout<<dis2<<endl;
        }
    }
	// your code goes here
	return 0;
}
