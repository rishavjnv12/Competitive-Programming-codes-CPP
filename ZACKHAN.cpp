#include <bits/stdc++.h>
using namespace std;

void solve() {
	int l, b;
	cin >> l >> b;
	cout << __gcd(l, b) << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}