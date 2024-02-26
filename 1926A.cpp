//  Vlad and the best five
//
//  26/02/2024
//  
//  code by Gunjit Dhakar
//
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int cnt_a = 0, cnt_b = 0;

        string s;
        cin >> s;

        for(int i =0 ; i < s.size(); i++)
        {
            if(s[i] == 'A')
            {
                cnt_a++;
            }

            else
            {
                cnt_b++;
            }
        }

       if(cnt_a > cnt_b)
       {
        cout << "A" << endl;
       }

       else
       {
        cout << 'B' << endl;
       }
    }
    return 0;
}