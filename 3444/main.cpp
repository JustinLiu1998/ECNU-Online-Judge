//
//  main.cpp
//  3444
//
//  Created by 刘靖迪 on 2017/12/12.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
long long gcd(long long a, long long b) {
    return b == 0 ? a : gcd(b, a%b);
}
long long FractionSum(int aaaabbbb, int ccccdddd);
/* PreCondition:
 aaaabbbb和ccccdddd表示分数aaaa/bbbb和cccc/dddd,分子分母最多4位数
 PostCondition:
 计算两个分数之和，返回其最简分数xxxxxxxxyyyyyyyy
 */

//********** Specification of FractionSum **********
long long FractionSum(int aaaabbbb, int ccccdddd) { //TODO: your function definition
    int a = aaaabbbb / 10000, b = aaaabbbb % 10000, c = ccccdddd / 10000, d = ccccdddd % 10000;
    long long x = gcd(b, d), y = b * d / x;
    a *= (y / b);
    c *= (y / d);
    x = a + c;
    return (x / gcd(x, y)) * 100000000 + y/gcd(x, y);
}

#include <stdio.h>
int main(int argc, const char * argv[]) {
    int a, b, c, d;
    long long r;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    r = FractionSum(a * 10000 + b, c * 10000 + d);
    printf("%d/%d+%d/%d=%lld/%lld.\n", a, b, c, d, r / 100000000, r % 100000000);
    return 0;
}
