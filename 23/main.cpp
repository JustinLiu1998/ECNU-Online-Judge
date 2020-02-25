//
//  main.cpp
//  23
//
//  Created by 刘靖迪 on 18/12/2017.
//  Copyright © 2017 刘靖迪. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
const int MAXN = 1e5 + 10;
int a[MAXN];
int main(int argc, const char * argv[]) {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i=0; i<m; i++) {
        scanf("%d", &a[i]);
    }
    a[m++] = -1000000;
    sort(a, a+m);
    int q;
    scanf("%d", &q);
    while (q--) {
        int qr;
        scanf("%d", &qr);
        int l = 0, r = m-1;
        while (l < r) {
            int mid = (l + r) / 2;
            if (a[mid] < qr)
                l = mid + 1;
            else r = mid;
        }
        printf("%d\n", min(abs(a[r - 1] - qr), abs(a[r] - qr)));
    }
    return 0;
}
