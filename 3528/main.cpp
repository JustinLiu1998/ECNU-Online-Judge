//
//  main.cpp
//  3528
//
//  Created by 刘靖迪 on 2018/7/6.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <bits/stdc++.h>

using namespace std;
using LL = long long;
LL ans = 0;
int main(int argc, const char * argv[]) {
    int n, m;
    cin >> n >> m;
    for (int i=0; i<n; ++i) {
        vector<int> v;
        int t;
        for (int j=0; j<m; ++j) {
            scanf("%d", &t);
            v.push_back(t);
        }
        ans += *max_element(v.begin(), v.end());
    }
    cout << ans << endl;
    return 0;
}
