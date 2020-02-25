//
//  main.cpp
//  2536
//
//  Created by 刘靖迪 on 2017/9/22.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cstring>

using namespace std;
typedef unsigned long long ll;
ll GCD (ll m, ll n) {
    if (n == 0) return m;
    else return GCD(n, m%n);
}
int main(int argc, const char * argv[]) {
    ll a[30];
    memset(a, 0, sizeof(a));
    a[1] = 1; a[2] = 1;
    for (int i=3; i<30; i++)
        a[i] = a[i-1] + a[i-2];
    ll b[30], c[30];                                                       //b是分子，c是分母
    memset(b, 0, sizeof(b));
    memset(c, 0, sizeof(c));
    b[1]=2; c[1]=1;
    for (int i=2; i<25; i++) {
        c[i] = a[i+1] * c[i-1];
        b[i] = b[i-1] * a[i+1] + a[i+2] * c[i-1];
        ll x = GCD(b[i], c[i]);
        c[i] /= x;
        b[i] /= x;
    }
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << b[n] << "/" << c[n] << endl;
    }
    return 0;
}
