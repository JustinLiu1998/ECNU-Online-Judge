//
//  main.cpp
//  2446
//
//  Created by 刘靖迪 on 2017/11/24.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
typedef struct gg{
    int x, y;
    bool operator < (const gg &b) const {
        return (x == b.x ? y > b.y : x < b.x);
    }
}GG;
int main(int argc, const char * argv[]) {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        scanf("%d%d", &N, &K);
        GG a[N];
        for (int i=0; i<N; i++) {
            scanf("%d%d", &a[i].x, &a[i].y);
        }
        sort(a, a+N);
        int cnt=0;
        int i;
        for (i=0; i<N; i++) {
            if (cnt < K)
                cnt+=a[i].y;
            else break;
        }
        if (cnt >= K)
            printf("%d\n", a[i-1].x);
        else printf("UNLUCKY\n");
    }
    return 0;
}
