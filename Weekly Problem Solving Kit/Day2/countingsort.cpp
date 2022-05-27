#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n]={0};
    int ele;
    for(int i=0;i<n;i++){
        cin>>ele;
        arr[ele]++;
    }
    for(int i=0;i<n;i++){
        if(i==100){
            break;
        }
        cout<<arr[i]<<" ";
    }
}