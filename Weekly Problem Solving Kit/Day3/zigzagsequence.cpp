#include <bits/stdc++.h>
using namespace std;

void findZigZagSequence(vector < int > arr, int n){
    sort(arr.begin(), arr.end());
    for(int i=0;i<n/2;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=n-1;i>=n/2;i--){
        if(i==n/2){
            cout<<arr[i];
            break;
        }
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int n, x;
    int test_cases;
    cin >> test_cases;

    for(int cs = 1; cs <= test_cases; cs++){
        cin >> n;
        vector < int > a;
        for(int i = 0; i < n; i++){
            cin >> x;
            a.push_back(x);
        }
        findZigZagSequence(a, n);
    }
}



