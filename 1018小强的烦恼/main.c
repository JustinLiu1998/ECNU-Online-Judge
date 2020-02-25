//
//  main.c
//  1018小强的烦恼
//
//  Created by 刘靖迪 on 2017/11/8.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
typedef struct SET {
    int height;
    int parent;
    int enemy;
} ST;

ST SET_V[100002];

int find_set (int x) {
    int r = SET_V[x].parent;
    if (r != x)
        SET_V[x].parent = find_set(r);
    return SET_V[x].parent;
}

void union_set (int x, int y) {
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

void init_set (int n) {
    for (int i=1; i<=n; i++) {
        SET_V[i].parent = i;
        SET_V[i].height = 0;
        SET_V[i].enemy = 0;
    }
}
int main(int argc, const char * argv[]) {
    int T;
    scanf("%d", &T);
    while (T--) {
        int n, m;
        scanf("%d%d", &n, &m);
        init_set(n);
        char c;
        int x, y;
        for (int i=0; i<m; i++) {
            getchar();
            scanf("%c%d%d", &c, &x, &y);
            if (c == 'A') {
                if (SET_V[x].enemy == 0)
                    SET_V[x].enemy = find_set(y);
                else
                    union_set(y, SET_V[x].enemy);
                if (SET_V[y].enemy == 0)
                    SET_V[y].enemy = find_set(x);
                else
                    union_set(x, SET_V[y].enemy);
                }
            else {
                if (find_set(x) == find_set(y))
                    puts("In the same gang.");
                else if (find_set(x) == find_set(SET_V[y].enemy) || find_set(y) == find_set(SET_V[x].enemy))
                    puts("In different gangs.");
                else puts("Not sure yet.");
            }
        }
    }
}
