//
//  main.cpp
//  3134
//
//  Created by 刘靖迪 on 2017/11/7.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
const int mod = 100000;
int main(int argc, const char * argv[]) {
    int T, cas=0; cin >> T;
    while (T--) {
        printf("case #%d:\n", cas++);
        int a;
        cin >> a;
        int b[5];
        for (int i=4; i>=0; i--) {
            b[i] = a%10;
            a/=10;
        }
        a = b[0] * 10000 + b[2] * 1000 + b[4] * 100 + b[3] * 10 + b[1];
        long long ans = 1;
        for (int i=0; i<5; i++) {
            ans *= a;
            ans %= mod;
        }
        printf("%05lld\n", ans);
    }
    return 0;
}
