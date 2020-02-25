//
//  main.cpp
//  3353
//
//  Created by 刘靖迪 on 15/12/2017.
//  Copyright © 2017 刘靖迪. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cstring>
#include <set>
#include <stack>
using namespace std;
typedef long long LL;
typedef struct typ {
    int tag;
    int p, d, u;
    int k;
    bool operator < (const struct typ& y) const {
        if (p == y.p && (u-d) == y.u - y.d)
            return tag < y.tag;
        else if (p == y.p)
            return (u - d) < (y.u - y.d);
        else return p < y.p;
    }
} TYPE;
typedef struct pr{
    int fi, se;
    int k;
    bool operator < (const struct pr& y) const {
        if (fi == y.fi && se == y.se)
            return k < y.k;
        else if (fi == y.fi)
            return se < y.se;
        else return fi < y.fi;
    }
} PR;
TYPE a[2010];
int main(int argc, const char * argv[]) {
    int T;
    scanf("%d", &T);
    while (T--) {
        
        memset(a, 0, sizeof a);
        int n;
        scanf("%d", &n);
        int l, r, d, u;
        for (int i=0; i<n; i++) {
            scanf("%d%d%d%d", &l, &d, &r, &u);
            int t = 2*i;
            a[t].p = l;
            a[t].tag = 0;
            a[t + 1].p = r;
            a[t + 1].tag = 1;
            a[t].u = a[t + 1].u = u;
            a[t].d = a[t + 1].d = d;
            a[t].k = a[t+1].k = i;
        }
        
        sort(a, a + 2*n);
        
        multiset<PR> St;
        LL ans = 0;
        
        for (int i=0; i<2*n-1; i++) {
            if (a[i].tag == 0) {
                PR tem1, tem2;
                tem1.fi = a[i].u; tem1.se = 1;
                tem2.fi = a[i].d; tem2.se = 0;
                tem1.k = tem2.k = a[i].k;
                St.insert(tem1);
                St.insert(tem2);
            }
            else if (a[i].tag == 1) {
                PR tem1, tem2;
                tem1.fi = a[i].u; tem1.se = 1;
                tem2.fi = a[i].d; tem2.se = 0;
                tem1.k = tem2.k = a[i].k;
                St.erase(tem1);
                St.erase(tem2);
            }
            
            LL x = a[i+1].p - a[i].p, y = 0;
            
            stack<int> Sk;
            
            for (auto iter = St.begin(); iter != St.end(); iter++) {
                if ((*iter).se == 0)
                    Sk.push((*iter).fi);
                else if ((*iter).se == 1) {
                    if (Sk.size() == 1) {
                        y += (*iter).fi - Sk.top();
                    }
                    Sk.pop();
                }
            }
            ans += x * y;
            
        }
        printf("%lld\n", ans);
        
    }
    return 0;
}
