//  K-th Not Divisible by n 
//      
//  17/06/2024
//
//  Code By Gunjit
//
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i,n) for(int i=0; i<n; i++)

void solve()
{  
   ll n,k;
		cin>>n>>k;
		ll total=k,ex=k;
		while(1)
		{
			total+=(ex/n);
			//cout<<total<<endl;
			ex=(ex/n)+(ex%n);
			if(ex<n)
				break;
		}
		cout<<total<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;

    while(t--)
    {
       solve();
    }

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