//
//  main.cpp
//  3216
//
//  Created by 刘靖迪 on 2017/10/27.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
typedef long long ll;
const ll inf = 1e14 + 7;

struct Node {
    int x, h;
    int type;
    bool operator < (const Node &u) const {
        return x < u.x;
    }
};

int n;
Node a[100000];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int x, y, z;
        scanf("%d%d%d", &x, &y, &z);
        a[2 * i] = (Node){x, z, 1};
        a[2 * i + 1] = (Node){y, z, 0};
    }
    sort(a, a + 2 * n);
    multiset<int> ms;
    ll ans = 0;
    for (int i = 0; i < 2 * n; ++i) {
        if (!ms.empty()) {
            ans += 1LL * (a[i].x - a[i - 1].x) * (*ms.rbegin());           //乘最大高度
        }
        if (a[i].type == 1)
            ms.insert(a[i].h);
        else
            ms.erase(ms.find(a[i].h));
    }
    printf("%lld\n", ans);
    return 0;
}
