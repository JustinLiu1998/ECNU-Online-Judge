//
//  main.cpp
//  1829
//
//  Created by 刘靖迪 on 2017/11/29.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
typedef struct gg {
    int num, win, los, f;
    bool operator < (const struct gg& y) const {
        if (f != y.f)
            return f > y.f;
        else if (win != y.win)
            return win > y.win;
        else if (los != y.los)
            return los < y.los;
        else return num < y.num;
    }
} GG;
GG team[20];
int main(int argc, const char * argv[]) {
    int n, m;
    while (scanf("%d%d", &n, &m) == 2 && (n || m)) {
        memset(team, 0, sizeof(team));
        for (int i=1; i<=n; i++)
            team[i].num = i;
        while (m--) {
            int a, b, c;
            scanf("%d%d%d", &a, &b, &c);
            if (c != 0) {
                if (c == -1) {
                    int t = a;
                    a = b;
                    b = t;
                }
                team[a].f += 3;
                team[a].win += 1;
                team[b].f -= 1;
                team[b].los += 1;
            }
            else  {
                team[a].f += 1;
                team[b].f += 1;
            }
        }
        sort(team+1, team+n+1);
        for (int i=1; i<=n; i++)
            printf("%d ", team[i].num);
        puts("");
    }
    return 0;
}
