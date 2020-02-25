//
//  main.cpp
//  1124
//
//  Created by 刘靖迪 on 2017/9/21.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;
typedef long long ll;

ll solve (ll a, ll b, ll c) {
    if (b==4)
        return (a*a*a*a) % c;
    if (b==3)
        return (a*a*a) % c;
    if (b==2)
        return (a*a) % c;
    if (b==1)
        return a%c;
    else {
        if (b % 2 == 1)
            return (solve(a, b/2, c) * solve(a, b/2, c) * a) % c;
        else
            return (solve(a, b/2, c) * solve(a, b/2, c)) % c;
    }
}

int main(int argc, const char * argv[]) {
    ll a, b, c;
    while (scanf("%lld%lld%lld", &a, &b, &c) && (a || b || c)) {
        cout << solve(a, b, c) << endl;
    }
    return 0;
}
