//  Setting up Camp
//
//  19/03/2024
//  
//  code by Gunjit Dhakar
//
#include<bits/stdc++.h>
using namespace std;

#define f(i,n) for (int i = 0; i < n; i++)

int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int a,b,c;
        cin >> a>> b>> c;

        int ans,temp;
        temp = temp - (3 - (b%3));
        if( (c < 0 ) && (b%3 != 0) )
        {
            cout << -1 << endl;
        }    
        else
        {
            ans = a + b/3 + c/3 +(c%3)/2 + c%2 + 1;
            cout << ans << endl;
        }
    }
    
    return 0;
}