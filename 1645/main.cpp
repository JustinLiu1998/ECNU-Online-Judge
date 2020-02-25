//
//  main.cpp
//  1645
//
//  Created by 刘靖迪 on 2018/1/9.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <queue>
using namespace std;
typedef struct k{
    int val, is;
} K;
int main(int argc, const char * argv[]) {
    int T;
    scanf("%d", &T);
    while (T--) {
        int n, m;
        scanf("%d%d", &n, &m);
        queue<K> Q;
        int count[10];
        memset(count, 0, sizeof(count));
        for (int i=0; i<n; i++) {
            int x;
            scanf("%d", &x);
            count[x]++;
            Q.push(K{x, i == m ? 1 : 0});
        }
        int ans = 0;
        while (1) {
            int tem = Q.front().val;
            int flag = 0;
            for (int i=tem+1; i<10; i++) {
                if (count[i]) {
                    flag = 1;
                    break;
                }
            }
            if (flag) {
                Q.push(Q.front());
                Q.pop();
            }
            else {
                ans++;
                if (Q.front().is) {
                    break;
                }
                count[Q.front().val]--;
                Q.pop();
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
