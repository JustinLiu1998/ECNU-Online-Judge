//
//  main.cpp
//  3562面向对象程序设计
//
//  Created by 刘靖迪 on 2018/5/13.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <bits/stdc++.h>

using namespace std;
#ifdef ONLINE_JUDGE
const int N = 1e5 + 10;
const int MAXN = 1e6 + 10;
#endif
#ifndef ONLINE_JUDGE
const int N = 10;
const int MAXN = 10;
#endif

typedef pair<int, int> PI;
typedef struct node {
    vector<int> child;
    vector<int> have_function;
    vector<int> be_asked;
    unordered_map<int, vector<int>> question_position;
}NODE;

NODE tree[N];
int ans[N];
stack<int> sk[MAXN];

void dfs(int i) {
    for (int j : tree[i].have_function) {
        sk[j].push(i);
    }
    for (int j : tree[i].be_asked) {
        for (int k : tree[i].question_position[j])
            if (sk[j].size())
                ans[k] = sk[j].top();
            else
                ans[k] = -1;
    }
    for (int j : tree[i].child) {
        dfs(j);
    }
    for (int j : tree[i].have_function) {
        sk[j].pop();
    }
}

int main(int argc, const char * argv[]) {
    int n; cin >> n;
    for (int i=2; i<=n; i++) {                  //1e5
        int parent;
        scanf("%d", &parent);
        tree[parent].child.push_back(i);
    }
    for (int i=1; i<=n; i++) {                  //1e6
        int t, a; cin >> t;
        for (int j=0; j<t; j++) {
            scanf("%d", &a);
            tree[i].have_function.push_back(a);
        }
    }
    int q; cin >> q;
    for (int i=0; i<q; i++) {                   //1e5
        int u, r;
        scanf("%d%d", &u, &r);
        tree[u].be_asked.push_back(r);
        tree[u].question_position[r].push_back(i);
    }
    dfs(1);
    for (int i=0; i<q; i++) {
        printf("%d\n", ans[i]);
    }
    return 0;
}
