#include <bits/stdc++.h>  
using namespace std;
 
#define f(i,n) for(ll i = 0; i < n; i++)
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    fast_cin();
    long long t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if (n == 1) {
            cout << 0 << endl;
            continue;
        }
        for (int i = 0; i < n; i++) {
            if (i == n / 2) 
                cout << 1;
            else
                cout << 0;
        }
        cout << endl;
    
    }
 
    return 0;
}
 
 
 
 
/* Most A problems are only pattern, maths & greedy 
Problem B is more diverse, use greedy, binary-search, prefix-sum, little bit dp and recursion 
 how are you*/