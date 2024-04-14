//
//
//  24/03/2024
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
        int n;
        cin >> n;

        string s;
        cin >> s;
        int n = 
        int j = s.size() - 1;
        for(int i; i < s.size()/2; i++)
        {
            if(s[i] == s[j])
            {
                cout << j-i+1 << endl;
                break;
            }
            j--;
        }
    }
    
    return 0;
}