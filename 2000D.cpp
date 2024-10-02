/*
author gunjit
date 19/08/2024
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define f(i,n) for(ll i = 0; i < n; i++)
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;

    while (t--) { 
        int n;
        cin>> n;

        vector<int>v(n);
        vector<ll>prefixsum(n);
        /*  //prefixsum = prefixsum
            f(i,n){
            cout << prefixsum <<endl
            }
        */
        for(int i = 0; i < n; i++)  cin >>v[i];

        for(int i =0; i <n;i++){
            prefixsum[i] = v[i];
            if(i !=0)
                prefixsum[i] += prefixsum[i - 1];
        }
        string  s;
        cin>>s;
        ll ans = 0;
        int l = 0, r = n - 1;

        while(l < r){
            if (s[l] != 'L') {
                l++;
                continue;
            }
            if (s[r] != 'R') {
                r--;
                continue;
            }
            if (l != 0) {
                ans += prefixsum[r]-prefixsum[l-1];
            } else {
                ans += prefixsum[r];
            }
                s[l] =s[r]= '.';
        }

        // for (int i = 0; i < r; i++)
        // {
        //     cout << prefixsum[i];
        // }

        cout << ans << endl;
    }
    return 0;
}