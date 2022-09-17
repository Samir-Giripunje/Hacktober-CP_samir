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
    vector<string> t(2 * n + 1);
    vector<ll> a(26);
    for (ll i = 0; i < 2 * n + 1; i++) {
        cin >> t[i];
        for (ll j = 0; j < t[i].length(); j++) {
            a[t[i][j] - 'a']++;
        }
    }

    for (ll i = 0; i < 26; i++) {
        if (a[i] & 1) {
            cout << (char)(i + 'a') << endl;
            return;
        }
    }
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
