//  Vus the Cossack and a Contest
//
//  09/03/2024
//  
//  code by Gunjit Dhakar
//
#include<bits/stdc++.h>
using namespace std;

#define f(i,n) for (int i = 0; i < n; i++)

int main()
{
    int n,m,k;
    cin >> n >> m>> k;
    if (( (m-n) < 0) || ((k-n) < 0) )
    {
        cout << "NO" << endl;
    }

    else
    {
        cout << "YES" << endl;
    }
    return 0;
}