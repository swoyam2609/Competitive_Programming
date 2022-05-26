#include <iostream>
using namespace std;
int main() {
	// your code goes here
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int size;
        cin>>size;
        cout<<2<<" ";
        for(int j=1;j<size;j++){
            cout<<2*j+1<<" ";
        }
        cout<<endl;
    }
	return 0;
}
