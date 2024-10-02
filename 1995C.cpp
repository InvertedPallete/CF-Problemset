#include <bits/stdc++.h>
using namespace std;

#define int long long

using pii = pair<int, int>;
using ll = long long;

const int N = 2e5 + 20;
int n, a[N];

int32_t main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) cin >> a[i];

		int last = 0, ans = 0;
		for (int i = 1; i < n; i++) {
			int v1 = a[i - 1], v2 = a[i];
			int c1 = 0, c2 = 0;

			if (v2 == 1 && v1 > 1) {
				ans = -1;
				break;
			}

			while (v2 < v1) {
				v2 *= v2;
				c2++;
			}

			while (v1 * v1 <= v2) {
				if (v1 == 1) {
					c1 = -1;
					break;
				}
				v1 *= v1;
				c1++;
			}

			if (c2) last += c2;
			else if (c1 == -1) last = 0;
			else last = max(0ll, last - c1);

			ans += last;
		}

		cout << ans << '\n';
	}
}
