//
//  main.cpp
//  1043
//
//  Created by 刘靖迪 on 2017/10/11.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
#define MAXN 1000000
void solve() {
    int N;
    cin >> N;
    int a[N];
    for (int i=0;i<N; i++)
        scanf("%d", &a[i]);
    int m;
    for (m = N; m<=MAXN; m++) {
        int dp[m];
        memset(dp, 0, sizeof(dp));
        int i;
        for (i=0; i<N; i++) {
            int tem = a[i] % m;
            if (!dp[tem])
                dp[tem] = 1;
            else break;
        }
        if (i == N) {
            cout << m << endl;
            break;
        }
    }
}
int main(int argc, const char * argv[]) {
    int T; cin >> T;
    while (T--) solve();
    return 0;
}

