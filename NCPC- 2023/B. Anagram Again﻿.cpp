/* Solved By: Rabbi Hasan */
/* Dept. of CSE
/* Bangladesh University of Business and Technology */

#include <bits/stdc++.h>
#define print(x) cout << x << '\n'
#define int unsigned long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1, tc = 1; cin >> t;
    while(t--){
        cout << "Case" << tc++ << ":\n";
        int n; cin >> n;
        vector<string> s(n);
        for(auto &i: s) {
            cin >> i;
        }
        int q; cin >> q;
        while(q--) {
            string x; cin >> x;
            map<char, int> mp;
            for(auto &j: x) {
                mp[j]++;
            }
            int ans = 0;
            for(auto &i: s) {
                map<char, int> temp;
                for(auto &j: i) {
                    temp[j]++;
                }
                bool ok = true;
                for(auto &j: i) {
                    if(temp[j] > mp[j]) {
                        ok = false;
                        break;
                    }
                }
                if(ok) ans++;
            }
            cout << ans << '\n';
        }
    }
    return 0;
}
