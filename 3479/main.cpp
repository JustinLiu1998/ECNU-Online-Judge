//
//  main.cpp
//  3479
//
//  Created by 刘靖迪 on 2018/1/2.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
const int N = 103;
int A[N][N], a[N][N];
int tag1[N], tag2[N], dp[N];
int ans = 10000;
void dfs(int u, int flag, int cnt, int target) {      //flag为0，还没到2；flag为1，经过了2
    flag ? tag2[u] = 1 : tag1[u] = 1;
    int cur = dp[u];
    dp[u] = 1;
    for (int j = 0; a[u][j] != 0; j++) {
        int t = a[u][j];
        if (flag == 0) {
            if (t == target) {
                dfs(2, 1, cnt+1, 1);
            }
            else if (tag1[t] == 0) {
                dfs(t, 0, cnt+1, target);
            }
        }
        else {
            if (t == target) {
                ans = min(ans, cnt);
            }
            else if (tag2[t] == 0) {
                dfs(t, 1, (dp[t] ? cnt : cnt+1), target);
            }
        }
    }
    flag ? tag2[u] = 0 : tag1[u] = 0;
    dp[u] = cur;
}

int main(int argc, const char * argv[]) {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i=0; i<m; i++) {
        int x, y;
        scanf("%d%d", &x, &y);
        A[x][y] = 1;
    }
    for (int i=1; i<=n; i++) {
        int j = 0, k = 1;
        while (j <= n && k <= n) {
            while (A[i][k] == 0 && k <= n) {
                k++;
            }
            if (k <= n)
                a[i][j] = k;
            j++;
            k++;
        }
    }
    dfs(1, 0, 1, 2);
    printf("%d\n", ans);
    return 0;
}
