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
        int n, a[10000];
        ll int ans=0,sum1=0,sum2=0;
        int div=0;
        cin>>n;
        int k=0;
        for(int i=1; i<=n; i++){
            a[k++]=pow(2,i);
        }

//        if(n==2){
//            cout<<2<<endl;
//            continue;
//        }
        div=n/2;
        sum1=a[n-1];
        for(int i=0; i<=div-2; i++){
            sum1+=a[i];
        }
        for(int i=div-1; i<n-1; i++){
            sum2+=a[i];
        }
//        cout<<sum1<<" "<<sum2<<endl;
        ans = abs(sum1 - sum2);
        cout<<ans<<endl;
        //  
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