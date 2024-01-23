//
//  23/01/2024
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
        int x;
        cin>>x;
        int n,digit = 1;
        n = x%10;
        while(x > 9)
        {
            digit++; 
            x = x/10;
        }
        
        int ans = (n-1)*10;
        while(digit > 0)
        {
            ans = ans + digit;
            digit--;
        }
        cout <<ans <<endl;
    }
    return 0;
}