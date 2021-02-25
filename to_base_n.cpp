#include <bits/stdc++.h>
using namespace std;

// numをn進数に変換し、stringで返す
string to_base_n(int num, int n) {
    string s;
    while (num) {
        s = to_string(num % n) + s;
        num /= n;
    }
    return s;
}