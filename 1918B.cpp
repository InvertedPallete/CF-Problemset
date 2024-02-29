//
//
//  28/02/2024
//  
//  code by Gunjit Dhakar
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a,b;
        for (int i = 0; i < n; i++)
        {
            int c;
            cin >>c;
            a.push_back(c);
        }

        for (int i = 0; i < n; i++)
        {
            int d;
            cin >>d;
            b.push_back(d);
        }

        for (int i = 1; i <= n; i++)
        {
            cout << i << " ";
        }

        cout <<endl;

        for (int i = 1; i <= n; i++)
        {
            cout << i << " ";
        }

         cout <<endl;
        
    }
    return 0;
}