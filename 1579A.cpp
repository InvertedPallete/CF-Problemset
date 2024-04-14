//
//
//  14/04/2024
//  
//  code by Gunjit Dhakar
//
#include<bits/stdc++.h>
using namespace std;

#define f(i,n) for (int i = 0; i < n; i++)

int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        string s;
        cin >> s;

        int cnt_a = 0;
        int cnt_b = 0;
        int cnt_c = 0;

        for(int i = 0; i < s.length() ;i++)
        {
            if(s[i] == 'A')
                cnt_a++;
            else if(s[i] == 'B')
                cnt_b++;
            else
                cnt_c++;
        }

        if(cnt_b == cnt_a + cnt_c)
        {
            cout << "YES" <<"\n";
        }
        else{
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}