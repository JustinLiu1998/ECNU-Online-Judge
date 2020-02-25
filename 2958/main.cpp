//
//  main.cpp
//  2958
//
//  Created by 刘靖迪 on 2017/10/26.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
int a[5010], dp[5010];
int main(int argc, const char * argv[]) {
    int T, cas = 0;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        for (int i=0; i<n; i++) {
            scanf("%d", &a[i]);
            dp[i] = a[i];
        }
        int Max = a[0];
        for (int i=0; i<n; i++) {
            for (int j=0; j<i; j++) {
                if (a[i] > a[j]) {
                    dp[i] = max(dp[i], a[i] + dp[j]);
                    Max = max(Max, dp[i]);
                }
            }
        }
        printf("case #%d:\n%d\n", cas++, Max);
    }
    return 0;
}
