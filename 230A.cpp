#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n;
    cin >> s >> n;
    vector<pair<int,int>> v;
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        int a,b;
        cin >> a>> b;
        v.push_back(make_pair(a,b));

    }

    sort(v.begin(), v.end());
    for(int i = 0;  i< n; i++)
    {
        if(v[i].first >= s)
        {
            cout << "NO" <<endl;
            break;
        }

        else{
            s += v[i].second;
            count++;
        }
    }

    if(count  == n)
    {
        cout << "YES"<< endl;
    }


    return 0;
}