//
//  main.cpp
//  1070( C ++)
//
//  Created by 刘靖迪 on 2017/9/4.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;

#define PB push_back
typedef vector<int> vec;
const int maxn = 510;

//function declaration
void add(vec&, vec&, vec&);
void sub(vec&, vec&, vec&);
void mul(vec&, vec&, vec&);
void brute_force_mul(vec&, vec&, vec&);

int main() {
    char s[maxn], t[maxn];
    int T;
    cin >> T;
    while (T--) {
        scanf("%s%s", s, t);
        int ls = strlen(s), lt = strlen(t);
        int n = max(ls, lt);
        vec x, y;
        for (int i = ls-1; i >= 0; --i) x.PB(s[i]-'0');
        for (int i = ls; i < n; ++i) x.PB(0);
        for (int i = lt-1; i >= 0; --i) y.PB(t[i]-'0');
        for (int i = lt; i < n; ++i) y.PB(0);
        vec z;
        mul(x, y, z);
        int i = z.size() - 1;
        while (!z[i] && i) --i;
        for ( ; i >= 0; --i)
            printf("%d", z[i]);
        puts("");
    }
    return 0;
}

void add(vec& a, vec& b, vec& c) {
    int la = a.size(), lb = b.size();
    for (int i = 0; i < la && i < lb; ++i) c.PB(a[i]+b[i]);
    for (int i = la; i < lb; ++i) c.PB(b[i]);
    for (int i = lb; i < la; ++i) c.PB(a[i]);
    int tmp = 0, lc = c.size();
    for (int i = 0; i < lc; ++i) {
        c[i] += tmp;
        tmp = c[i] / 10;
        c[i] %= 10;
    }
    if (tmp) c.PB(tmp);
}

//a must be larger than b!
void sub(vec& a, vec& b, vec& c) {
    int la = a.size(), lb = b.size();
    for (int i = 0; i < la && i < lb; ++i) c.PB(a[i]-b[i]);
    for (int i = lb; i < la; ++i) c.PB(a[i]);
    int tmp = 0, lc = c.size();
    for (int i = 0; i < lc; ++i) {
        c[i] -= tmp;
        tmp = 0;
        if (c[i] < 0) {
            tmp = 1;
            c[i] += 10;
        }
    }
    while (!c[c.size()-1] && c.size() > 1) c.pop_back();
}

void brute_force_mul(vec& x, vec& y, vec& c) {
    int lx = x.size(), ly = y.size();
    for (int i = 0; i < lx; ++i)
        for (int j = 0; j < ly; ++j)
            c[i+j] += x[i] * y[j];
    int tmp = 0;
    for (int i = 0; i < lx+ly-1; ++i) {
        c[i] += tmp;
        tmp = c[i] / 10;
        c[i] %= 10;
    }
    if (tmp) c.PB(tmp);
}

void mul(vec& x, vec& y, vec& m) {
    int lx = x.size(), ly = y.size();
    if (lx == 0 || ly == 0) {
        m.PB(0);
        return;
    }
    //if lx and ly are smaller than 21, use the brute-force algorithm
    if (lx <= 20 && ly <= 20) {
        m.resize(lx+ly-1, 0);
        brute_force_mul(x, y, m);
        return;
    }
    int n = max(lx, ly);
    for (int i = lx; i < n; ++i) x.PB(0);
    for (int i = ly; i < n; ++i) y.PB(0);
    vec a, b, c, d;
    for (int i = ceil(n/2); i < n; ++i) a.PB(x[i]);
    for (int i = 0; i < ceil(n/2); ++i) b.PB(x[i]);
    for (int i = ceil(n/2); i < n; ++i) c.PB(y[i]);
    for (int i = 0; i < ceil(n/2); ++i) d.PB(y[i]);
    vec t1;
    mul(a, c, t1);
    vec t2;
    mul(b, d, t2);
    vec t3;
    add(a, b, t3);
    vec t4;
    add(c, d, t4);
    vec t5;
    for (int i = 0; i < 2*ceil(n/2); ++i) t5.PB(0);
    int lt1 = t1.size();
    for (int i = 0; i < lt1; ++i) t5.PB(t1[i]);
    vec t6;
    mul(t3, t4, t6);
    vec t7;
    sub(t6, t1, t7);
    vec t8;
    sub(t7, t2, t8);
    vec t9;
    for (int i = 0; i < ceil(n/2); ++i) t9.PB(0);
    int lt8 = t8.size();
    for (int i = 0; i < lt8; ++i) t9.PB(t8[i]);
    vec t10;
    add(t5, t9, t10);
    vec t11;
    add(t10, t2, t11);
    m = t11;
}
