//
//  main.cpp
//  1127
//
//  Created by 刘靖迪 on 2017/12/6.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cstring>
int a[110], b[110];
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    while (cin >> n && n) {
        for (int i=0; i<n; i++) {
            scanf("%d%d", &a[i], &b[i]);
        }
        double ans=0;
        for (int i=1; i<n; i++) {
            ans += 0.5 * (a[i] - a[i-1]) * (b[i] + b[i-1]);
        }
        if (ans < 0)
            ans = -(ans);
        printf("%.1lf\n", ans);
    }
    return 0;
}
