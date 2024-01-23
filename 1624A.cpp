//
//  23/01/2024
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
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }

        sort (a,a+n);
        int max = a[n-1];

        for(int i = 0; i<n ; i++ )
        {
            a[i] = max - a[i];

            if(a[i] < 0)
            {
                a[i] = a[i] * (-1);
            }
        }        

        sort(a,a+n);
        cout<< a[n-1] << endl; 
    }
    return 0;
}