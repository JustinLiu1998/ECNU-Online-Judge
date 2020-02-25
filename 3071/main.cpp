//
//  main.cpp
//  3071
//
//  Created by 刘靖迪 on 2017/10/27.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef vector<pair<ll, int>> vec;
vec a;
int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        ll x;
        cin >> x;
        a.push_back(make_pair(x, i));
    }
    ll ans = 0;
    sort(a.begin(), a.end());
    for (int i=0; i<n-1; i++) {
        int MIN = n+1;
        for (int j = i+1; j<n; j++) {
            if (a[j].first > a[i].first)
            MIN = min (MIN, abs(a[i].second - a[j].second));
        }
        ans += MIN;
    }
    cout << ans << endl;
    return 0;
}
