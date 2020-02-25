//
//  main.cpp
//  2527
//
//  Created by 刘靖迪 on 2017/11/20.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int T;
    cin >> T;
    while (T--) {
        int n, p, m, t;
        scanf("%d%d%d%d", &n, &p, &m, &t);
        int dp[102][102] = {0};
        dp[0][p] = 1;
        for (int i=1; i<=m; i++) {
            for (int j=1; j<=n; j++) {
                dp[i][j] = dp[i-1][j-1] + dp[i-1][j+1];
            }
        }
        cout << dp[m][t] << endl;
    }
    return 0;
}
