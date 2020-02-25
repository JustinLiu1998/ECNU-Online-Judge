//
//  main.cpp
//  3531
//
//  Created by 刘靖迪 on 2018/7/6.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <bits/stdc++.h>

using namespace std;
int n, k;
using LL = long long;
LL ans[160] = {1};
int tag[160];
int main(int argc, const char * argv[]) {
    cin >> n >> k;
    for (int i=0; i<k; ++i) {
        int t; scanf("%d", &t);
        tag[t] = 1;
    }
    for (int i=1; i<=n; ++i) {
        if (!tag[i])
            for (int j=1; j<=3 && i-j>=0; ++j) {
                if (!tag[i-j])
                    ans[i]+=ans[i-j];
            }
    }
    cout << ans[n] << endl;
    return 0;
}
