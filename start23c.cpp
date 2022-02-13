#include <iostream>
#include<string>
using namespace std;
int solve(string arr, int n, int chutti){
    int start=0;
    while(arr[start]!='0'){
        start++;
    }
    bool found1=false;
    int end=start;
    int lastone,newone;
    int itr=start;
    int maxlen=0;
    for(itr=start;itr<n;itr++){
        if(arr[itr]=='0' && itr!=n-1){
            continue;
        }
        else if(arr[itr]=='0' && itr==n-1){
            end=itr-1;
            maxlen=max(maxlen,end-start+1);
            start=end;
            lastone=itr;
        }
        else if(arr[itr]=='1'){
            if(found1==false){
                found1=true;
                lastone=itr;
            }
            else{
                end=itr-1;
                maxlen=max(maxlen,end-start+1);
                start=end;
                lastone=itr;
            }
        }
    }
    return((maxlen+1)/chutti);
}
int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        string s;
        cin>>a>>b>>s;
        cout<<solve(s,a,b)<<endl;
    }
	return 0;
}
