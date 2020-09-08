// kartikay26
#include <bits/stdc++.h>
using namespace std;
#define debug(x...) 
#ifdef LOCAL
#include "prettyprint.hpp"
#endif
typedef long long int ll; typedef double db; typedef vector<ll> vi; typedef pair<ll, ll> pii;
#define int ll
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define clr(x) memset(x, 0, sizeof(x))
#define fast_io() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
void print(){cout << endl;} void prints(){}
template<typename T> void get(T* x, int n){for (int i = 0; i < n; ++i) { cin >> x[i]; }}
template<typename T> void get(T& x, int n){for (int i = 0; i < n; ++i) { cin >> x[i]; }}
template<typename T, typename... A> void print(T x,A... r){cout << x << " ";print(r...);}
template<typename T, typename... A> void prints(T x,A... r){cout << x << " ";prints(r...);}

const int mod = 1e9+7;
const int N = 1e6+1;

int32_t main(){
	fast_io();

	int n; cin >> n;
	vector<int> a(n);
	get(a, n);

	sort(all(a));

	auto cost = [&](int b){
		int p = 1, ans = 0;
		for (int i = 0; i < n; ++i) {
			ans += abs(a[i] - p);
			if (LLONG_MAX / p <= b) return LLONG_MAX;
			p *= b;
		}
		return ans;
	};

	int ans = LLONG_MAX;

	int m = exp(log(2*a[a.size()-1]) / (n-1)) + 1;

	for (int i = 1; i <= m; ++i) {
		ans = min(ans, cost(i));
	}

	print(ans);

	return 0;
}