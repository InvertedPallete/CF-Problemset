//  
//  Ilya and Bank Account
//      
//  13/06/2024
//
//  Code By Gunjit
//
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i,n) for(int i=0; i<n; i++)

void solve()
{  
  
    int n;
    cin >> n;
    if (n >= 0)
    {
        cout << n << endl;
    }
    else
    {
        int a = n / 10;
        int b = n / 100 * 10 + n % 10;
        cout << max(a, b) << endl;
    }
 
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    // int t;
    // cin >> t;

    // while(t--)
    // {
    //    solve();
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