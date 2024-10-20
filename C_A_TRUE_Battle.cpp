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
        vector<int> b(n);
        
        for (int i = 0; i < n; ++i) {
            char c;
            cin >> c;
            b[i] = c - '0';
        }
        
        bool win = false;
        
        for (int i = 0; i < n; ++i) {
            if (b[i] == 1) {
                if (i == 0 || i == n - 1 || (i > 0 && b[i - 1] == 1) || (i < n - 1 && b[i + 1] == 1)) {
                    win = true;
                    break;
                }
            }
        }
        
        cout << (win ? "YES" : "NO") << "\n";
    }
 
    return 0;
}
 
 
 
 
/* Most A problems are only pattern, maths & greedy 
Problem B is more diverse, use greedy, binary-search, prefix-sum, little bit dp and recursion 
 how are you*/