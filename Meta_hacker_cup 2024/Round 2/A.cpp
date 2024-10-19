#include <bits/stdc++.h>
#define print(x) cout << x << '\n'
#define int long long
using namespace std;

vector<string> s = {"1", "121", "12321", "1234321", "123454321", "12345654321", "1234567654321","123456787654321", "12345678987654321"};
vector<int> vs[17];

int make(int val) {
    string y;
    for(int k = 0; k < val; k++) {
        y += '1';
    }
    int x = stoll(y);
    return x;
}

void precal() {
    for(int i = 0; i < s.size(); i++) {
        int size = s[i].size();
        int y = make(size);
        int loop = 9 - (size + 1) / 2;
        int x = stoll(s[i]);  
        vs[i].push_back(x);

        while(loop--) {
            x += y;
            vs[i].push_back(x);
        }
    }
}

void solved() {
    int l, r, n;
    cin >> l >> r >> n;
    int ans = 0;
    for(int i = 0; i < s.size(); i++) {
        for(int j = 0; j < vs[i].size(); j++) {
            int val = vs[i][j];
            if(val > r) break;
            if(val >= l && val % n == 0) {
                ans++;
            }
        }
    }
    cout << ans << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    precal();

    int t; 
    cin >> t;
    for(int i = 1; i <= t; i++) {
        cout << "Case #" << i << ": ";
        solved();
    }
    return 0;
}
