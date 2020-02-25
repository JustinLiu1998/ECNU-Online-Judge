//
//  main.cpp
//  2443
//
//  Created by 刘靖迪 on 2018/1/7.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
typedef long long LL;
int main(int argc, const char * argv[]) {
    int n;
    scanf("%d", &n);
    while (n--) {
        LL x;
        scanf("%lld", &x);
        while (x >= 10) {
            int tem = 0;
            while (x) {
                tem += x % 10;
                x /= 10;
            }
            x = tem;
        }
        printf("%lld\n", x);
    }
    return 0;
}
