#include <iostream>
#include <string>
using namespace std;
int count0(string s)
{
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            count++;
        }
    }
    return count;
}
int count1(string s)
{
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            count++;
        }
    }
    return count;
}
bool check1(string s)
{
    if (s.size() == 1 || s.size() == 2)
    {
        return true;
    }
    int zero = count0(s);
    int one = count1(s);
    if (zero == one)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool check0(string s)
{
    int zero = count0(s) % 2;
    int one = count1(s) % 2;
    if (zero == 1 and one == 1)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        string s;
        cin >> a >> s;
        if (check1(s) || check0(s))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}