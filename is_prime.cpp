#include <bits/stdc++.h>
using namespace std;

// xの素数判定
bool is_prime(long long x) {
    if (x <= 1) {
        return false;
    }

    for (int i = 2; i * i < x; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}