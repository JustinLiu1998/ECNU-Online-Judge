//
//  main.cpp
//  3333
//
//  Created by 刘靖迪 on 2017/9/21.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>

using namespace std;
int gcd(int a, int b) {
    while (b) {
        int y = a % b;
        a = b, b = y;
    }
    return a;
}

int main() {
    int n, k; cin >> n >> k;
    int key = 0;
    for (int i = 0; i < n; i++) {
        int x; scanf("%d", &x);
        key = gcd(key, x);
    }
    int ans = 0;
    for (int i = 2; i * i <= key; i++) {
        if (key % i == 0) {                                     //i是key的因子
            ans = max(ans, k - k % i);
            ans = max(ans, k - k % (key / i));                  //key/i 也是key的因子
        }
    }
    ans = max(ans, k - k % key);
    printf("%d\n", ans);
    return 0;
}
