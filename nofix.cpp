#include<iostream>
#include<vector>
using namespace std;
int solve(vector<int> arr, int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==i+1){
            arr.insert(arr.begin()+i, i+1);
            arr[i]=i;
            count++;
            n++;
        }
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int ele;
        vector<int> arr;
        int l;
        cin>>l;
        for(int j=0;j<l;j++){
            cin>>ele;
            arr.push_back(ele);
        }
        cout<<solve(arr,l)<<endl;
    }
    return 0;
}