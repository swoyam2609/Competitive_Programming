#include <iostream>
using namespace std;
bool check(long int a, long int b, long int x, long int y)
{
    if (x * y >= a * b)
    {
        return true;
    }
    return false;
}
int main()
{
    long int n;
    cin >> n;
    for (long int i = 0; i < n; i++)
    {
        long int a, b, x, y;
        cin >> a >> b >> x >> y;
        if (check(a, b, x, y))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}