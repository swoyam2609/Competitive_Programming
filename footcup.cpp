#include <iostream>
using namespace std;
bool check(int a, int b)
{
    if (a == b && a > 0)
    {
        return true;
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (check(a, b))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}