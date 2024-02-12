#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    int n1,n2,n3,n4,n5;

    n1 = a+b+c;
    n2 = a*(b+c);
    n3 = (a+b)*c;
    n4 = (a*b*c);

    int ans = max(n1,max(n2,max(n3,n4)));

    cout << ans <<endl;


    return 0;
}