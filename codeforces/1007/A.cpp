// kartikay26
#include <bits/stdc++.h>
using namespace std;
#define fast_io() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(x) x.begin(), x.end()
#ifdef LOCAL
#include "prettyprint.hpp"
#else
#define debug(...)
#define debuga(arr, n)
#define debugg(grid, n) 
#endif
typedef long long int ll;
#define int ll
#define F first
#define S second
#define float double
const int inf = LLONG_MAX;
int get() { int x; cin >> x; return x; }
void getl(int* ar, int sz){ for(int i=0; i<sz; i++) cin >> ar[i];}
template <typename T> void print(T x) { cout << x << "\n";}
template <typename T> void prints(T x) { cout << x << " ";}
typedef double db;
typedef vector<int> vi;
typedef pair<int, int> pii;

const int mod = 1e9+7;
const int N = 1e5+1;

int n, a[N];

int32_t main(){
	fast_io();
	n = get();
	getl(a, n);
	sort(a, a+n);
	int p = n-1, q = n-1, ans =  0;
	while (p > 0){
		q--;
		while (q >= 0 and a[q] >= a[p]){
			q--;
		}
		debug(p,q);
		if (q<0) { break; }
		ans++;
		p--;
	}
	print(ans);
	return 0;
}