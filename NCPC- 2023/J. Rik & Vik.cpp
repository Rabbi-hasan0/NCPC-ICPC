/* Solved By: Rabbi Hasan */
/* Dept. of CSE
/* Bangladesh University of Business and Technology */

#include <bits/stdc++.h>
#define print(x) cout << x << '\n'
#define int long long
using namespace std;

const int N = 1e6 + 5;
const int mod = 1e9 + 7;
int fact[N + 1];

void factorial() {
    fact[0] = fact[1] = 1; 
    for (int i = 2; i < N; i++) {
        fact[i] = (fact[i - 1] * i) % mod;
    }
}

int mod_exp(int base, int exp, int mod) {
    int result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) { 
            result = (result * base) % mod;
        }
        base = (base * base) % mod; 
        exp /= 2; 
    }
    return result;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    factorial();
    int t = 1; cin >> t; 
    while (t--) {
        int s, n, m;
        cin >> s >> n >> m;
        int fact_n = fact[n]; 
        int result = mod_exp(fact_n, m - (s / n), mod);
        cout << (result * fact[s]) % mod << '\n';
    }
    return 0;
}
