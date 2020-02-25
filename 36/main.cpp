//
//  main.cpp
//  36
//
//  Created by 刘靖迪 on 2018/1/10.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
int PopCount(unsigned n) {
    int cnt = 0;
    while (n) {
        cnt += n % 2;
        n >>= 1;
    }
    return cnt;
}
int main(int argc, const char * argv[]) {
    unsigned int n;
    scanf("%u", &n);
    printf("%d\n", PopCount(n));
    return 0;
}
