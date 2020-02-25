//
//  main.cpp
//  3374
//
//  Created by 刘靖迪 on 2017/9/30.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>

using namespace std;

typedef long long ll;
const ll M = 1e5;
const ll N = 1e9+7;
ll prime[5] = {2, 3, 5, 233, 331};

ll pow(ll p, ll q) {
    ll ans = 1;
    for (int i=0; i<q; i++) {
        ans *= p;
        ans %= N;
    }
    return ans;
}

ll pow_mod(ll a, ll n, ll mod)
{
    ll ret = 1;
    while (n)
    {
        if (n&1)
            ret = ret * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return ret;
}

int isPrime(ll n)
{
    if (n < 2 || (n != 2 && !(n&1)))
        return 0;
    ll s = n - 1;
    while (!(s&1))
        s >>= 1;
    for (int i = 0; i < 5; ++i)
    {
        if (n == prime[i])
            return 1;
        ll t = s, m = pow_mod(prime[i], s, n);
        while (t != n-1 && m != 1 && m != n-1)
        {
            m = m * m % n;
            t <<= 1;
        }
        if (m != n-1 && !(t&1))
            return 0;
    }
    return 1;
}


int main(int argc, const char * argv[]) {
    ll x;
    cin >> x;
    ll p = x/M, q = x%M;
    ll r1 = pow(p, q);
    cout << r1 << endl;
    ll r2 = r1;
    while (isPrime(r2) == 0)
        r2++;
    cout << r2 << endl;
    return 0;
}
