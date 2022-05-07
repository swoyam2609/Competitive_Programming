#include<iostream>
using namespace std;
int check(int n, int x, int y){
    int right=n-x;
    int left=x-1;
    int up=y-1;
    int down=n-y;
    int upright=right<up?right:up;
    int upleft=left<up?left:up;
    int downleft=left<down?left:down;
    int downright=right<down?right:down;
    
    
    return right+left+up+down+upright+upleft+downleft+downright;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        cout<<check(n,x,y)<<endl;
    }
}