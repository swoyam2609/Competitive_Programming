#include <iostream>
#include <string>
using namespace std;
int countC(string s)
{
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'C')
        {
            count++;
        }
    }
    return count;
}
int countD(string s)
{
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'D')
        {
            count++;
        }
    }
    return count;
}
int countN(string s)
{
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'N')
        {
            count++;
        }
    }
    return count;
}
unsigned long long calculate(unsigned long long x, int c, int n, int d)
{
    int chef = n * 2 + d;
    int carl = c * 2 + d;
    if (carl > chef)
    {
        return 60 * x;
    }
    else if (carl == chef)
    {
        return 55 * x;
    }
    else
    {
        return 40 * x;
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        unsigned long long x;
        string s;
        cin >> x >> s;
        cout << calculate(x, countC(s), countN(s), countD(s)) << endl;
    }
    return 0;
}