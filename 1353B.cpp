//
//  24/01/2024
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
        int n,k;
        cin>>n>>k;
        int a[n];
        int b[n];
        vector<int> c;
        for(int i = 0; i<n ;i++)
        {
            cin>>a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }

        sort(a,a+n);
        sort(b,b+n);

        for(int i = 0; i < k ; i++)
        {
            if(b[i] > a[i] )
            {
                c.push_back(b[n-i-1]);
            }
            else
            {
                c.push_back(a[i]);
            }
        }

        int sum = 0;

        for(int i = k ; i < n ; i++)
        {
           c.push_back(a[i]);
        }

        for(int i =0 ;i<n ;i++)
        {
            sum += c[i];
        }

        cout<<sum <<"\n";
        
        
    }
    return 0;
}