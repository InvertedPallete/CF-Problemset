#include <bits/stdc++.h>  
using namespace std;
 
#define f(i,n) for(ll i = 0; i < ; i++)
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
    while (t--) {
        string s;
        cin >> s;
        vector<int> cnt(2, 0);

        for (char c : s) {
            cnt[c - '0']++;
        }

        for (int i = 0; i <= s.length(); i++) {
            if (i == s.length() || cnt[1 - (s[i] - '0')] == 0) {
                cout << s.length() - i << endl;
                break;
            }
            cnt[1 - (s[i] - '0')]--;
        }
    }
 
    return 0;
}