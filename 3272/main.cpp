//
//  main.cpp
//  3272
//
//  Created by 刘靖迪 on 2017/10/27.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//


#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
#define MM(x, v) memset(x, v, sizeof x)
const int MOD = 998244353;
const int G = 3;
const int N = 2e5 + 10;
int A[4 * N], B[4 * N];

int quick_pow(int a, int b) {
    if (b == 0) return 1;
    if (b == 1) return a % MOD;
    int res = quick_pow(a, b / 2);
    res = 1LL * res * res % MOD;
    if (b & 1) res = 1LL * res * a % MOD;
    return res;
}

void ntt(int * a, int N, int f) {
    int i, j = 0, t, k;
    for (i = 1; i < N - 1; i++) {
        for (t = N; j ^= t >>= 1, ~j & t;);
        if (i < j) {
            swap(a[i], a[j]);
        }
    }
    for (i = 1; i < N; i <<= 1) {
        t = i << 1;
        int wn = quick_pow(G, (MOD - 1) / t);
        for (j = 0; j < N; j += t) {
            int w = 1;
            for (k = 0; k < i; k++, w = 1LL * w * wn % MOD) {
                int x = a[j + k], y = 1LL * w * a[j + k + i] % MOD;
                a[j + k] = (x + y) % MOD, a[j + k + i] = (x - y + MOD) % MOD;
            }
        }
    }
    if (f == -1) {
        reverse(a + 1, a + N);
        int inv = quick_pow(N, MOD - 2);
        for (i = 0; i < N; i++)
            a[i] = 1LL * a[i] * inv % MOD;
    }
}

int* solve(int* a, int *b, int n) {
    int N = 1;
    while (N <= 2 * n)
        N <<= 1;
    ntt(a, N, 1);
//    ntt(b, N, 1);
    for (int i = 0; i < N; ++i)
        a[i] = 1LL * a[i] * b[i] % MOD;
    ntt(a, N, -1);
    return a;
}

int main(int argc, const char * argv[]) {
    int T, cas=0;
    scanf("%d", &T);
    while (T--) {
        printf("Case %d: ", ++cas);
        MM(A, 0), MM(B, 0);
        int n, tem;
        scanf("%d", &n);
        for (int i=0; i<n; i++) {
            scanf("%d", &tem);
            A[tem] = 1;
            B[tem] = 1;
        }
        solve(A, A, N);
        for (int i=1; i<=100000; i++) {
            A[2 * i] -= B[i];
        }
        int flag = 1;
        for (int i=1; i<=200000; i++) {
            if (A[i] && B[i]) {
                puts("NO");
                flag = 0;
                break;
            }
        }
        if (flag)
            puts("YES");
    }
    return 0;
}
