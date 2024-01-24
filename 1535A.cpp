//
//  24/01/2024
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
        int a[4];
        vector<int> v;
        for(int i = 0; i < 4; i++)
        {
            cin>>a[i];
        }

        v.push_back(max(a[0],a[1]));
        v.push_back(max(a[2],a[3]));

        sort(a,a+4);

        if( (v[0] + v[1]) == ( a[2] + a[3]) )
        {
            cout << "YES" <<endl;
        }

        else{
            cout <<"NO" <<endl;
        }
    }
    return 0;
}