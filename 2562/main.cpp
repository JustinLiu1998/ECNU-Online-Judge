//
//  main.cpp
//  2562
//
//  Created by 刘靖迪 on 2017/11/11.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <map>
using namespace std;
const int N = 1e5 + 10;
typedef struct set_{
    int num, height, parent;
} SET;
SET S[N];
void init (int n) {
    for (int i=1; i<=n; i++) {
        S[i].height = 0;
        S[i].num = 1;
        S[i].parent = i;
    }
}
int Find (int x) {
    int r = S[x].parent;
    return r == x ? r : (S[x].parent = Find(r));
}
void Union (int x, int y) {
    int a = Find(x), b = Find(y);
    if (a == b) return ;
    if (S[a].height < S[b].height) {
        S[a].parent = b;
        S[b].num += S[a].num;
    }
    else {
        if (S[a].height == S[b].height)
            S[a].height++;
        S[b].parent = a;
        S[a].num += S[b].num;
    }
}
int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    int T; cin >> T;
    while (T--) {
        map<string, int> M;
        int F; cin >> F;
        init(F+1);
        int i = 1;
        while (F--) {
            string a, b;
            cin >> a >> b;
            if (!M.count(a)) {
                M[a] = i;
                i++;
            }
            if (!M.count(b)) {
                M[b] = i;
                i++;
            }
            Union(M[a], M[b]);
            cout << S[Find(M[a])].num << endl;
        }
    }
    return 0;
}
