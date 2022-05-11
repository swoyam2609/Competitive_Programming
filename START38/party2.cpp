#include <iostream>
using namespace std;
bool check(int n, int x, int k){
    if(n*x<=k){
        return true;
    }
    return false;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x,k;
        cin>>n>>x>>k;
        if(check(n,x,k)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	// your code goes here
	return 0;
}
