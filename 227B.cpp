//
//  24/01/2024
//  
//  @itachi52730
//
#include<bits/stdc++.h>
using namespace std;


int bns(int n,int *a, int *b,int p)
{
    int s = 0;
    int e = n - 1;
    int mid;
    while (s<=e)
    {
        mid = (s+e) /2;

        if(p > a[mid])
        {
            s = mid + 1;
        }

        else if(p < a[mid])
        {
            e = mid - 1;
        }

        else if(p == a[mid])
        {
            mid++;
        }
        mid = e-((e-s)/2);
    }

    return mid;
}


int main()
{
    int n;
    cin>>n;
    int a[n];
    int vasya = 0, petya = 0; 
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int m;
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >>b[i];
        int p = bns(n,a,b,b[i]);
        vasya += vasya + p;
        petya += petya + (n-p+1);
    }

    cout<<vasya << " "<< petya <<endl;
    return 0;
}