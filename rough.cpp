#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--) {
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        
        sort(v.begin(), v.end());
        
        int i = 0, j = n - 1;
        int count = 0;
        
        while(i <= j) {
            if(v[j] >= x) {
                count++;
                j--;
            } else if(v[i] + v[j] >= x) {
                count++;
                i++;
                j--;
            } else {
                i++;
            }
        }
        
        cout << count << endl;
    }
    
    return 0;
}
