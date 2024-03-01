//  Shuffle Party
//
//  01/03/2024
//  
//  code by Gunjit Dhakar
//
#include<bits/stdc++.h>
using namespace std;

#define f(i,n) for (int i = 0; i < n; i++)

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>> n;

        long long ans = log2(n);
        long long g = pow(2,ans);
        cout << g << endl;
    }
    return 0;
}