//
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
        int n;
         cin>>n;
         vector<int> v;

         for (int i = 0; i < n; i++)
         {
            int a;
            cin>> a;
            v.push_back(a);
         }

         sort(v.begin() ,v.end());
            int count = 0;
         for (int i = 0; i < n-1 ; i++)
         {
            if(v[i+1] <= v[i])
            {
                cout << "NO" <<endl;
                break;
            }
            count++;
         }

         if(count == n-1)
         {
            cout << "YES" << endl;
         }
         
         
        

    }
    return 0;
}