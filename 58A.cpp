//
//  06/02/2024
//  
//  @itachi52730
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int temp = 0;
    string check = "hello";

    for(int i = 0 ; i < s.length() ; i++)
    {
        // cout<< temp << endl;
        if(temp == 5)
        {
            break;
        }
        
        if(s[i] == check[temp])
        {
            temp++;
        }
    }

    if(temp != 5)
    {
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
    return 0;
}