//
//
//  29/02/2024
//  
//  code by Gunjit Dhakar
//
#include<bits/stdc++.h>
using namespace std;

#define f(i,n) for (int i = 0; i < n; i++)

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;

        // 1st approach (maths & manipulation)
        // int cnt = 0;
        // int j = 0;
        // f(i,n)
        // {
        //     if(cnt > 0)
        //     {   
        //         cout << i-j <<" ";
        //         j++;
        //         cnt = 0;
        //     }

        //     else
        //     {
        //         cout << n-i+j<<" ";
        //         cnt ++ ;
                
        //     }
        //  }


        // 2nd approch to print alternate numbers

        int s = 1, e =n;

        while(s<e)
        {
            cout << e << " " << s << " ";
            e--,s++;
        }
        if(s == e)
            cout << s << endl;
        else
            cout << endl;
    
    }

    return 0;
}