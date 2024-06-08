// 
//  Registration system 
//      
//  08/06/2024
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
    unordered_map<string , int> m;

    for(int i = 0 ; i < n; i++)
    {
        string s;
        cin >> s;
        m[s]++;
        if(m[s] > 1)
        {
            string temp;
            string temp2 = to_string(m[s]-1);
            temp = s + temp2;
            cout << temp << endl;
            m[temp]++;
        }
        else
        {
            cout << "OK" << endl;
        }
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