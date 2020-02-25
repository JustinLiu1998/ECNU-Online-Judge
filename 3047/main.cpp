//
//  main.cpp
//  3047
//
//  Created by 刘靖迪 on 2017/9/10.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>

using namespace std;

int GCD (int m, int n) {
    if (m < n){
        int tem = m;
        m=n, n=tem;
    }
    if (m%n == 0)
        return n;
    else return GCD(n, m%n);
}

void lcm(int a, int b) {
    long long x = GCD(a, b);
    a/=x, b/=x;
    cout << x * a * b << endl;
}

void solve()
{
    int a, b;
    cin >> a >> b;
    lcm(a, b);
}
int main() {
    int T, cas=0;
    cin >> T;
    while (T--) {
        printf("case #%d:\n", cas++);
        solve();
    }
    return 0;
}
