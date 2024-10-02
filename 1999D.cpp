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
        string s,t;
        cin >> s >>t;
        int i = 0,j=0;
        int n = s.size();
        while(i <= n){
            if(s[i] == t[j])    j++;
            else if(s[i] == '?'){
                if( j < t.size()){
                s[i] = t[j];
                j++;
                }

                else{
                    s[i] = 'a';
                }
            }
            i++;
        }

        if(j > t.size())    cout << "YES" << endl << s <<endl;
        else cout << "NO" <<endl;
 
    }
 
    return 0;
}