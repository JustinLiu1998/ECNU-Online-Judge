//
//  main.cpp
//  3239
//
//  Created by 刘靖迪 on 2017/11/7.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>

using namespace std ;
int const maxn = 105;
int a[maxn];
short int dp[maxn][maxn];           //dp[i][j]表示的是以i和j为前两个元素的等差数列最长值,i<j

void solve () {
    int n, ans;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    sort(a, a+n);
    for (int i = 0; i < n ;i++) {
        for (int j = i+1; j < n; j++) {
            dp[i][j] = 2; //AP最小值为2
        }
    }
    ans = 2 ;
    for (int j = n-2; j >= 1; j--) {
        int i = j-1, k = j+1;
        while (i>=0 && k<=n-1) {
            if (a[i]+a[k] < 2*a[j]) {
                k++;
            }
            else if (a[i]+a[k] > 2*a[j]) {
                i--;
            }
            else {
                dp[i][j] = dp[j][k]+1 ;
                if (dp[i][j] > ans) ans = dp[i][j];
                i--; k++;
            }
        }
    }
    if (n == 1) ans = 1;
    printf("%d\n", ans);
}
int main() {
    int T, cas=0; cin >> T;
        while (T--) {
            printf("case #%d:\n", cas++);
            solve();
        }
    return 0 ;
}
