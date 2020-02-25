//
//  main.cpp
//  3446
//
//  Created by 刘靖迪 on 2017/12/12.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
double dp[2010][12010];
double probability(int n, int k) {
    if (k < n || k > n * 6)
        return 0;
    dp[0][0] = 1;
    for (int i=0; i<n; i++) {
        for (int j=i; j<=i * 6; j++) {
            for (int k=1; k<=6; k++) {
                dp[i+1][j+k] += dp[i][j] / 6;
            }
        }
    }
    return dp[n][k];
}
int main(int argc, const char * argv[]) {
    int n, k;
    scanf("%d%d", &n, &k);
    printf("%.6f\n", probability(n, k));
    return 0;
}
