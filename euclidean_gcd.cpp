#include <bits/stdc++.h>
using namespace std;

// ユークリッドの互除法でAとBの最大公約数を求める
long long euclidean_gcd(long long a, long long b) {
    return b ? euclidean_gcd(b, a % b) : a;
}
