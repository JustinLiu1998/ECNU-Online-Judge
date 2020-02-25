//
//  main.cpp
//  3337(2)
//
//  Created by 刘靖迪 on 2017/11/23.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <set>
using namespace std;
const int MAXN = 40000 + 5;
bool tag[MAXN];
vector<int> St[MAXN];
typedef struct node{
    int x, y;
    int data;
    bool operator < (const node &b) const{
        return (x == b.x ? (y < b.y) : (x < b.x));
    }
} NODE;
int main(int argc, const char * argv[]) {
    int n, m;
    memset(tag, true, sizeof(tag));
    scanf("%d%d", &n, &m);
    int x, y;
    for (int i=0; i<m; i++) {
        scanf("%d%d", &x, &y);
        St[x].push_back(y);
        St[y].push_back(x);
    }
    int q, a, b;
    scanf("%d", &q);
    set<NODE> ans;
    while (q--) {
        scanf("%d%d", &x, &y);
        a = min(x, y); b = max(x, y);
        NODE tem;
        tem.x = a; tem.y = b;
        set<NODE>::iterator iter;
        iter = ans.find(tem);
        if (iter != ans.end())
            printf("%d\n", (*iter).data);
        else {
            if (tag[a]) {
                tag[a] = false;
                sort(St[a].begin(), St[a].end());
            }
            if (tag[b]) {
                tag[b] = false;
                sort(St[b].begin(), St[b].end());
            }
            vector<int> v(MAXN);
            vector<int>::iterator it;
            it = set_intersection(St[a].begin(), St[a].end(), St[b].begin(), St[b].end(), v.begin());
            v.resize(it - v.begin());
            printf("%d\n", (int)v.size());
            NODE t;
            t.x = a; t.y = b; t.data = (int)v.size();
            ans.insert(t);
        }
    }
    return 0;
}
