//
//  main.cpp
//  2585(dp)
//
//  Created by 刘靖迪 on 2017/11/2.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
int dp[3410][12890];
int main(int argc, const char * argv[]) {
    int N, M, w, d;
    cin >> N >> M;
    for (int i=1; i<=N; i++) {
        scanf("%d%d", &w, &d);
        for (int j=0; j<=M; j++) {
            dp[i][j] = (i == 1 ? 0 : dp[i-1][j]);
            if (j >= w) dp[i][j] = max(dp[i][j], dp[i-1][j-w] + d);
        }
    }
    cout << dp[N][M] << endl;
    return 0;
}
