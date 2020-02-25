//
//  main.cpp
//  3327
//
//  Created by 刘靖迪 on 2018/1/2.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <algorithm>
#define N 100010
using namespace std;
int main(int argc, char * argv[]) {
    int n, m;
    scanf("%d%d", &n, &m);
    int al[N], ar[N], bl[N], br[N];
    for (int i=0; i<n; i++) {
        scanf("%d%d", &al[i], &ar[i]);
    }
    for (int i=0; i<m; i++) {
        scanf("%d%d", &bl[i], &br[i]);
    }
    sort(al, al+n);
    sort(ar, ar+n);
    sort(bl, bl+m);
    sort(br, br+m);
    pair<int, int> tem[N];
    int i=0, j=0, t=0;
    while (j < m) {
        while (ar[i] < bl[j]) {
            t++;
            i++;
        }
        tem[j++].first = t;
    }
    i = n-1; j = m-1; t=0;
    while (j >= 0) {
        while (al[i] > br[j]) {
            i--;
            t++;
        }
        tem[j--].second = t;
    }
    int ans = 0;
    for (int i=0; i<m; i++) {
        ans += (n - tem[i].first - tem[i].second);
    }
    printf("%d\n", ans);
    return 0;
}
