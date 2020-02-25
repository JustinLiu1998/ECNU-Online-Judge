//
//  main.cpp
//  42
//
//  Created by 刘靖迪 on 2018/1/11.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
int sum(int a, int b) {
    long long t = (long long)a + b;
    if (t <= 2147483647)
        return a + b;
    else return -1;
}
int main(int argc, const char * argv[]) {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", sum(a, b));
    return 0;
}
