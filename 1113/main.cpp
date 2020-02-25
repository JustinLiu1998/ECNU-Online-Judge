//
//  main.cpp
//  1113
//
//  Created by 刘靖迪 on 2017/11/21.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
int dp[35][20005], v[35];
int main(int argc, const char * argv[]) {
    int V;
    while (scanf("%d", &V) == 1) {
        memset(dp, 0, sizeof(dp));
        int n;
        scanf("%d", &n);
        for (int i=1; i<=n; i++) {
            scanf("%d", &v[i]);
        }
        for (int i=n; i>=1; i--) {
            for (int j=0; j<=V; j++) {
                dp[i][j] = (i == n ? 0 : dp[i+1][j]);
                if (v[i] <= j) dp[i][j] = max(dp[i][j], dp[i+1][j-v[i]] + v[i]);
            }
        }
        printf("%d\n", V - dp[1][V]);
    }
    return 0;
}

