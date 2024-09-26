/* Solved By: Rabbi Hasan */
/* Dept. of CSE
/* Bangladesh University of Business and Technology */

#include <bits/stdc++.h>
#define print(x) cout << x << '\n'
#define int unsigned long long
using namespace std;

int gcd (int a, int b) {
    if (b == 0)  return a;
    else return gcd (b, a % b);
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1; cin >> t;
    while(t--){
        int a, b, c, d; cin >> a >> b >> c >> d;
        int x = gcd(a, b);
        int y = gcd(c, d);
        a = a / x; 
        b = b / x;
        c = c / y; 
        d = d / y;
        if(a == c and d == b ) {
            print("Equal");
        } else {
            print("Not Equal");
        }
    }
    return 0;
}
