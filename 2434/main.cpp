//
//  main.cpp
//  2434
//
//  Created by 刘靖迪 on 2017/11/17.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
typedef long long LL;
using namespace std;
LL GCD (LL a, LL b) {
    return b == 0 ? a : GCD(b, a%b);
}
int main(int argc, const char * argv[]) {
    int n;
    while (scanf("%d", &n) && n) {
        LL x;
        scanf("%lld", &x);
        for (int i=1; i<n; i++) {
            LL y;
            scanf("%lld", &y);
            x = GCD(x, y);
        }
        cout << x << endl;
    }
    return 0;
}
