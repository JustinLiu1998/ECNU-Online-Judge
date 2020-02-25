//
//  main.cpp
//  3369
//
//  Created by 刘靖迪 on 2018/1/10.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
int vis[1001], ans = 0;
vector<int> q[1001];
void dfs(int u, int len) {
    if (len == 3) {
        ans++;
    }
    else {
        vis[u] = 1;
        for (int i:q[u]) {
            if (!vis[i]) {
                dfs(i, len+1);
            }
        }
        vis[u] = 0;
    }
}
int main(int argc, const char * argv[]) {
    int n;
    scanf("%d", &n);
    for (int i=0; i<n-1; i++) {
        int x, y;
        scanf("%d%d", &x, &y);
        q[y].push_back(x);
        q[x].push_back(y);
    }
    for (int i=1; i<=n; i++) {
        dfs(i, 0);
    }
    printf("%d\n", ans/2);
    return 0;
}
