#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>> n;
        string s;
        cin >> s;
        string s1 = "Timur";

        sort(s1.begin(),s1.end());
        sort(s.begin(), s.end());
        int check = 0;
        if(n == 5)
        {
            for (int i = 0; i < n; i++)
            {
                if(s[i] != s1[i])
                {
                    cout << "NO" << endl;
                    break;
                }

                check++;
            }
            
        }

        else {
            cout << "NO" <<endl;
        }

        if(check == n)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}