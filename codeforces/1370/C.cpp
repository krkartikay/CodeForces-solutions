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

vi factorise(int num){
    vi ans;
    for(int i = 2; i * i <= num; i++){
        if(num % i == 0){
            num /= i;
            ans.push_back(i);
            i--;
        }
    }
    if(num > 1) ans.push_back(num);
    return ans;
}

void testcase(int t){
    
    int n; cin >> n;
    vi facs = factorise(n);
    int p2 = 0; int o = 0;
    for(auto &i : facs){
        if (i == 2)
            p2++;
        else
            o++;
    }
    debug(n, p2, o);
    if ((p2 != 1 and o == 0) or (p2 == 1 and o == 1)) {
        print("FastestFinger");
    } else {
        print("Ashishgup");
    }
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