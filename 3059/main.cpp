//
//  main.cpp
//  3059
//
//  Created by 刘靖迪 on 2017/11/16.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
typedef struct gg{
    double x, y;
} GG;
bool cmp (GG& a, GG& b) {
    if (a.y != b.y)
        return a.y < b.y;
    else return a.x > b.x;
}
int main(int argc, const char * argv[]) {
    int T, cas=0; cin >> T;
    while (T--) {
        printf("case #%d:\n", cas++);
        GG a[1010], b[1010];
        int n; cin >> n;
        for (int i=0; i<n; i++) {
            scanf("%lf%lf", &a[i].x, &a[i].y);
            b[i].x = sqrt(a[i].x * a[i].x + a[i].y * a[i].y);
            b[i].y = atan2(a[i].y, a[i].x);
            if (b[i].y < 0) b[i].y += 2 * M_PI;
        }
        sort(b, b+n, cmp);
        for (int i=0; i<n; i++) {
            printf("(%.4lf,%.4lf)\n", b[i].x, b[i].y);
        }
    }
    return 0;
}
