#include <bits/stdc++.h>  
using namespace std;
typedef long long ll;

#define f(i,n) for(ll i = 0; i < n; i++)
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)


const int N = 2e5 + 100;
int l[N], r[N], ans;
vector <int> adj[N];


ll DFS(int v){
	ll sum = 0;
	for (int u : adj[v]){
		sum += DFS(u);
	}
	if (sum < ll(l[v])){
		++ ans;
		return r[v];
	}
	return min(ll(r[v]), sum);
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
        int n;
        cin >> n;
		for (int i = 2; i <= n; ++ i){
			int par;
			cin >> par;
			adj[par].push_back(i);
		}
		for (int i = 1; i <= n; ++ i){
			cin >> l[i] >> r[i];
		}
		ans = 0;
		DFS(1);
		cout << ans << "\n";
		for (int i = 1; i <= n; ++ i){
			adj[i].clear();
		}
    }
 
    return 0;
}
 
 
 
 
/* Most A problems are only pattern, maths & greedy 
Problem B is more diverse, use greedy, binary-search, prefix-sum, little bit dp and recursion 
 how are you*/