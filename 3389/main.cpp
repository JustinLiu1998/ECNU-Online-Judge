//
//  main.cpp
//  3389
//
//  Created by 刘靖迪 on 2018/7/6.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <bits/stdc++.h>

using namespace std;
#define MAXN 500010
#define l(i) (i<<1)+1
#define r(i) (i<<1)+2

using LL = long long;
LL dat[4*MAXN];
int n;
void init(int n_) {
    n = 1;
    while (n < n_) {
        n <<= 1;
    }
}

void add(int k, int a) {
    k += n-1;
    dat[k] += a;
    while (k) {
        k = (k-1) / 2;
        dat[k] += a;
    }
}

LL query(int ql, int qr, int k, int l, int r) {
    if (r < ql || qr < l) return 0;
    if (ql <= l && r <= qr) return dat[k];
    else {
        LL v1 = query(ql, qr, l(k), l, (l+r)>>1);
        LL v2 = query(ql, qr, r(k), ((l+r)>>1)+1, r);
        return v1 + v2;
    }
}

int main(int argc, const char * argv[]) {
    int n_; cin >> n_; ++n_;
    init(n_);
    for (int i=1; i<n_; ++i) {
        int t;
        scanf("%d", &t);
        add(i, t);
    }
    int q; cin >> q;
    for (int i=0; i<q; ++i) {
        int cmd;
        scanf("%d", &cmd);
        if (cmd == 1) {
            int x, d;
            scanf("%d%d", &x, &d);
            add(x, d);
        }
        else {
            int a, b;
            scanf("%d%d", &a, &b);
            printf("%lld\n", query(a, b, 0, 0, n-1));
        }
    }
    return 0;
}
