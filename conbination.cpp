#include <bits/stdc++.h>
using namespace std;

// nCrをオーバーフローなしに求める
long long conbination(long long n, long long r) {
    long long res = 1;
    for (long long i = 1; i <= r; i++) {
        res *= (n - i + 1);
        res /= i;
    }
    return res;
}
