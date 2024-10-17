#include <bits/stdc++.h>  
using namespace std;
 
#define f(i,n) for(ll i = 0; i < n; i++)
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
 int fun( int ind, int k,int sum, int m){
    if( ind <= 0){
        if( k == 0 ){
        if( (sum %m) == 0)  return 1;
        else return 0;
    }
    else return 0;
    }
    if( k == 0 ){
        if( (sum %m) == 0)  return 1;
        else return 0;
    }

    fun(ind-1, k-1, sum+v[ind], m)//take
    fun(ind-1, k,sum, m)// not take


    return take + not take;


 }
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    fast_cin();
    long long t;
    cin >> t;
    while(t--){
 
 
    }
 
    return 0;
}
 
 
 
 
/* Most A problems are only pattern, maths & greedy 
Problem B is more diverse, use greedy, binary-search, prefix-sum, little bit dp and recursion 
 how are you*/