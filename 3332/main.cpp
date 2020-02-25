//
//  main.cpp
//  3332(2)
//
//  Created by 刘靖迪 on 2017/9/15.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>

using namespace std;
typedef long long ll;

ll tendevide (ll n, ll k) {
    if (n == 1)
        return 10 % k;
    else if (n == 0)
        return 1;
    else {
        ll tem = (tendevide(n/2, k) * tendevide(n/2, k)) % k;
        if (n % 2)
            return (tem * 10) % k;
        else return tem;
    }
}
ll onedevide (ll n, ll k) {
    if (n > 5) {
        if(n % 2 == 0) {
            return (onedevide(n/2, k) * tendevide(n/2, k) + onedevide(n/2, k)) % k;
        }
        else
            return (tendevide(n/2+1, k) * onedevide(n/2 , k) + onedevide(n/2 , k) * 10 + 1) % k;
    }
    if (n == 5)
        return 11111 % k;
    if (n == 4)
        return 1111 % k;
    if (n == 3)
        return 111 % k;
    if (n == 2)
        return 11 % k;
    if (n == 1)
        return 1 % k;
    else return 0;
}

int main(int argc, const char * argv[]) {
    int T;
    cin >> T;
    while (T--) {
        ll n, k;
        cin >> n >> k;
        cout << onedevide(n, k) << endl;
    }
    return 0;
}
