//
//  27/01/2024
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
        cin >> n;   
        int sum = 0;
        int check = 0;
        int a[n];
        for( int i = 0; i<n ; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

         if(sum % 2 != 0)
        {
            cout << "NO" << endl;
            break;
        }

        int flag = sum/2;

        for(int i = 0; i < n; i++ )
        {
            if(check == flag)
            {
                break;
            }

            if(a[i] <= flag)
            {
                check += a[i];
            }
            
        }
        cout << check << endl;
        if(check == flag)
        {
            cout<< "YES" <<endl;
        }

    
        else 
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}