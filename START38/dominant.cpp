#include <iostream>
using namespace std;

bool solve(int a, int b, int c){
    if(a>(b+c) || b>(a+c) || c>(a+b)){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(solve(a,b,c)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	// your code goes here
	return 0;
}
