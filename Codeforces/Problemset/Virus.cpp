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
    ll n, m;
    cin >> n >> m;
    vector<ll> a(m);
    for (ll i = 0; i < m; i++) {
        cin >> a[i];
    }

    sort(all(a));
    vector<ll> b;
    for (ll i = 1; i < m; i++) {
        b.PB(a[i] - a[i - 1] - 1);
    }
    b.PB(n - a[m - 1] + a[0] - 1);
    sort(all(b), greater<int>());

    ll curr = 0, saved = 0;
    for (ll i = 0; i < m; i++) {
        b[i] -= curr;
        if (b[i] > 0) {
            saved += max(1LL, b[i] - 1);
        }
        curr += 4;
    }

    cout << n - saved << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
