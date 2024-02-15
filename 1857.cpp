//  
//  Array coloring
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
        int sum = 0;
        for(int i =0 ; i <n; i++)
        {
            int a;
            cin >> a;
            sum += a;
            v.push_back(a);
        }

        // cout << sum <<endl;
        int n1 = sum;
        int n2 = 0;

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            n1 -= v[i];
            n2 += v[i];

            if ( (n1%2==0) && (n2%2 == 0) )
            {
                // cout << i<< endl;
                cout << "YES" << endl;
                break;
            }

            count++;
        }
        
        if(count == n)
        {
            cout << "NO" << endl;
        }


    }
    return 0;
}