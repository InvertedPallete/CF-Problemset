//  
//  global round
//      
//  10/06/2024
//
//  Code By Gunjit
//
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
 
#define ll long long
 
void solve() {
  int n; cin >> n;
  vector<int> arr(n); for (int i = 0; i < n; ++i) cin >> arr[i];
  ll sum = 0, mn = 0;
  for (int i = 0; i < n; ++i) sum += arr[i], mn = min(mn, sum);
  cout << sum - 2 * mn << '\n';
}
 
int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int t; cin >> t;
  for (int i = 0; i < t; ++i) solve();
  return 0;
}


/*
    // think of greedy algorithm first, Codeforces A,B are usually some sort of greedy and simple 800 - 900 rating
    // C on Div2 and E on Div 3/4 requirs more thinking but still not too hard
    //for later problems think about data structures like segment tree and ordered set
    // try query problems, not good at them
    // try to improve yourthinking and logic building by not giving up 
    // 
    //
    // Keep Grinding —————————————Jai Shree Ram —————————————
*/