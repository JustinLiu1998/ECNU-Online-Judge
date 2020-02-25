//
//  main.cpp
//  1818(C++)
//
//  Created by 刘靖迪 on 2017/10/30.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <queue>

using namespace std;

const int maxn = 110;
const int INF = 0x3f3f3f3f;

int v[maxn], d[maxn], w[maxn][maxn], cnt[maxn], num[maxn][maxn];
int n, e;

void Dijkstra(int v0)
{
    memset(v, 0, sizeof(v));
    for (int i = 0; i < n; ++i)
    {
        d[i] = (i == v0 ? 0 : INF);
        cnt[i] = (i == v0 ? 1 : 0);
    }
    for (int i = 0; i < n; ++i)
    {
        int x, m = INF;
        for (int y = 0; y < n; ++y)
            if (!v[y] && d[y] <= m)
                m = d[x=y];
        v[x] = 1;
        for (int y = 0; y < n; ++y)
            if (!v[y])
            {
                if (d[x] + w[x][y] == d[y])
                    cnt[y] += cnt[x] * num[x][y];
                else
                    if (d[x] + w[x][y] < d[y])
                    {
                        cnt[y] = cnt[x] * num[x][y];
                        d[y] = d[x] + w[x][y];
                    }
            }
    }
}

int main()
{
    cin >> n >> e;
    memset(num, 0, sizeof(num));
    for (int i = 0; i < maxn; ++i)
        for (int j = 0; j < maxn; ++j)
            w[i][j] = INF;
    int a, b, p;
    while (e--)
    {
        scanf("%d%d%d", &a, &b, &p);
        w[a-1][b-1] = p;
        num[a-1][b-1]++;
    }
    Dijkstra(0);
    if (d[n-1] == INF)
        d[n-1] = -1;
    cout << d[n-1] << " " << cnt[n-1] << endl;
    return 0;
}
