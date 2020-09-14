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

void testcase(int t){
	int n; cin >> n;
	vi a(n); get(a,n);
	vi l(n); get(l,n);
 
	vi b;
 
	for (int i = 0; i < n; ++i) {
		if (!l[i]) b.push_back(a[i]);
	}
 
	sort(b.rbegin(), b.rend());
 
	vi c(n);
 
	int j = 0;
	for (int i = 0; i < n; ++i) {
		if (l[i]) {
			c[i] = a[i];
		} else {
			c[i] = b[j++];
		}
	}
 
	for(auto &i : c){
		prints(i);
	}
	print();
}

int32_t main(){
	fast_io();
	int t;
	cin >> t;
	for (int i = 1; i <= t; ++i) {
		testcase(i);
	}
	return 0;
}