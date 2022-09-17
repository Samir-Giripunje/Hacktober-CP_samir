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
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll mn = *min_element(all(a));
    vector<ll> b;
    for (ll i = 0; i < n; i++) {
        if (abs(a[i] - mn)) {
            b.PB(abs(a[i] - mn));
        }
    }
    if (b.size() == 0) {
        cout << -1 << endl;
        return;
    }
    ll ans = b[0];
    for (ll i = 1; i < b.size(); i++) {
        ans = __gcd(ans, b[i]);
    }

    cout << ans << endl;
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
