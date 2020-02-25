//
//  main.cpp
//  1007.N!的最高位
//
//  Created by 刘靖迪 on 2017/11/15.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    while (cin >> n) {
        double x=0;
        int ans;
        if (n < 10) {
            for (int i=1; i<=n; i++) {
                x += log10(i);
            }
            x -= (int)x;
            ans = pow(10.0, x);
            cout << ans << endl;
        }
        else {
            x = 0.5 * log(2*M_PI*(double)n)/log(10.0) + (double)n * log((double)n/M_E)/log(10.0);
            x -= (int)x;
            ans = exp(x * log(10.0));
            cout << ans << endl;
        }
    }
    return 0;
}
