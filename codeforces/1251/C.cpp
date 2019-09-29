// kartikay26
#include <bits/stdc++.h>
using namespace std;
#define debug(x...) 
#ifdef LOCAL
#include "prettyprint.hpp"
#endif
void print(){cout << endl;} void prints(){}
template<typename T=int> T get(){T x; cin >> x; return x;}
template<typename T> void get(T* x, int n){for (int i = 0; i < n; ++i) { cin >> x[i]; }}
template<typename T> void get(T& x, int n){for (int i = 0; i < n; ++i) { cin >> x[i]; }}
template<typename T, typename... A> void print(T x,A... r){cout << x << " ";print(r...);}
template<typename T, typename... A> void prints(T x,A... r){cout << x << " ";prints(r...);}
typedef long long int ll; typedef double db; typedef vector<ll> vi; typedef pair<ll, ll> pii;
#define int ll
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define clr(x) memset(x, 0, sizeof(x))
#define fast_io() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const int mod = 1e9+7;
const int N = 1e6+1;

void testcase(int t){
	
	string s; cin >> s;

	string a, b;
	for(auto c : s){
		int x = c - '0';
		if (x % 2 == 0){
			a += c;
		} else {
			b += c;
		}
	}

	a += '=';
	b += '=';

	debug(a);
	debug(b);

	int i = 0, j = 0;
	string ans;
	while (not (a[i] == '=' and b[j] == '=')){
		if(a[i] < b[j]){
			ans += a[i];
			i++;
		} else {
			ans += b[j];
			j++;
		}
	}

	print(ans);
	
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