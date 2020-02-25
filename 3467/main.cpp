//
//  main.cpp
//  3467
//
//  Created by 刘靖迪 on 2017/12/14.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
const int N = 3e5 + 10;
int a[N];
int main(int argc, const char * argv[]) {
    int n, d;
    scanf("%d%d", &n, &d);
    for (int i=1; i<=n; i++) {
        scanf("%d", &a[i]);
    }
    int ans = 0;
    int i = 1;
    while (i<n) {
        int flag = 1;
        for (int j=d; j>0; j--) {
            if (a[i+j]) {
                i += j;
                flag = 0;
                break;
            }
        }
        if (flag == 0)
            continue;
        ans++;
        i+=d;
    }
    printf("%d\n", ans);
    return 0;
}
