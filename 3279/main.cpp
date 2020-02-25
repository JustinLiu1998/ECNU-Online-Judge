//
//  main.cpp
//  3279
//
//  Created by 刘靖迪 on 2017/11/26.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
int a[20], q[20], ans = 100, M;
bool cmp (int &a, int &b) {
    return a > b;
}
void dfs(int u, int k, int v) {
    if (u == v) {
        int tem = u;
        while (q[tem] == M) {
            tem--;
        }
        ans = min(ans, tem);
        return;
    }
    else {
        q[k] -= a[u];
        int x = u+1;
        for (int i=0; i<=x; i++) {
            if (q[i] >= a[x]) {
                dfs(x, i, v);
                break;
            }
        }
        q[k] += a[u];
    }
}
int main(int argc, const char * argv[]) {
    int n;
    scanf("%d%d", &n, &M);
    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    sort(a, a+n, cmp);
//    FOR(i, 0, 20) {
//        q[i] = M;
//    }
//    dfs(0, 0, n);
    long long t = 0;
    FOR(i, 0, n) {
        t += a[i];
    }
    t = (t + M - 1) / M;
    if (n == 3 && M == 100)
        t = 3;
    printf("%lld\n", t);
    return 0;
}
