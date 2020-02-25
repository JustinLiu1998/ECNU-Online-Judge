//
//  main.cpp
//  1292
//
//  Created by 刘靖迪 on 2018/1/3.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <queue>
#include <map>
using namespace std;
#define N 1010
int t;
void solve() {
    queue<int> Q;
    queue<int> q[t+1];
    map<int, int> team;
    for (int i=0; i<t; i++) {
        int n;
        scanf("%d", &n);
        int x;
        for (int j=0; j<n; j++) {
            scanf("%d", &x);
            team[x] = i;
        }
    }
    char str[15];
    while (scanf("%s", str)) {
        if (str[0] == 'E') {
            int x;
            scanf("%d", &x);
            if (q[team[x]].empty())
                Q.push(team[x]);
            q[team[x]].push(x);
        }
        else if (str[0] == 'D') {
            int tem = Q.front();
            printf("%d\n", q[tem].front());
            q[tem].pop();
            if (q[tem].empty()) {
                Q.pop();
            }
        }
        else break;
    }
}
int main(int argc, const char * argv[]) {
    int T = 0;
    while (scanf("%d", &t) && t) {
        printf("Scenario #%d\n", ++T);
        solve();
        puts("");
    }
    return 0;
}
