//
//  main.cpp
//  3367
//
//  Created by 刘靖迪 on 2017/9/27.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>

using namespace std;
typedef long long LL;
#define FOR(i, a, b) for(LL i = (a); i < (b); ++i)
const LL maxn = (LL)1e5 + 100, INF = (LL)1e15;
LL n, a[maxn], b[maxn], ans;

int main() {
    scanf("%lld", &n);
    FOR (i, 0, n) {
        scanf("%lld", &a[i]);
        if (a[i]) b[i] = -1, ++ans;
        else b[i] = 1;
    }
    
    LL sum = 0, best = -INF;
    FOR (i, 0, n) {
        if (sum < 0) sum = 0;
        sum += b[i];
        if (sum > best) best = sum;
    }
    ans += best;
    printf("%lld\n", ans);
    return 0;
}
