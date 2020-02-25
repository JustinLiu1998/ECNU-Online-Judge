//
//  main.cpp
//  45
//
//  Created by 刘靖迪 on 2018/1/11.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
int gcd(int a, int b) {
    return (b == 0 ? a : gcd(b, a%b));
}
int arrayGCD(int *p, int n) {
    int ret = p[0];
    for (int i=1; i<n; i++) {
        ret = gcd(ret, p[i]);
    }
    return  ret;
}
int main(int argc, const char * argv[]) {
    int a[100], n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("%d\n", arrayGCD(a, n));
    return 0;
}
