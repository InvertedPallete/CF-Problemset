//
//  05/02/2024
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
        string s;
        string s1,s2;
        cin>>s;
        for(int i = 1; i< s.length(); i++)
        {
            if(s[i] != '0')
            {
                for(int j = 0; j < s.length()-i;j++)
                {
                    s2[j] = s[i+j];
                }
                break;
            }
            s1.push_back(s[i]);
        }
        int m = max(s1.size(),s2.size());
        int count = 0;
        for(int i = 0; i < m; ++i)
        {
            if ((s1[i] - '0') < (s2[i] - '0'))
            { 
                cout << s1 << " "<< s2 <<  endl; 
                break;
            }
            else{
                cout << -1 << endl;
                break;
            }
        }
    }
    return 0;
}