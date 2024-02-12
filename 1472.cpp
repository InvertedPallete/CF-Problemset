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
        vector<int> v;
        for(int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
            // cin>> v[i];
            sum += v[i];
        }

        int temp = 0;
        int count = 0;
        if(sum%2 == 0)
        {

        
            for (int i = 0; i < n; i++)
            {
                temp += v[i];
                if(temp == sum/2)
                {
                    cout<< "YES" << endl;
                    break;
                }
                count++;
            }

            if(count == n)
            {
                cout << "NO" << endl;
            }
        }
        else{
            cout << "NO" << endl;
        }

        /*if(sum%2 == 0 )
        {
            if(n%2 == 0)
            {
                cout << "YES"<< endl;
            }

            else
            {
                 cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }*/

    }
    return 0;
}