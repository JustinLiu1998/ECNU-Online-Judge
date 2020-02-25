//
//  main.cpp
//  3221
//
//  Created by 刘靖迪 on 2017/9/9.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(int argc, const char * argv[]) {
    double L, v0, a;
    cout << setiosflags(ios::fixed) << setprecision(7);
    cin >> L >> v0 >> a;
    for (int i=1; i<=L; i++) {
        double ans = (sqrt(v0*v0 + 2*a*i) - v0) / a;
        cout << ans <<endl;                                             //运行速度竟然不如printf快
    }
    return 0;
}
