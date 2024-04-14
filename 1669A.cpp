//
//
//  10/03/2024
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
        int n;
        cin >> n;

        vector<int> a(n);
        vector<int> ans = {0};
        for(int i = 0; i < n ; i ++)
        {
            cin >> a[i];
        }

        for(int i = 0; i < n ; i ++)
        {
            ans[a[i]]++;
        }
        int cnt = 0;
        for(int i = 0; i < n ; i ++)
        {
            if(ans[i] >= 3)
            {
                cout<< i << endl;
                break;
            }
            cnt++;
        }
        if(cnt == n)
        {
            cout << -1 <<endl;
        }
        
    }
    
    return 0;
}