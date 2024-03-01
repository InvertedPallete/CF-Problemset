//
//
//  29/02/2024
//  
//  code by Gunjit Dhakar
//
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,n) for(int i = 0; i < n; i++)

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        // int n;
        // cin >> n;

        // vector<int> v;

        // f(i,n)
        // {
        //     int a;
        //     cin >> a;
        //     v.push_back(a);
        // }

        // int ans = 1;

        // int s = 0, e = n-1;
        // set<int> w;
        // sort(v.begin(), v.end());
        // while(s < e)
        // {
        //     if( (v[e] - v[e-1]) >= n )
        //     {
        //         e = e -1;
        //         continue;
        //     }

        //     if( ( (v[e]-v[s]) + 1<= n ) && (v[e]-v[s] != 0) )
        //     {
        //         w.insert( (v[e] - v[s]) + 1 );
        //     }

        //     s++;
        // }

        // cout << w.size() + 1 << endl;


        // Lower bound approach

        ll n;
        cin>>n;
        vector<int> v(n);
        for(int i = 0; i < n; i++)cin>>v[i];
        set<ll> s;
        for(int i = 0; i < n; i++)
        {
            s.insert(v[i]);
        }
        vector<ll> v2;
        for(auto &i : s)
        {
            v2.push_back(i);
        }
        ll ans = 0;
        for(int i = 0 ; i < v2.size(); i++)
        {
            auto it = lower_bound(v2.begin(),v2.end(),v2[i]+n);
            ll d = it-v2.begin()-i;
            ans = max(ans,d);
        }
        cout << ans << endl;
        
    }
    return 0;
}