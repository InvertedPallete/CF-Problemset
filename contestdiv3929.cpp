//  Turtle Fingers      
//
//  27/02/2024
//  
//  code by Gunjit Dhakar
//
#include<iostream>
#include<cmath>
#include<set>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,l;
        cin >> a>> b >>l;

        int temp, ans;
        int count = 0;
        set<int> an;
        for(int i = 0; i <=31 ; i++)
        {
            for (int j = 0; j <= 31; j++)
            {
                temp = pow(a,i)*pow(b,j);
                ans = l % (temp);
                int g = l /temp;
                if(ans == 0)
                {
                    an.insert(g);
                }
            }
            
        }

        cout << an.size() <<endl;
        
    }

    return 0;
}