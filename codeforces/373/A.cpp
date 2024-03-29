// kartikay26
#include <bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "prettyprint.hpp"
#else
#define debug(x...) 
#endif
typedef long long int ll; typedef double db; typedef vector<ll> vi; typedef pair<ll, ll> pii;
#define int ll
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define clr(x) memset(x, 0, sizeof(x))
#define fast_io() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
void print(){cout << endl;} void prints(){} int get() {int x; cin >> x; return x;}
template<typename T> void print(T x){cout << x << endl;} template<typename T> void prints(T x){cout << x;}
template<typename T> void get(T* x, int n){for (int i = 0; i < n; ++i) { cin >> x[i]; }}
template<typename T> void get(T& x, int n){for (int i = 0; i < n; ++i) { cin >> x[i]; }}
template<typename T, typename... A> void print(T x,A... r){cout << x << " ";print(r...);}
template<typename T, typename... A> void prints(T x,A... r){cout << x; prints(r...);}

const int mod = 1e9+7;
const int N = 1e6+1;

bool testcase(){
	int k = get();
	map<char, int> mp;
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			char c; cin >> c;
			mp[c]++;
		}
	}
	for (int i = 1; i <= 9; ++i) {
		if (mp[i+'0'] > 2*k) {
			return false;
		}
	}
	return true;
}

int32_t main(){
	fast_io();
	print(testcase() ? "YES" : "NO");
	return 0;
}