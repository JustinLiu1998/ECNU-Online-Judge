//
//  main.cpp
//  1111
//
//  Created by 刘靖迪 on 2017/11/25.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cstring>
#define MAXINT 0x3f3f3f3f
using namespace std;
int dp[102][102];
int main(int argc, const char * argv[]) {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        memset(dp, MAXINT, sizeof(dp));
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=i; j++) {
                scanf("%d", &dp[i][j]);
            }
        }
        for (int i=n-1; i>0; i--) {
            for (int j=i; j>0; j--) {
                dp[i][j] = dp[i][j] + min(dp[i+1][j], dp[i+1][j+1]);
            }
        }
        printf("%d\n", dp[1][1]);
    }
    return 0;
}

