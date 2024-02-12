//
//  11/02/2024
//  
//  @itachi52730
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin >> n;

   vector<int> v;
   for(int i =0 ; i < n; i++)
   {
        int a;
        cin>>a;
        v.push_back(a);
   }
    int seg_count = 0;
    int sm_cnt= 0;
   for(int i = 0; i < n; i++)
   {
        if((v[i+1]) >=  (v[i]))
        {
            sm_cnt++;
        }
        else
        {
            // cout << sm_cnt <<endl;  
            seg_count = max(seg_count,sm_cnt);
            sm_cnt = 0;
        }    
        if(i == n-2)
        {
            seg_count = max(seg_count,sm_cnt);
        }
   }
   
   cout << seg_count + 1 << endl;

   return 0;
}