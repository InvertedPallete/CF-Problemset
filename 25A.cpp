//
//
//  26/02/2024
//  
//  code by Gunjit Dhakar
//
#include<bits/stdc++.h>
using namespace std;

int eveness(vector<int> &v, int n)
{
    int s = 0;
    int e = n-1;

    while(s<=e)
    {
        if ( (max(v[s],v[s+1])) % (min(v[s],v[s+1])) != 0) 
        {
            cout << "start" << endl;
            return s+1;
        }

        else if((max(v[e],v[e-1])) % (min(v[e],v[e-1])) != 0)
        {
            cout << "end" << endl;
            return e-1;
        }
        s++;
        e--;
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> v;

    for(int i =0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int ans = eveness(v,n);
    cout << ans + 1<< endl;
    return 0;
}