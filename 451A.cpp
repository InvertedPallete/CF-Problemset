//  Vlad and shapes
//
//  26/02/2024
//  
//  code by Gunjit Dhakar
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n>>m;

    int a =  n*m;
    int b = n+m -1;
    int p = a - b;

    int count = 0;

    while (p > 2)
    {
        count++;
        p = p - 1;
    }

    if(count %2 == 0)
    {

    }
        

    return 0;
}