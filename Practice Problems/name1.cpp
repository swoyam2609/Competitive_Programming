#include<bits/stdc++.h>
using namespace std;
bool solve(string parents, string children){
    sort(parents.begin(), parents.end());
    sort(children.begin(), children.end());
    for(int i=0;i<children.size();i++){
        int temp=parents.find(children.substr(i,1));
        if(temp==-1){
            return false;
        }
        else{
            parents[temp]='0';
        }
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        string parents=a+b;
        int n;
        cin>>n;
        string children="", temp;
        for(int i=0;i<n;i++){
            cin>>temp;
            children+=temp;
        }
        if(solve(parents,children)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}