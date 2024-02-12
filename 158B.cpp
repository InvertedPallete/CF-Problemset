//
//  11/02/2024
//  
//  @itachi52730
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    vector<int> v;  
    int b[5] ={0};

    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        b[a]++;
        v.push_back(a);
    }

    


    // for(auto x: v)
    // {
    //     v.push_back(x);
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     sum += v[i];
    // }

    // int ans = sum/4;

    // if(sum%4 == 0)
    // {
    //     cout <<ans<< endl;
    // }
    // else{
    //     cout << ans + 1<< endl;
    // }
    
    return 0;
}