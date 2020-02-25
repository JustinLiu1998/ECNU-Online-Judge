//
//  main.cpp
//  2436
//
//  Created by 刘靖迪 on 2017/11/11.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <map>
using namespace std;
const int N = 500+10;
typedef struct SET {
    int height;
    int parent;
} ST;
ST SET_V[N];
map<string, int> MAP;
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
    }
}

int main(int argc, const char * argv[]) {
    int n, cas=0;
    while (cin >> n) {
        init_set(n);
        MAP.clear();
        for (int i=1; i<=n; i++) {
            string x;
            cin >> x;
            MAP[x] = i;
        }
        int m;
        cin >> m;
        while (m--) {
            string a, b;
            cin >> a >> b;
            union_set(MAP[a], MAP[b]);
        }
        int q;
        cin >> q;
        printf("Case %d:\n", ++cas);
        while (q--) {
            string a, b;
            cin >> a >> b;
            if (find_set(MAP[a]) == find_set(MAP[b]))
                puts("Yes");
            else puts("No");
        }
        puts("");
    }
    return 0;
}
