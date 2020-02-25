//
//  main.cpp
//  3271
//
//  Created by 刘靖迪 on 2017/9/8.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;
ll a[100010];
int main(int argc, const char * argv[]) {
    ll n, b, tim=0;                                   //n为测试点个数, b为打电话一次的时间
    cin >> n >> b;
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    sort(a, a+n);
    tim = n*b;
    for (int i=0; i<n; i++) {
        ll t = 2 * a[n-1-i] + b*i;
        if (t < tim)
            tim = t;
    }
    cout << tim << endl;
    return 0;
}
