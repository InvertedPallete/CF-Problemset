//  Thorns and Coins
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

        vector<char> c;
        int coins = 0;
        for (int i = 0; i < n; i++)
        {
            char c1;
            cin >> c1;
            c.push_back(c1);
        }
        int check =0;
        for(int i = 0; i < n; i++)
        {
            if((c[i] == '*') && (c[i] == c[i+1]))
            {
                cout << coins <<endl;
                check++;
                break;
            } 

            if(c[i] == '@')
            {  
                coins++;
            }
        }
        if(check == 0)
            cout << coins <<endl;

    }
    return 0;
}