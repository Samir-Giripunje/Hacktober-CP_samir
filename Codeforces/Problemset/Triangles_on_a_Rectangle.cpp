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
    ll w, h;
    cin >> w >> h;
    ll n;
    cin >> n;
    ll mx = 0, mn = INT_MAX;
    for (ll i = 0; i < n; i++) {
        ll k;
        cin >> k;
        mx = max(mx, k);
        mn = min(mn, k);
    }
    ll x1 = mx - mn;
    mx = 0;
    mn = INT_MAX;
    cin >> n;
    for (ll i = 0; i < n; i++) {
        ll k;
        cin >> k;
        mx = max(mx, k);
        mn = min(mn, k);
    }
    ll x2 = mx - mn;
    mx = 0;
    mn = INT_MAX;
    cin >> n;
    for (ll i = 0; i < n; i++) {
        ll k;
        cin >> k;
        mx = max(mx, k);
        mn = min(mn, k);
    }
    ll y1 = mx - mn;
    mx = 0;
    mn = INT_MAX;
    cin >> n;
    for (ll i = 0; i < n; i++) {
        ll k;
        cin >> k;
        mx = max(mx, k);
        mn = min(mn, k);
    }
    ll y2 = mx - mn;

    cout << max(max(x1, x2) * h, max(y1, y2) * w) << endl;
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
