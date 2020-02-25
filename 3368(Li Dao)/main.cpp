//
//  main.cpp
//  3368(Li Dao)
//
//  Created by 刘靖迪 on 2017/9/28.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <map>
using namespace std;
typedef long long LL;
#define FOR(i, a, b) for(LL i = (a); i < (b); ++i)
typedef pair<LL, LL> P;
LL n, ans;
map<string, P> mp;

void UP(P& p, LL v) {
    if (v > p.first) {
        p.second = p.first;
        p.first = v;
    } else if (v > p.second)
        p.second = v;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n;
    FOR (i, 0, n) {
        string course; LL k; cin >> course >> k;
        if (mp.find(course) != mp.end())
            UP(mp[course], k);
        else {
            mp[course].first = k;
            mp[course].second = 0;
        }
    }
    
    for (auto it = mp.begin(); it != mp.end(); ++it) {
        ans += it->second.first + it->second.second;
    }
    cout << ans << endl;
    return 0;
}

