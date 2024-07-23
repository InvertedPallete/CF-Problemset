    //  Cards
    //  23/07/2024
    //  Code by Gunjit
    //
    #include <bits/stdc++.h>  
    using namespace std;
    
    typedef long long ll;
    typedef long double ld;
    typedef pair<int,int> p32;
    typedef pair<ll,ll> p64;
    typedef pair<double,double> pdd;
    typedef vector<ll> v64;
    typedef vector<int> v32;
    typedef vector<vector<int> > vv32;
    typedef vector<vector<ll> > vv64;
    typedef vector<vector<p64> > vvp64;
    typedef vector<p64> vp64;
    typedef vector<p32> vp32;
    ll MOD = 998244353;
    double eps = 1e-12;
    #define f(i,n) for(ll i = 0; i < n; i++)
    #define ln "\n"
    #define dbg(x) cout<<#x<<" = "<<x<<ln
    #define mp make_pair
    #define pb push_back
    #define INF 2e18
    #define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
    #define all(x) (x).begin(), (x).end()
    #define sz(x) ((ll)(x).size())
    

    void solve(){
        int n;
        string s;
        cin>>n>>s;
        unordered_map<char,int> m;
        for(int i = 0;i<n; i++){
            m[s[i]]++;
        }
        int cnt1=min(m['n'],min(m['o'],m['e']));
        int cnt0=min(m['z'],m['r']);
        int rem = (m['o']-cnt1,m['e']-cnt1);
        cnt0 = min(rem,cnt0);
        while(cnt1--){
            cout << "1 ";
        }
        while(cnt0--)
        {
            cout << "0 ";
        }
    }
    int main()
    {
        #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        #endif
        fast_cin();
        // ll t;
        // cin >> t;
        // for(int i=1;i<=t;i++) {
        //     solve();
        // }
        solve();
        return 0;
    }





    /*
        // think of greedy algorithm first, Codeforces A,B are usually some sort of greedy and simple 800 - 900 rating
        // C on Div2 and E on Div 3/4 requirs more thinking but still not too hard
        //for later problems think about data structures like segment tree and ordered set
        // try query problems, not good at them
        // try to improve yourthinking and logic building by not giving up 
        // 
        //
        // Keep Grinding —————————————Jai Shree Ram —————————————
    */
