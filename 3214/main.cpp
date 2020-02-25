//
//  main.cpp
//  3214
//
//  Created by 刘靖迪 on 2017/10/27.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <queue>
typedef long long LL;
using namespace std;
int n, k;
LL ans = 0;
priority_queue<LL, vector<LL>, greater<LL>> pq;

int main(int argc, const char * argv[]) {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &k);
        pq.push(k);
    }
    if (n != 1)
        while (1) {
            LL t = pq.top(); pq.pop();
            t += pq.top(); pq.pop();
            ans += t;
            if (pq.empty()) break;
            pq.push(t);
        }
    printf("%lld\n", ans);
    return 0;
}
