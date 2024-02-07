//
//  07/02/2024
//  
//  @itachi52730
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int temp = 0;
    int count = 0;

    for(int i =0 ; i< s.length(); i++)
    { 
        if(s[i] != s[i+1])
        {
            count = 0;
        }
        else
        {
            count++;
        }

        if(count == 6)
        {
            cout << "YES" << endl;
            break;
        }
        temp++;
    }

    if(temp == s.length())
    {
        cout << "NO" << endl;
    }

    return 0;
}