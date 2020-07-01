#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const int INF = 1 << 29;
const int MOD = 1000000007;

// n * (n - 1) *  ... (n - a + 1)をpで割った余り(カッコの数がa個)
long long modFactorial(long long n, long long a, long long p) {
    long long ans = n;
    for (int i = 1; i < a; i++) {
        cout << ans << endl;
        ans = ((ans % p) * ((n - i) % p)) % p;
    }
    return ans;
}

int main() {
    long long n, a;
    cin >> n >> a;
    cout << modFactorial(n, a, MOD);
}