#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, m;
	cin >> n >> m;
	cout << 'W';
	for (int i = 1; i < m; i++)
		cout << 'B';
	cout << "\n";
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < m; j++)
			cout << 'B';
		cout << "\n";
	}

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