//
//
//  09/03/2024
//  
//  code by Gunjit Dhakar
//
#include<bits/stdc++.h>
using namespace std;

#define f(i,n) for (int i = 0; i < n; i++)

int main()
{
    string s,t;
    cin >> s >> t;
    int n = t.size();
    int i = 0, j = 0;
    while(n--)
    {
        if(t[j] == s[i])
            i++;
        j++;
    }

    cout << i+1 << endl;
    
    return 0;
}