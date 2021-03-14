#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;

// 繰り返し二乗法
// a^n を高速に求める(long long型)
long long llpow(long long a, long long n) {
    if (n == 0)
        return 1;
    if (n == 1)
        return a;
    if (n % 2 == 1)
        // 奇数のとき
        return (a * llpow(a, n - 1));
    // 偶数のとき
    long long t = llpow(a, n / 2);
    return (t * t);
}

int main() {
    long long a, n;
    cin >> a >> n;
    cout << pow(a, n) << endl;
}
