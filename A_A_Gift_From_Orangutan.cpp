#include <bits/stdc++.h>  
using namespace std;
 
#define f(i,n) for(ll i = 0; i < n; i++)
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
int main()
{
    
    fast_cin();
    long long t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        set<int> s;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            s.insert(x);
        }
        auto mini = *s.begin();
        auto maxi = *s.rbegin();
        long long ans = 1LL * (maxi - mini) * (n - 1);
        cout << ans << endl;
    }
 
    return 0;
}
 
 
 
 
/* Most A problems are only pattern, maths & greedy 
Problem B is more diverse, use greedy, binary-search, prefix-sum, little bit dp and recursion 
 how are you*/

