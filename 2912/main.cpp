//
//  main.cpp
//  2912
//
//  Created by 刘靖迪 on 2018/1/5.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
int tag[10];
char tem[13] = "";
int cnt = 0;
void dfs(int u, int v, int n) {
    if (v == n) {
        if (n < 8)
            printf("%s\n", tem);
        cnt++;
        return;
    }
    for (int i=1; i<=n; i++) {
        if (!tag[i] && i != v+1) {
            tag[i] = 1;
            tem[v] = i + '0';
            dfs(i, v+1, n);
            tag[i] = 0;
            tem[v] = '\0';
        }
    }
}
int main(int argc, const char * argv[]) {
    int T;
    scanf("%d", &T);
    while (T--) {
        int n;
        scanf("%d", &n);
        cnt = 0;
        dfs(0, 0, n);
        if (n >= 8)
            printf("%d\n", cnt);
    }
    return 0;
}
