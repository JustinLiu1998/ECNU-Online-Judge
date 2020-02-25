//
//  main.cpp
//  31
//
//  Created by 刘靖迪 on 2018/1/7.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
#define MAX 1010
typedef long long LL;
typedef struct {
    LL x, y, z;
} Point;
int NearPoints(Point *p, int n) {
    int ans = 0;
    for (int i=0; i<n; i++) {
        if (p[i].x * p[i].x + p[i].y * p[i].y + p[i].z * p[i].z < 10000)
            ans++;
    }
    return ans;
}
int main(int argc, char * argv[]) {
    int n, i;
    Point p[MAX];
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%lld%lld%lld", &p[i].x, &p[i].y, &p[i].z);
    printf("%d\n", NearPoints(p, n));
    return 0;
}

