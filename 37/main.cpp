//
//  main.cpp
//  37
//
//  Created by 刘靖迪 on 2018/1/8.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
#define N 500010
#define FOR(i, a, b) for(LL i = (a); i < (b); i++)
struct k{
    LL x;
    int cnt = 0;
    k () { x = 0; cnt = 0; }
    k (LL in) {
        x = in;
        ULL t = (ULL) in;
        while (t) {
            cnt += t & 1;
            t >>= 1;
        }
    }
    bool operator < (const struct k &y) const {
        return (cnt == y.cnt ? x < y.x : cnt > y.cnt);
    }
};
struct k a[N];
int main(int argc, const char * argv[]) {
    int n;
    scanf("%d", &n);
    FOR(i, 0, n) {
        LL in;
        scanf("%lld", &in);
        a[i] = k(in);
    }
    sort(a, a+n);
    FOR(i, 0, n) {
        printf("%lld%c", a[i].x, i == n-1 ? '\n' : ' ');
    }
    return 0;
}
