//
//  main.cpp
//  3051
//
//  Created by 刘靖迪 on 2017/11/24.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
typedef long long LL;
int main(int argc, const char * argv[]) {
    int T, cas=0;
    cin >> T;
    LL dp[53];
    dp[1] = 1; dp[2] = 2; dp[3] = 4; dp[4] = 8;
    for (int i=5; i<=50; i++) {
        dp[i] = dp[i-4]+dp[i-3]+dp[i-2]+dp[i-1];
    }
    while (T--) {
        printf("case #%d:\n", cas++);
        int n;
        cin >> n;
        printf("%lld\n", dp[n]);
    }
    return 0;
}
