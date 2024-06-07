// 
//  Phoenix and Balance
//      
//  07/06/2024
//
//  Code By Gunjit
//
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i,n) for(int i=0; i<n; i++)

void solve()
{   
        int N,K;
    cin>>N>>K;
    set<int>s;
    for (int i=0;i<N;i++)
    {
        int a;
        cin>>a;
        s.insert(a);
    }
    if (s.size()>K)
    {
        cout<<"-1"<<endl;
        return;
    }
    cout<<N*K<<endl;
    for (int i=0;i<N;i++)
    {
        for (int b:s)
        cout<<b<<' ';
        for (int j=0;j<K-(int)s.size();j++)
        cout<<1<<' ';
    }
    
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll int t;
    cin >> t;

    while(t--)
    {
       solve();
    }

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