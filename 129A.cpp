//
//  26/01/2024
//  
//  @itachi52730
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // vector<int> v;

    int sum = 0;
    int even = 0, odd = 0;
    for(int i = 0; i < n ; i++)
    {
        int a;
        cin >> a;
        // v.push_back(a);
        sum += a;
        if(a % 2 == 0)
        {
            even++;
        }
        else{
            odd++;
        }
    }

    if(sum % 2 == 0 )
    {
        cout << even <<endl;
    }

    else 
    {
        cout << odd << endl;
    }
    return 0;
}