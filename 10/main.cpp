//
//  main.cpp
//  10
//
//  Created by 刘靖迪 on 2017/11/7.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <stack>
using namespace std;

void solve () {
    int n;
    cin >> n;
    stack<int> sk;
    while (n > 1) {
        sk.push(n);
        n /= 2;
    }
    pair<int, int> ans;
    ans = make_pair(1, 1);
    while (sk.size()) {
        int x = sk.top();
        sk.pop();
        if (x & 1)
            ans = make_pair(ans.first + ans.second, ans.second);
        else ans = make_pair(ans.first, ans.first + ans.second);
    }
    cout << ans.first << '/' << ans.second << endl;
}
int main(int argc, const char * argv[]) {
    int T, cas=0; cin >> T;
    while (T--) {
        printf("Case %d: ", ++cas);
        solve();
    }
    return 0;
}
