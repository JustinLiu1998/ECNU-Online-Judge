//
//  main.cpp
//  2108
//
//  Created by 刘靖迪 on 2017/9/22.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>

typedef unsigned long long ull;
ull power (ull n) {
    ull i = 1;
    while (n >= i*2)
        i *= 2;
    return (n - i) * 2 + 1;
}
int main(int argc, const char * argv[]) {
    ull a, b;
    while (scanf("%llu%llu", &a, &b) == 2) {
        while (b--) {
            if (a == power(a))
                break;
            a = power(a);
        }
        printf("%llu\n", a);
    }
    return 0;
}
