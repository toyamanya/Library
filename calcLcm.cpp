#include <bits/stdc++.h>
using namespace std;

long long calcGcd(long long a, long long b) {
    // a > bにする
    if (a < b) {
        int tmp = a;
        a = b;
        b = tmp;
    }

    /* ユークリッドの互除法*/
    int r = a % b;
    while (r != 0) {
        a = b;
        b = r;
        r = a % b;
    }

    return b;
}

long long calcLcm(long long a, long long b) {
    return a * b / calcGcd(a, b);
}