//
//  main.cpp
//  1817
//
//  Created by 刘靖迪 on 2018/1/2.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <set>
#include <cstring>
using namespace std;
#define INF 0x3f3f3f3f
#define N 605
int cost[N][N];
int tag[N], pre[N], dist[N];
void dijkstra(int u, int n) {
    for (int i=1; i<=n; i++) {
        dist[i] = cost[u][i];
        tag[i] = 0;
        pre[i] = (dist[i] < INF ? u : 0);
    }
    tag[u] = 1;
    pre[u] = 0;
    for (int i=1; i<=n; i++) {
        int min = INF, k=0;
        for (int j=1; j<=n; j++) {
            if (!tag[j] && dist[j] && dist[j] < min) {
                min = dist[j];
                k = j;
            }
        }
        if (k == 0)
            continue;
        tag[k] = 1;
        for (int j=1; j<=n; j++) {
            if (!tag[j] && dist[k] + cost[k][j] < dist[j]) {
                dist[j] = dist[k] + cost[k][j];
                pre[j] = k;
            }
        }
    }
}
int main(int argc, const char * argv[]) {
    int n, m;
    scanf("%d%d", &n, &m);
    memset(cost, INF, sizeof cost);
    while (m--) {
        int x, y, z;
        scanf("%d%d%d", &x, &y, &z);
        cost[x][y] = z;
    }
    dijkstra(1, n);
    printf("%d\n", (dist[n] < INF ? dist[n] : -1));
    return 0;
}

