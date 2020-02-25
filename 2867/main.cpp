//
//  main.cpp
//  2867
//
//  Created by 刘靖迪 on 2018/1/10.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    scanf("%d", &n);
    while (n--) {
        int a, b;
        scanf("%d%d", &a, &b);
        a ^= b;
        int cnt = 0;
        while (a) {
            cnt += a%2;
            a >>= 1;
        }
        printf("%d\n", cnt);
    }
    return 0;
}
