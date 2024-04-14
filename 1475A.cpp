//
//
//  18/03/2024
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
    int cnt = 0;
    while(t--)
    {
        long long int  n;
        cin >> n; 
        int cnt = 0;
        while(n > 1)
        {
            if(n % 2 !=0)
            {
                cout << "YES" <<endl;
                cnt = 0;
                break;
            }
            n = n/2;
            cnt++;
        }
        if(cnt > 0)
            cout << "NO"<< endl;
    }
    
    return 0;
}