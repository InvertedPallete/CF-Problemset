//
//
//  25/02/2024
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
        int n,k;
        cin >> n >> k;

        if(n%2 == 0)
        {
            if(k%2 != 0)
            {
                cout<< "NO" << endl;
            }
            else{
                cout << "YES" <<endl;
            }
        }

        else{
            if(k%2 == 0)
            {
                cout <<"NO" << endl;
            }
            else
            {
                cout <<"YES"<<endl;
            }
        }
    }
    return 0;
}