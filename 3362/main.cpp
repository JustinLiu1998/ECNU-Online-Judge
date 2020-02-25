//
//  main.cpp
//  3362
//
//  Created by 刘靖迪 on 2017/9/27.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
typedef long long ll;
int main(int argc, const char * argv[]) {
    ll x=0, y=-10, z=0, n;
    cin >> n;
    for (int i=0; i<n; i++) {
        ll x0, y0, z0;
        scanf("%lld%lld%lld", &x0, &y0, &z0);
        x += x0;
        y += y0;
        z += z0;
    }
    if (x == 0 && y == 0 && z == 0)
        cout << "NO" << endl;
    else cout << "YES" << endl;
    return 0;
}
