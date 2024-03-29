// kartikay26
#include <bits/stdc++.h>
using namespace std;
#define fast_io() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(x) x.begin(), x.end()
#ifndef ONLINE_JUDGE
#include "prettyprint.hpp"
#define debug(...) cout << "debug: " << #__VA_ARGS__ " = " << make_tuple(__VA_ARGS__) << endl
#else
#define debug(...) 0
#endif
typedef long long int ll;
#define int ll
typedef vector<int> vi;
typedef pair<int, int> pii;

bool check(string s, int n){
	map<char, int> cnt;
	for(auto ch : s){
		cnt[ch]++;
	}
	for(auto ch_cnt : cnt){
		if (ch_cnt.second > n/2) {
			return false;
		}
	}
	return true;
}

int32_t main(){
	fast_io();
	int n; cin >> n;
	string s; cin >> s;
	for (int len = 1; len <= n; ++len) {
		for (int start = 0; start < n-len+1; ++start) {
			string sx = s.substr(start, len);
			debug(sx);
			if (check(sx, len)) {
				cout << "YES\n" << sx << endl;
				return 0;
			}
		}
	}
	cout << "NO\n";
}