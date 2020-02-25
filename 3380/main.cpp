//
//  main.cpp
//  3380
//
//  Created by 刘靖迪 on 2017/10/4.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int INF = 1e9;
int main(int argc, const char * argv[]) {
    int T;
    cin >> T;
    while (T--) {
        int len, n;
        cin >> len >> n;
        int x, MIN = INF, MAX = -INF, p;
        for (int i=0; i<n; i++) {
            scanf("%d", &x);
            p = min(x, len-x);
            MAX = max(MAX, p);
            MIN = min(MIN, p);
        }
        printf("%d %d\n", MAX, len - MIN);
    }
    return 0;
}
