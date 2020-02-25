//
//  main.cpp
//  1109
//
//  Created by 刘靖迪 on 2017/10/22.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, const char * argv[]) {
    int T;
    cin >> T;
    while (T--) {
        int n, tem = 0, dp = -99999999, ans = -99999999, x;
        cin >> n;
        while (n--) {
            scanf("%d", &x);
            tem += x;
            dp = max(dp, x);
            tem = max(tem, 0);
            ans = max(ans, tem);
        }
        if (dp < 0)
            ans = dp;
        cout << ans << endl;
    }
    return 0;
}
