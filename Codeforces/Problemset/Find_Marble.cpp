#include <bits/stdc++.h>

using namespace std;

#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.rend(), cont.rbegin()
#define PB push_back
#define PI 3.1415926535897932384626433832795
#define endl "\n"
typedef long int l;
typedef unsigned long int ul;
typedef long long int ll;
typedef unsigned long long int ull;

void solve() {
    ll n, s, t;
    cin >> n >> s >> t;
    unordered_map<ll, ll> a;
    for (ll i = 1; i <= n; i++) {
        cin >> a[i];
    }

    ll curr = s, ops = 0;
    while (ops <= n && curr != t) {
        curr = a[curr];
        ops++;
    }

    cout << (ops > n ? -1 : ops);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
