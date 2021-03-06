#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;
typedef long long ll;

// unhackable custom hash for unordered_map
// Credits : neil
struct custom_hash {
	size_t operator()(uint64_t x) const {
		static const uint64_t FIXED_RANDOM =
		    chrono::steady_clock::now().time_since_epoch().count();
		x ^= FIXED_RANDOM;
		return x ^ (x >> 16);
	}
};

//==========================XXXXXXXXXXXXXXXX=============================

#define rep(i, a, b) for(ll i = a; i < b; i++)
#define all(x) x.begin(), x.end()
#define pb push_back

void solve() {

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int p, n;
	cin >> p >> n;
	vector<bool> ch(p, false);
	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		int pos = x % p;
		if (ch[pos]) {
			cout << i << "\n";
			return 0;
		}
		else
			ch[pos] = true;
	}
	cout << "-1\n";
	return 0;
	return 0;
}