//  cAPS lOCK
//
//  14/02/2024
//  
//  code by @itachi52730
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    if(s[0] > 90)
    {
        s[0] -= 32;
    }

    for(int i = 1; i< s.length() ; i++)
    {
        if(s[i] <= 90)
        {
            s[i] += 32;
        }
    }

    cout << s << endl;
    return 0;
}