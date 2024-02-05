//
//  05/02/2024
//  
//  @itachi52730
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
        cin >>n;
        int v[100] = {0};

        string s;
        cin >> s;

        for(int i = 0 ; i< s.length(); i++)
        {
            v[s[i]]++;
            // cout<< v[s[i]];
        }
        int count = 0;
        for(int i = 65; i < 92 ; i++)
        {
            // cout << v[i] << " ";
            if(v[i] >= i - 64)
            {
                count++;
            }
        }
        cout << count <<endl;
    }
    return 0;
}