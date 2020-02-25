//
//  main.cpp
//  3469
//
//  Created by 刘靖迪 on 2017/12/14.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
#define N 10000000 + 10
int a[N];
int main(int argc, const char * argv[]) {
    for (int i=1; i < N/2; i++) {
        for (int j = i+i; j<N; j += i) {
            a[j] += i;
        }
    }
    for (int i=1; i<N; i++) {
        a[i] = i - a[i];
    }
    int x, y;
    scanf("%d%d", &x, &y);
    long long ans = 0;
    for (int i = x; i<=y; i++) {
        ans += (a[i] >= 0 ? a[i] : -a[i]);
    }
    printf("%lld\n", ans);
    return 0;
}
