//
//  main.cpp
//  3223
//
//  Created by 刘靖迪 on 18/12/2017.
//  Copyright © 2017 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
const int MAXN = 1e5 + 10;
int a[MAXN];
int main(int argc, const char * argv[]) {
    int n, k, r;
    scanf("%d%d%d", &n, &k, &r);
    int ans = 0;
    for (int i = 1; i <= k; ++i) {
        int x;
        scanf("%d", &x);
        a[x] = 1;
    }
    int cur = 0;
    for (int i = 1; i <= n; ++i) {
        cur += a[i];
        if (i >= r) {
            cur -= a[i - r];
            while (cur < 2) {
                int j = i;
                while (a[j]) j--;
                a[j] = 1;
                ans++;
                cur++;
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}
