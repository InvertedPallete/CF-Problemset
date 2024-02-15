//
//  30/01/2024
//  
//  @itachi52730
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,k;
   cin >> n >> k;

   if(k < n/2)
   {
    cout << 2*k - 1<<endl; 
   }
   else if(k > n/2)
   {
    cout << (2*(k-(n/2) - 1 ) ) <<endl;
   }

   else
   {
    if(n%2 == 0)
    {
        cout << 2 <<endl;
    }
    else
    {
        cout<< n <<endl;
    }
   }
    return 0;
}