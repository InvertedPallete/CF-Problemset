#include <bits/stdc++.h>  
using namespace std;
 
#define f(i,n) for(ll i = 0; i < n; i++)
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int solve(vector<int> &v, int n, int k){
    
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    fast_cin();
    long long t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >>k;
        vector<int> v(n);
        for(int i =0 ; i<n ;i++)    cin>>v[i];
        solve(v,n,k);
    }
 
    return 0;
}