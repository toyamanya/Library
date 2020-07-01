#include <bits/stdc++.h>
using namespace std;

// Union-Find
class UnionFind {
   public:
    vector<int> parent;  // 根の番号
    vector<int> height;  // 木の高さ
    vector<int> count;   // 根に含まれるノードの数(根を参照したときに限る)

    // 要素数nで初期化
    UnionFind(int n) : parent(n), height(n, 1), count(n, 1) {
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }

    // 木の根を求める
    int root(int x) {
        // 根の場合
        if (parent.at(x) == x) return x;
        // 根ではない場合:経路圧縮しながら根を求める
        return parent.at(x) = root(parent.at(x));
    }

    // xとyが同じ集合に属するか否か
    bool same(int x, int y) {
        return root(x) == root(y);
    }

    // xとyの属する集合を併合
    void unite(int x, int y) {
        int rx = root(x), ry = root(y);
        // 既に同じ集合にある場合
        if (rx == ry) return;

        // 木の高さが低い方を高い方につなげる
        if (height[rx] < height[ry]) {
            parent.at(rx) = ry;
            // 小さい方の大きさを大きい方に足す
            count.at(ry) += count.at(rx);
        } else {
            parent.at(ry) = rx;
            count.at(rx) += count.at(ry);
            // 同じときはyの親をxにしてxの高さを1増やす
            if (height.at(rx) == height.at(ry)) height.at(rx)++;
        }
    }

    // xの属する集合の要素数
    int element_count(int x) {
        return count.at(root(x));
    }
};
