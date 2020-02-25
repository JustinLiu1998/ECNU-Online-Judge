//
//  main.cpp
//  2585
//
//  Created by 刘靖迪 on 2017/11/2.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
typedef struct node {
    int w, d;
    double x;
} NODE;

bool cmp (NODE &a, NODE &b) {
    if (a.x == b.x)
        return a.w > b.w;
    else return a.x > b.x;
}
int main(int argc, const char * argv[]) {
    int N, M;
    cin >> N >> M;
    NODE a[N];
    for (int i=0; i<N; i++) {
        scanf("%d%d", &a[i].w, &a[i].d);
        a[i].x = a[i].d*1.0 / a[i].w;
    }
    sort(a, a+N, cmp);
    int ans = 0, count = 0;
    for (int i=0; i<N; i++) {
        if (count + a[i].w <= M) {
            ans += a[i].d;
            count += a[i].w;
        }
    }
    cout << ans << endl;
    return 0;
}
