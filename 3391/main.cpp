//
//  main.cpp
//  3391
//
//  Created by 刘靖迪 on 2018/7/8.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int maxn = 500000 + 5;
const int inf = 0x3f3f3f3f;

int a[maxn];
LL sum[maxn * 4], add[maxn * 4];
int setv[maxn * 4];
#define lson i*2, l, m
#define rson i*2+1, m+1, r

void maintain(int i, int l, int r) {
    int lc = 2 * i, rc = 2 * i + 1;
//    sum[i] = (r - l + 1) * add[i];
    sum[i] = 0;
    if (l < r) sum[i] += sum[lc] + sum[rc];
    else sum[i] += a[l];
    if (setv[i] != inf) {
        sum[i] = (r - l + 1) * setv[i];
    }
}

void pushdown(int i, int l, int r) {
    int lc = 2 * i, rc = 2 * i + 1;
//    if (add[i] != 0) {
//        add[lc] += add[i];
//        add[rc] += add[i];
//        add[i] = 0;
//    }
    if (setv[i] != inf) {
        setv[lc] = setv[rc] = setv[i];
//        add[lc] = add[rc] = 0;
        setv[i] = inf;
    }
}

void build(int i, int l, int r) {
    memset(setv, inf, sizeof(setv));
    if (l == r)
        sum[i] = a[l];
    else {
        int m = (l + r) / 2;
        build(lson);
        build(rson);
        maintain(i, l, r);
    }
}

LL query(int ql, int qr, int i, int l, int r) {
    maintain(i, l, r);
    if (ql <= l && r <= qr) return sum[i];
    pushdown(i, l, r);
    int m = (l + r) / 2;
    LL res = 0;
    if (ql <= m) {
        res += query(ql, qr, lson);
    }
    else {
        maintain(lson);
    }
    if (m < qr) {
        res += query(ql, qr, rson);
    }
    else {
        maintain(rson);
    }
    return res;
}

void update(int ul, int ur, int val, int i, int l, int r) {
    if (ul <= l && r <= ur) {
//        add[i] += val;
        setv[i] = val;
//        add[i] = 0;
    }
    else {
        pushdown(i, l, r);
        int m = (l + r) / 2;
        if (ul <= m) {
            update(ul, ur, val, lson);
        }
        else {
            maintain(lson);
        }
        if (m < ur) {
            update(ul, ur, val, rson);
        }
        else {
            maintain(rson);
        }
    }
    maintain(i, l, r);
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
            printf("%lld\n", query(u, v, 1, 1, n));
        }
        else if (type == 1) {
            int d; scanf("%d", &d);
            update(u, v, d, 1, 1, n);
        }
    }
    return 0;
}
