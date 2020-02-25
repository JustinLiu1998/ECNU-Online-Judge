//
//  main.cpp
//  1129
//
//  Created by 刘靖迪 on 2018/1/10.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
int dp[21][21];
int main(int argc, const char * argv[]) {
    for (int i=2; i<=20; i++) {
        dp[i][2] = i * (i-1) / 2;
    }
    for (int i=3; i<=20; i++) {
        for (int j=3; j<=i; j++) {
            dp[i][j] = dp[i-1][j] + (dp[i-2][j-2] + (i-1) * dp[i-1][j-1]);
        }
    }
    int C;
    scanf("%d", &C);
    while (C--) {
        int N, M;
        scanf("%d%d", &N, &M);
        printf("%d\n", dp[N][M]);
    }
    return 0;
}
