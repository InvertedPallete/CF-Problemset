//  
//  Laptops
//      
//  03/07/2024
//
//  Code By Gunjit
//
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i,n) for(int i=0; i<n; i++)


bool compareFirst(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    return a.first < b.first;
}

string solve()
{  
   int n;
   cin >> n;
   vector<pair<int,int>> v;

   for(int i = 0; i<n ;i++)
   {
        int first, second;
        cin >> first >> second;
        v.emplace_back(first, second);
   }

   sort(v.begin(), v.end(), compareFirst);

   for(int i = 0; i < n-1; ++i)
   {
    if(v[i].second > v[i+1].second)
    {
        return "Happy Alex";
    }
   }
   
   return "Poor Alex";
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
    string ans = solve();
    cout << ans <<endl;
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