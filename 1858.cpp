
//  Buttons
//
//  13/02/2024
//  
//  code by @itachi52730
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b,c;
        cin >> a >> b >> c;

        int max_cnt = max(a,max(b,c));

        if(max_cnt == c)
        {
            if(c%2 == 0)
            {
                cout << "Second" << endl;
            }
            else
            {
                cout << "First" << endl;
            }
        }
        else if(max_cnt == a )
        {
            cout << "First" << endl;
        }

        else
        {
            cout << "Second" << endl;
        }
    }
    return 0;
}