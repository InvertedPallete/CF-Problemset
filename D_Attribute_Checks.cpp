#include<bits/stdc++.h>
 
using namespace std;
 
#define fore(i, l, r) for(int i = int(l); i < int(r); i++)
#define sz(a) int((a).size())
 
typedef long long li;
 
const int INF = int(1e9);
const li INF64 = li(1e18);
 
int n, m;
vector<int> rs;
 
bool read() {
	if(!(cin >> n >> m))
		return false;
	rs.resize(n);
	fore (i, 0, n)
		cin >> rs[i];
	return true;
}
 
struct LazySum {
	vector<int> ps;
	LazySum(int n) : ps(n, 0) {}
	
	//[l, r]
	void add(int l, int r, int val) {
		if (l > r) return;
		ps[l] += val;
		ps[r + 1] -= val;
	}
	void pushToAndClear(vector<int> &d) {
		int sum = 0;
		fore (i, 0, sz(ps)) {
			sum += ps[i];
			ps[i] = 0;
			if (i < sz(d))
				d[i] += sum;
		}
	}
};
 
void solve() {
	LazySum ls(m + 2);
	vector<int> d(m + 1, -INF);
	d[0] = 0;
 
	int cntP = 0;
	for (int r : rs) {
		if (r == 0) {
			ls.pushToAndClear(d);
			for (int i = m; i > 0; i--)
				d[i] = max(d[i], d[i - 1]);
			cntP++;
			continue;
		}
		if (r > 0)
			ls.add(r, m, 1);
		else
			ls.add(0, cntP + r, 1);
	}
	ls.pushToAndClear(d);
	cout << *max_element(d.begin(), d.end()) << endl;
}
 
int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	int tt = clock();
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	cout << fixed << setprecision(15);
	
	if(read()) {
		solve();
		
#ifdef _DEBUG
		cerr << "TIME = " << clock() - tt << endl;
		tt = clock();
#endif
	}
	return 0;
}