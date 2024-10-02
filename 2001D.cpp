#include <bits/stdc++.h>
using namespace std;

int a[300001], cnt[300001], pos[300001];
bool vis[300001];
vector<int> test[300001];

void solve() {

    
    int n, pt = 1e9;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        pos[i] = -1;
        cnt[i] = 0;
        vis[i] = false;
        test[i].clear();
    }
    for (int i = 1; i <= n; ++i) {
        pos[a[i]] = i;
        test[a[i]].push_back(i);
    }
    for (int i = 1; i <= n; ++i)
        if (pos[i] != -1) {
            cnt[pos[i]]++;
            pt = min(pt, pos[i]);
        }
    vector<int> res;
    for (int i = 1; i <= n;) {
        if (i == pt) {
            res.push_back(a[i]);
            cnt[pos[a[i]]]--;
            while (cnt[pt] == 0 && pt <= n) pt++;
            i++;
        } else {
            if (res.size() % 2 == 0) {
                int max_ = 0;
                for (int j = i; j <= min(pt, n); ++j) if (!vis[j]) max_ = max(max_, a[j]);
                for (int j = i; j <= min(pt, n); ++j) if (a[j] == max_) {
                    i = j + 1; break;
                }
                if (max_ == 0) break;
                res.push_back(max_);
                cnt[pos[max_]]--;
                while (cnt[pt] == 0 && pt <= n) pt++;
            } else {
                int min_ = 1e9;
                for (int j = i; j <= min(pt, n); ++j) if (!vis[j]) min_ = min(min_, a[j]);
                for (int j = i; j <= min(pt, n); ++j) if (a[j] == min_) {
                    i = j + 1; break;
                }
                if (min_ == 1e9) break;
                res.push_back(min_);
                cnt[pos[min_]]--;
                while (cnt[pt] == 0 && pt <= n) pt++;
            }
        }
        for (int i : test[res.back()]) vis[i] = true;
    }
    cout << res.size() << endl;
    for (int i : res) cout << i << ' ';\
    cout << endl;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    long long t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        
    }
    return 0;
}
