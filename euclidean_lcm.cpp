#include <bits/stdc++.h>
using namespace std;

// ユークリッドの互除法でAとBの最大公約数を求める
long long euclidean_gcd(long long a, long long b) {
    return b ? euclidean_gcd(b, a % b) : a;
}

long long euclidean_lcm(long long a, long long b) {
    // a > bにする
    if (a < b) {
        int tmp = a;
        a = b;
        b = tmp;
    }

    return a / euclidean_gcd(a, b) * b;
}