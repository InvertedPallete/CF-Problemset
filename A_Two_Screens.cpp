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
        string s,t;
        cin>> s>> t;
        int cnt = 0;
        for( int i = 0;i <min(s.size(),t.size());i++){
            if(s[i] != t[i])    
                break;
            cnt++;
        }
        
        int ans = (cnt+1)+(s.size()-cnt)+(t.size()-cnt);
        if(cnt == 0) cout << ans-1<<endl;
        
        else cout << ans <<endl;
 
    }
 
    return 0;
}
 
 
 
 
/* Most A problems are only pattern, maths & greedy 
Problem B is more diverse, use greedy, binary-search, prefix-sum, little bit dp and recursion 
 how are you*/