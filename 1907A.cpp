//
//  04/02/2024
//  
//  @itachi52730
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin >> s;
        string t = s;
        // cout << s << t <<endl;
        for(int i = 1; i <= 8; i++ )
        {
            string q = to_string(i);
            t[1] = q[0];
            if(t != s)
            {
                cout << t << endl;
            }
        }
        t = s;
        for(int i = 97; i<=104 ; i++)
        {
            t[0] = char(i);
            if(t != s)
            {
                cout << t << endl;
            }
        }
    }
    return 0;
}