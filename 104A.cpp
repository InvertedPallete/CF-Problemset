//
//  26/01/2024
//  
//  @itachi52730
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n-10 == 0)
    {
        cout << 0 <<endl;
    }
    else if( ( n-10 > 0 ) && (n-10 < 10) )
    {
        cout << 4 <<endl;
    }
    else if(n - 10 == 10)
    {
        cout << 15 <<endl;
    }
    else if (n-10 == 11)
    {
        cout << 4 <<endl;
    }
    else
    {
        cout << 0 << endl;
    }
    return 0;
}