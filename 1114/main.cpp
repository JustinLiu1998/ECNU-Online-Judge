//
//  main.cpp
//  1114
//
//  Created by 刘靖迪 on 2018/1/7.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
int a[11] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
int ans[20];
int tag[20];
int isprime(int t) {
    int cnt = 0;
    for (int i=0; i<11 && a[i] <= t; i++) {
        if (t == a[i]) {
            cnt = 1;
            break;
        }
    }
    return cnt;
}
void dfs(int u, int v, int n) {
    if (v == n) {
        for (int i=0; i<n; i++) {
            printf("%d%c", ans[i], i == n-1 ? '\n' : ' ');
        }
    }
    else {
        ans[v] = u;
        tag[u] = 1;
        if (v < n-1)
            for (int i=1; i<=n; i++) {
                if (!tag[i] && isprime(i + u)) {
                    dfs(i, v+1, n);
                }
            }
        else if (v == n-1 && isprime(1 + u))
            dfs(1, v+1, n);
        tag[u] = 0;
        ans[v] = 0;
    }
}
int main(int argc, const char * argv[]) {
    int n;
    scanf("%d", &n);
    dfs(1, 0, n);
    return 0;
}
