#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t; 
    cin  >> t;

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
        int ans = pow(10,5);
        for (int i = 0; i < n; i++)
        {
            if(v[i] != i+1)
            {
                int diff = abs (v[i] - (i+1));
                ans = min(diff, ans);
            }
        }

        cout << ans << endl;
        
        
    }  
    return 0;
}
