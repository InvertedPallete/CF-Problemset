//
//  12/02/2024
//  
//  code by @itachi52730
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
        vector<int> v;
        int min_num;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        min_num = v[0];
        // cout << min_num <<endl;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            v[i] = v[i] - min_num;
            sum += v[i];
        }

        cout << sum << endl;

    }
    return 0;
}