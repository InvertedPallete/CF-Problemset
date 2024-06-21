//  
//
//      
//  18/06/2024
//
//  Code By Gunjit
//
#include<bits/stdc++.h>
using namespace std;

#define ll                  long long
#define vi                  vector<int>
#define f(i,n)              for(int i=0; i<n; i++)

void solve()
{  
        int n,k;
		cin>>n>>k;
		vi a;
		if(n%2)
		{
			if(k%2==0 || k>n)
				cout<<"NO"<<endl;
			else
			{
				cout<<"YES"<<endl;
				cout<<n-k+1;
				for(int i=1;i<k;i++)
					cout<<" "<<1;
				cout<<endl;
			}
		}
		else
		{
			if(k>n || (k>n/2 && (k%2)))
				cout<<"NO"<<endl;
			else
			{
				cout<<"YES"<<endl;
				if(k<=(n/2))
				{
					cout<<n-(k-1)*2;
					for(int i=1;i<k;i++)
						cout<<" "<<2;
					cout<<endl;
				}
				else
				{
					cout<<n-k+1;
					for(int i=1;i<k;i++)
						cout<<" "<<1;
					cout<<endl;
				}
            }
        }
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