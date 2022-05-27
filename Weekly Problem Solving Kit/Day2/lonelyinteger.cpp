#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    cin>>arr[0];
    int ele=arr[0];
    for(int i=1;i<n;i++){
        cin>>arr[i];
        ele=ele^arr[i];
    }
    cout<<ele;
    return 0;
}