//
//
//  17/02/2024
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
        int n;
         cin >>n;

         vector<int> v;

         for (int i = 0; i < n; i++)
         {
            int a;
            cin >> a;
            v.push_back(a);
         }

         sort(v.begin(),v.end());

         v[0]++;
        int ans = 1;
         for (int i = 0; i < n; i++)
         {
            ans *= v[i];
         }

         cout << ans << endl;
         
         
        

    }
    return 0;
}