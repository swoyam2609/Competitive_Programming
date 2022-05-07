#include<iostream>
using namespace std;
void solve(char* arr, int n){
    for(int i=0;i<n/2;i++){
        char temp=*(arr+i);
        *arr=*(arr+n-1-i);
        *(arr+n-1-i)=temp;
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int l,p;
        cin>>l>>p;
        char str[l];
        for(int a=0;a<l;a++){
            cin>>str[a];
        }
        for(int a=p;a>0;a--){
            solve(str, a);
        }
        for(int a=0;a<l;a++){
            cout<<str[a];
        }
        cout<<endl;
    }
    return 0;
}