    #include<iostream>
    using namespace std;
    int answer(int n){
        int coins=n*50;
        return 0.3*coins+1;
    }
    int main(){
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            cout<<answer(n)<<endl;
        }
        return 0;
    }