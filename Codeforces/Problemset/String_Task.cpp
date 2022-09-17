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
    string s;
    cin >> s;

    string ans = "";
    for (ll i = 0; i < s.length(); i++) {
        if (s[i] < 'a')
            s[i] += 32;

        unordered_set<ll> st = {'a', 'e', 'i', 'o', 'u', 'y'};
        if (st.find(s[i]) == st.end()) {
            ans.PB('.');
            ans.PB(s[i]);
        }
    }

    cout << ans;
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
