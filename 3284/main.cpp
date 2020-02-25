//
//  main.cpp
//  3284
//
//  Created by 刘靖迪 on 2018/1/2.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <set>
using namespace std;
int main(int argc, const char * argv[]) {
    int T;
    scanf("%d", &T);
    set<pair<double, int>> St;
    set<pair<int, double>> st;
    while (T--) {
        int t;
        scanf("%d", &t);
        if (t == 1) {
            int a;
            double x, y;
            scanf("%d%lf%lf", &a, &x, &y);
            St.insert(make_pair(x*x + y*y, a));
            st.insert(make_pair(a, x*x + y*y));
        }
        else if (t == 2) {
            int a;
            scanf("%d", &a);
            pair<int, double> t = *st.lower_bound(make_pair(a, 0));
            St.erase(make_pair(t.second, t.first));
            st.erase(make_pair(t.first, t.second));
        }
        else {
            printf("%d\n", (*St.begin()).second);
        }
    }
    return 0;
}
