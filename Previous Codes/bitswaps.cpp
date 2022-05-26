#include<iostream>
using namespace std;
bool check(int* arr, int n){
    for(int i=0;i<n;i++){
        int min=arr[i];
        int minpos=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                minpos=j;
            }
        }
        if(arr[i]&arr[minpos]==0 && i!=minpos){
            return false;
        }
        else if(arr[i]&arr[minpos]!=0 && i!=minpos){
            arr[minpos]=arr[i];
            arr[i]=min;
        }
        
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int l;
        cin>>l;
        int arr[l];
        for(int j=0;j<l;j++){
            cin>>arr[j];
        }
        if(check(arr, l)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}