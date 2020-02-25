//
//  main.cpp
//  3504
//
//  Created by 刘靖迪 on 2018/7/6.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <bits/stdc++.h>

using namespace std;
using LL = long long;
int main(int argc, const char * argv[]) {
    int ans = 0, n; cin >> n;
    vector<int> a;
    LL sum = 0;
    int t;
    for (int i=0; i<n; ++i) {
        scanf("%d", &t);
        a.push_back(t);
    }
    for (int i=0; i<n; ++i) {
        scanf("%d", &t);
        sum += t;
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    LL tem = 0;
    for (int i : a) {
        if (tem >= sum)
            break;
        tem += i;
        ++ans;
    }
    if (tem >= sum)
        cout << ans << endl;
    else puts("Game Over!");
    return 0;
}
