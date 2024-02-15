//  to my critics
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
        int a, b, c;
        cin >> a >> b >> c;

        if ( (a+b >= 10) || (b+c>= 10) || (c+a >= 10) )
        {
            cout << "YES" <<endl;
        }
        
        else
        {
            cout << "NO" <<endl;
        }

    }
    return 0;
}