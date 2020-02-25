//
//  main.cpp
//  3461
//
//  Created by 刘靖迪 on 2018/1/10.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
typedef long long LL;
int main(int argc, const char * argv[]) {
    LL n, m, ans = 0;
    scanf("%lld%lld", &n, &m);
    if (n > m)
        swap(n, m);
    if (n == 1)
        ans = 0;
    else if (n == 2) {
        LL a = m / 2, b = m - a;
        ans = a * (a - 1) + b * (b - 1);
    }
    else if (n == 3 && m == 3) {
        ans = 28;
    }
    else {
        LL a = n * m;
        ans = a * (a - 1) / 2;
    }
    printf("%lld\n", ans);
    return 0;
}
