//
//  main.cpp
//  3364
//
//  Created by 刘靖迪 on 2018/1/8.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <vector>
#include <map>
using namespace std;
#define INF 0x3f3f3f3f
vector<int> a[100002];
int tag[100002];
map<pair<int, int>, int> Map;
int ans;
void dfs(int u, int v, int len) {
    if (u == v) {
        ans = min(ans, len);
        return;
    }
    tag[u] = 1;
    for (auto iter = a[u].begin(); iter != a[u].end(); iter++) {
        int t = *iter;
        if (!tag[t])
            dfs(t, v, len+1);
    }
    tag[u] = 0;
}
int main(int argc, const char * argv[]) {
    int n, q;
    int x, y;
    scanf("%d%d", &n, &q);
    for (int i=0; i<n; i++) {
        scanf("%d%d", &x, &y);
        a[x].push_back(y);
        a[y].push_back(x);
    }
    while (q--) {
        scanf("%d%d", &x, &y);
        if (Map.find({x, y}) != Map.end()) {
            ans = Map[{x, y}];
        }
        else {
            ans = INF;
            dfs(x, y, 0);
            Map[{x, y}] = Map[{y, x}] = ans;
        }
        printf("%d\n", ans == INF ? -1 : ans);
    }
    return 0;
}


