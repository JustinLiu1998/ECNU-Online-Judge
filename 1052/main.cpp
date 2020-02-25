//
//  main.cpp
//  1052
//
//  Created by 刘靖迪 on 2017/11/26.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
int dp[100010];
int main(int argc, const char * argv[]) {
    int T;
    cin >> T;
    while (T--) {
        memset(dp, 0, sizeof(dp));
        int n, M;
        scanf("%d%d", &n, &M);
        for (int i=0; i<n; i++) {
            int w, p;
            scanf("%d%d", &w, &p);
            for (int j=M; j>=w; j--) {
                dp[j] = max(dp[j-w] + p, dp[j]);
            }
        }
        printf("%d\n", dp[M]);
    }
    return 0;
}
