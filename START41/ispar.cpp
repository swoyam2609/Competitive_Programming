#include <iostream>
using namespace std;
void solve(unsigned long long a, unsigned long long b)
{
    if (b == 1 && a % 2 == 1)
    {
        cout << "ODD" << endl;
    }
    else
    {
        cout << "EVEN" << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unsigned long long a, b;
        cin >> a >> b;
        solve(a, b);
    }
    return 0;
}