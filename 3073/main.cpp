//
//  main.cpp
//  3073
//
//  Created by 刘靖迪 on 2017/10/27.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <set>
using namespace std;
typedef struct mystruct {
    int i, j, a;
    bool operator < (const mystruct &x) const {
        return a > x.a || (a == x.a && i < x.i) || (a == x.a && i == x.i && j < x.j);
    }
} mys;
set<mys> Set;
int main(int argc, const char * argv[]) {
    int T, cas = 0;
    cin >> T;
    while (T--) {
        printf("case #%d:\n", cas++);
        int N, M;
        scanf("%d%d", &N, &M);
        for (int i=0; i<M; i++) {
            mys x;
            scanf("%d%d%d", &x.i, &x.j, &x.a);
            Set.insert(x);
        }
        while (Set.size()) {
            auto iter = Set.begin();
            printf("(%d,%d,%d)\n", (*iter).i, (*iter).j, (*iter).a);
            Set.erase(iter);
        }
    }
    return 0;
}
