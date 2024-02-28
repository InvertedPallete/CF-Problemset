//  We got Everything Covered
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
        int n,k;
        cin >> n >> k;

        string s;

        for(int i = 0; i < k; i++)
        {
            for(int j = 0 ; j < n; j++)
            {
                s.push_back(97+i);
            }
        }
        
        cout << s << endl;
    }
    return 0;
}