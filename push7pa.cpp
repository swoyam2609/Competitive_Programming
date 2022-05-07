#include<iostream>
using namespace std;
void increase(int arr[], int n, int pos){
    for(int i=0;i<n;i++){
        if(i=pos){
            continue;
        }
        arr[i]++;
    }
}
int search(int arr[], int n, int h){
    for(int i=0;i<n;i++){
        if(arr[i]==h+1){
            return i;
        }
    }
    return -1;
}
int find(int arr[], int n, int pos){
    increase(arr,n,pos);
    int next=search(arr,n,arr[pos]);
    while(next!=-1){
        pos=next;
        increase(arr,n,pos);
        next=search(arr,n,arr[pos]);
    }
    return arr[pos];
}
int solve(int arr[], int n){
    int max=0;
    for(int i=0;i<n;i++){
        if(find(arr, n, i)>max){
            max=find(arr,n,i);
        }
    }
    return max;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<solve(arr, n)<<endl;
    }
    return 0;
}