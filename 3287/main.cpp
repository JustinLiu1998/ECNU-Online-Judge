//
//  main.cpp
//  3287(vector)
//
//  Created by 刘靖迪 on 2017/10/26.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;
typedef vector<pair<int , int >> vec;
int n, k;
ll solve (vec &a) {
    sort(a.begin(), a.end());
    int at = (int)a.size() - 1;
    ll ret = 0;
    while (at >= 0) {
        a[at].second += (at < a.size() - 1 ? a[at + 1].second : 0);
        if (a[at].second > 0) {
            ll p = (a[at].second + k - 1) / k;
            ret += 2 * p * a[at].first;
            a[at].second -= p * k;
        }
        at--;
    }
    return ret;
}

int main(int argc, const char * argv[]) {
    cin >> n >> k;
    vec c1, c2;
    for (int i=0; i<n; i++) {
        int x, t;
        cin >> x >> t;
        (x < 0 ? c1 : c2).push_back(make_pair(abs(x), t));
    }
    cout << solve(c1) + solve(c2) <<endl;
    return 0;
}
