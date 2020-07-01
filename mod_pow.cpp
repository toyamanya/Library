#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;

// 繰り返し二乗法
// a^n mod pを高速に求める
long long modPow(long long a, long long n, long long p) {
    if (n == 1)
        return a % p;
    if (n % 2 == 1)
        // 奇数のとき
        return (a * modPow(a, n - 1, p)) % p;
    // 偶数のとき
    long long t = modPow(a, n / 2, p);
    return (t * t) % p;
}

/*
int main()
{
    long long a, n;
    cin >> a >> n;
    cout << modPow(a, n, MOD) << endl;
}
*/