//  Jai Shree Ram
//
//  02/06/2024
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
        int l,r;
        cin >> l >> r;
        for(int i = 1; i < r; i++)
        {
            if(pow(2,i) > r)
            {
                cout << i-1 << endl;
                break;
            }
        }
    }
    
    return 0;
}