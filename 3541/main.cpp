//
//  main.cpp
//  3541
//
//  Created by 刘靖迪 on 2018/5/12.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
#define N 100010
typedef pair<int, int> PI;
int n, m, k;
int main(int argc, const char * argv[]) {
    cin >> n >> m >> k;
    int a[N], b[N];
    unordered_map<int, set<int>> mp;
    for (int i=0; i<n; i++) {
        cin >> a[i];
        mp[a[i]].insert(a[i]);
    }
    for (int i=0; i<m; i++) {
        cin >> b[i];
        mp[b[i]].insert(b[i]);
    }
    
    for (int i=0; i<k; i++) {
        int x, y;
        scanf("%d%d", &x, &y);
        mp[x].insert(y);
        mp[y].insert(x);
    }
    int f = 1;
    if (n != m) {
        puts("No");
    }
    else {
        for (int i=0; i<n; i++) {
            if (mp[a[i]].find(b[i]) == mp[a[i]].end()) {
                f = 0;
                break;
            }
        }
    }
    puts(f ? "Yes" : "No");
    return 0;
}
