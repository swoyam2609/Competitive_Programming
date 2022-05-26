#include <iostream>
using namespace std;
int solve(int a, int b)
{
    return a * 10 + b * 90;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        cout<<solve(a,b)<<endl;
    }
    return 0;
}