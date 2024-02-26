//
//  26/02/2024
//  
//  @itachi52730
//
#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
   ll int n,k;
   cin >> n >> k;

   int m;
   if(n%2 == 0)
   {
     m = n/2;
   }
   else
   {
    m = (n+1)/2;
   }

    if(k<=m)
    {
        cout << 2*k - 1 << endl;
    }

    else
    {
        cout << 2*(k-m) << endl;
    }

    return 0;

}