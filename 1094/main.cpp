//
//  main.cpp
//  1094
//
//  Created by 刘靖迪 on 2017/9/30.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
typedef long long ll;

int quick_pow(int a, int n, int p) {
    if (n == 0) return 1;
    else if (n == 1) return a % p;
    else {
        int ret = quick_pow(a, n / 2, p);
        ret = 1LL * ret * ret % p;
        if (n & 1) ret = 1LL * ret * a % p;
        return ret;
    }
}

int subtest(int a, int n) {
    int raw = n--;
    while (!(n & 1)) {
        int ret = quick_pow(a, n, raw);
        if (ret == raw - 1)
            return 1;
        else if (ret != 1)
            return 0;
        n >>= 1;
    }
    return 1;
}

int miller_rabin(int n) {
    if (n == 1) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;
    int prime_list[] = {2, 3, 5, 7, 11, 13, 17, 19};
    if (n < 20) {
        for (int i = 0; i < 8; ++i)
            if (prime_list[i] == n) return 1;
        return 0;
    }
    for (int i = 0; i < 8; ++i)
        if (!subtest(prime_list[i], n))
            return 0;
    return 1;
}

int main(int argc, const char * argv[]) {
    int n;
    while(~scanf("%llu",&n))
        puts(miller_rabin(n) ? "YES" : "NO");
    return 0;
}
