//
//  main.cpp
//  3466
//
//  Created by 刘靖迪 on 2017/12/14.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <set>
#include <vector>
using namespace std;
const int N = 1e3+5;
int a[N][N];
int main(int argc, const char * argv[]) {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int q;
    scanf("%d", &q);
    for (int i=0; i<q; i++) {
        int t;
        set<int> tem;
        for (int j=0; j<n; j++) {
            tem.insert(j);
        }
        for (int j=0; j<m; j++) {
            scanf("%d", &t);
            vector<int> era;
            if (t != -1 && tem.size()) {
                for (auto iter = tem.begin(); iter != tem.end(); iter++) {
                    
                    if (a[*iter][j] != t)
                        era.push_back(*iter);
                }
                for (auto iter = era.begin(); iter != era.end(); iter++) {
                    tem.erase(*iter);
                }
            }
        }
        printf("%d\n", (int)tem.size());
    }
    return 0;
}
