//
//  main.cpp
//  3390
//
//  Created by 刘靖迪 on 2018/7/8.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <bits/stdc++.h>

using namespace std;
typedef long long LL;
const int maxn = 500000 + 5;

int a[maxn];
LL sum[maxn * 4], max_[maxn * 4], min_[maxn * 4];
#define lson i*2, l, m
#define rson i*2+1, m+1, r

void maintain(int i) {
    sum[i] = sum[i * 2] + sum[i * 2 + 1];
    max_[i] = max(max_[i * 2], max_[i * 2 + 1]);
    min_[i] = min(min_[i * 2], min_[i * 2 + 1]);
}

void build(int i, int l, int r) {
    if (l == r) {
        sum[i] = max_[i] = min_[i] = a[l];
    }
    else {
        int m = (l + r) / 2;
        build(lson);
        build(rson);
        maintain(i);
    }
}

LL query_sum(int ql, int qr, int i, int l, int r) {
    if (ql <= l && r <= qr) return sum[i];
    int m = (l + r) / 2;
    LL res = 0;
    if (ql <= m) res += query_sum(ql, qr, lson);
    if (m < qr) res += query_sum(ql, qr, rson);
    return res;
}

LL query_max(int ql, int qr, int i, int l, int r) {
    if (ql <= l && r <= qr) return max_[i];
    int m = (l + r) / 2;
    LL res = -1e17;
    if (ql <= m) res = max(res, query_max(ql, qr, lson));
    if (m < qr) res = max(res, query_max(ql, qr, rson));
    return res;
}

LL query_min(int ql, int qr, int i, int l, int r) {
    if (ql <= l && r <= qr) return min_[i];
    int m = (l + r) / 2;
    LL res = 1e17;
    if (ql <= m) res = min(res, query_min(ql, qr, lson));
    if (m < qr) res = min(res, query_min(ql, qr, rson));
    return res;
}


void update(int id, int val, int i, int l, int r) {
    if (l == r) {
        sum[i] = max_[i] = min_[i] = val;
    }
    else {
        int m = (l + r) / 2;
        if (id <= m) update(id, val, lson);
        else update(id, val, rson);
        maintain(i);
    }
}

int main(int argc, const char * argv[]) {
    int n, q;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
        scanf("%d", &a[i]);
    build(1, 1, n);
    scanf("%d", &q);
    int type, u, v;
    while (q--) {
        scanf("%d%d%d", &type, &u, &v);
        if (type == 2) {
            printf("%lld %lld %lld\n", query_sum(u, v, 1, 1, n), query_max(u, v, 1, 1, n), query_min(u, v, 1, 1, n));
        }
        else if (type == 1) update(u, v, 1, 1, n);
    }
    return 0;
}
