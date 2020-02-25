//
//  main.cpp
//  2853
//
//  Created by 刘靖迪 on 2017/11/29.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <set>
#include <vector>
using namespace std;
set<int> a, b;
vector<int> U, I, D;
void print (vector<int> &x) {
    printf("{");
    auto iter = x.begin();
    printf("%d", *iter);
    iter++;
    while (iter != x.end()) {
        printf(",%d", *iter);
        iter++;
    }
    printf("}\n");
}
void solve () {
    vector<int>::iterator iiter = set_intersection(a.begin(), a.end(), b.begin(), b.end(), I.begin());
    I.resize(iiter - I.begin());
    vector<int>::iterator uiter = set_union(a.begin(), a.end(), b.begin(), b.end(), U.begin());
    U.resize(uiter - U.begin());
    vector<int>::iterator diter = set_difference(a.begin(), a.end(), b.begin(), b.end(), D.begin());
    D.resize(diter - D.begin());
    print(I);
    print(U);
    print(D);
}
int main(int argc, const char * argv[]) {
    int n, m;
    scanf("%d%d", &m, &n);
    for (int i=0; i<m; i++) {
        int t;
        scanf("%d", &t);
        a.insert(t);
    }
    for (int i=0; i<n; i++) {
        int t;
        scanf("%d", &t);
        b.insert(t);
    }
    solve();
    return 0;
}
