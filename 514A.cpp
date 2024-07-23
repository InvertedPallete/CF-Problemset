//  
//  Chewbaсca and Number
//      
//  02/07/2024
//
//  Code By Gunjit
//
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i,n) for(int i=0; i<n; i++)

void solve()
{  
   ll n;
   cin >> n;
   ll digit;
   ll ans = 0;
   ll i = 0;
   while(n > 9)
   {
        digit = n%10;
        if(digit > 4)
        {
            digit = 9 - digit;
        }
        digit *= pow(10,i);
        ans += digit;
        i++;
        n /= 10;
   }
   if(n > 4 && n !=9) {
    digit = 9 - digit;
   }
   ans += digit*pow(10,i);
   cout << ans <<endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    // ll t;
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