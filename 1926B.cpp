//  Vlad and shapes
//
//  26/02/2024
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
        cin  >> n;
        vector<int> ans;
        for(int j = 0; j < n; j++)
        {
            int count = 0;
            string s;
            for(int i = 0; i < n;i++)
            {
                cin >> s[i];

                if(s[i] == '1')
                {
                    count++;
                }
            }

            ans.push_back(count);
        }

        sort(ans.begin(),ans.end(), greater<int>());

        if(ans[0]== ans[1])
        {
            cout << "SQUARE" << endl;
        }

        else
        {
            cout << "TRIANGLE" << endl;
        }
    }
    return 0;
}