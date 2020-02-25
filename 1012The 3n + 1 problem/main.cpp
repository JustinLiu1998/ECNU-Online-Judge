//
//  main.cpp
//  1012The 3n + 1 problem
//
//  Created by 刘靖迪 on 2017/11/24.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
int cnt(int n) {
    int len = 1;
    while (n>1) {
        if (n & 1)
            n = n*3 + 1;
        else n/=2;
        len++;
    }
    return len;
}
int pre[1000010];
int main(int argc, const char * argv[]) {
    for (int i=1; i<=1000000; i++) {
        pre[i] = cnt(i);
    }
    int a, b;
    while (cin >> a >> b) {
        int ans = 0;
        for (int i=a; i<=b; i++) {
            ans = max(pre[i], ans);
        }
        printf("%d %d %d\n", a, b, ans);
    }
    return 0;
}
