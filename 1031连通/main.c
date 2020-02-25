//
//  main.c
//  1031连通
//
//  Created by 刘靖迪 on 2017/11/9.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
typedef struct SET {
    int height;
    int parent;
} ST;
ST SET_V[1000010];

int find_set (int x) {                                  //查找根，用了递归和记忆算法
    int r = SET_V[x].parent;
    if (r != x)
        SET_V[x].parent = find_set(r);
    return SET_V[x].parent;
}
void union_set (int x, int y) {                         //合并
    int a = find_set(x), b = find_set(y);
    if (a == b) return ;
    if (SET_V[a].height < SET_V[b].height)
        SET_V[a].parent = b;
    else if (SET_V[a].height > SET_V[b].height)
        SET_V[b].parent = a;
    else {
        SET_V[a].height++;
        SET_V[b].parent = a;
    }
}
void init_set (int n) {                             //初始化
    for (int i=1; i<=n; i++) {
        SET_V[i].parent = i;
        SET_V[i].height = 0;
    }
}
int main(int argc, const char * argv[]) {
    int n, m;
    scanf("%d%d", &n, &m);
    init_set(n);
    while (m--) {                                   //一边输入一边合并
        int a, b;
        scanf("%d%d", &a, &b);
        union_set(a, b);
    }
    int flag = 1;
    for (int i=1; i<n; i++) {                           //如果所有的标记都是1，那么是连通图
        if (find_set(i) != find_set(i+1)) {
            flag = 0;
            break;
        }
    }
    if (flag) puts("yes");
    else puts("no");
    return 0;
}
