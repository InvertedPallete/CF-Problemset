//  Chaya Calendar
//
//  27/02/2024
//  
//  code by Gunjit Dhakar
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
       
        for (int i = 0; i < n; i++)
        {
           int a;
           cin >> a;
           v.push_back(a);
        }
        int cnt = v[0];
        for(int i = 1; i < n; i++)
        {
            cnt++;
            if(cnt > v[i])
            {
                int q = cnt/v[i];
                if(cnt%v[i] != 0)
                    q++;
                
                cnt = v[i]*q;
            }

            else
            {
                cnt = v[i];
                
            }
            
        }

        cout << cnt<< endl;
        

    }
    return 0;
}