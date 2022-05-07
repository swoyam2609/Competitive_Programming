#include<iostream>
using namespace std;
int check(int n, int x, int y){
    int count =0;
    int bx=x, by=y;
    while (bx<=n && by<==n && bx>0 && by>0)
    {
        count++;
        bx--;by--;
    }
    bx=x;by=y;
    while (bx<=n && by<==n && bx>0 && by>0){
        count++;
        bx++;by++;
    }
    
}