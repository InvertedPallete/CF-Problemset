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

   vector< long long int> v;

   for(long long int i = 0; i<n ;i++)
   {
        long long int num = i + 1;
        if(num % 2 != 0)
        {
            v.push_back(num);
        }

   }

   
   for(long long int i = 0; i<n ;i++)
   {
        long long int num = i + 1;
        if(num % 2 == 0)
        {
            v.push_back(num);
        }

   }

   cout<< v[k-1] << endl;
    return 0;
}