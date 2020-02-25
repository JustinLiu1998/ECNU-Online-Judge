//
//  main.cpp
//  1048
//
//  Created by 刘靖迪 on 2017/11/26.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
typedef long long LL;
int main(int argc, const char * argv[]) {
    int T;
    scanf("%d", &T);
    while (T--) {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }
        sort(a, a+n);
        LL ans = 0;
        for (int i=0; i<n-1; i++) {
            ans += a[i] * (n-1-i);
        }
        cout << ans << endl;
    }
    return 0;
}
