//
//  main.cpp
//  3357
//
//  Created by 刘靖迪 on 2017/9/30.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;

double power(double a, int d, int k) {
    if (k == 1)
        return 1/a;
    return 1/(a + power(a+d, d, k-1));
}
int main(int argc, const char * argv[]) {
    int d, k;
    cin >> d >> k;
    printf("%.16f\n", power(1, d, min(30, k)));
    return 0;
}
