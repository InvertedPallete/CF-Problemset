#include <bits/stdc++.h>  
using namespace std;

#define f(i,n) for(ll i = 0; i < n; i++)
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
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
        int n;
        cin >> n;
        vector<int> ans(n,1);
        for( int i = 0; i < n; i++)  ans[i] = i+1;

        for(int i = 0; i <n;i++){
            cout << ans[i] <<" ";
        }

        cout <<endl;
        
 
    }
 
    return 0;
}