//
//  main.cpp
//  3499
//
//  Created by 刘靖迪 on 2018/6/5.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <bits/stdc++.h>

using namespace std;
int main(int argc, const char * argv[]) {
    int x, y, z;    cin >> x >> y >> z;
    double tt = z - x;
    tt /= 2;
    if (tt <= 0 || y - tt <= 0 || x - (y - tt) <= 0) {
        puts("Wrong");
        return 0;
    }
    printf("%lf\n", y - tt);
    return 0;
}
