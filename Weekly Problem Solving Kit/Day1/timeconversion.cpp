#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    if(s.substr(8,2)=="AM"){
        if(stoi(s.substr(0,2))==12){
            return "00" + s.substr(2,6);
        }
        else{
            return s.substr(0,8);
        }
    }
    else{
        if(stoi(s.substr(0,2))==12){
            return s.substr(0,8);
        }
        else{
            return to_string(stoi(s.substr(0,2))+12) + s.substr(2,6);
        }
    }
}

int main()
{
    string s;
    cin>>s;
    cout<<timeConversion(s);
}
