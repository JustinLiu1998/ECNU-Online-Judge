//
//  main.cpp
//  3280
//
//  Created by 刘靖迪 on 2017/11/7.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
typedef long long LL;
const LL mod = 1000000007;

LL euler (LL n) {                                 //欧拉函数
    LL ret = n, i, flag=0;
    if (n==1)
        ret = 1;
    else if (n == 0) ret = 0;
    else {
        for (i=2; i <= n; i++) {
            if (n%i==0) {
                n/=i;
                flag = 1;
                while (n%i==0)
                    n/=i;
                ret = ret / i * (i-1);
                
            }
        }
        if (flag==0)
            ret --;
    }
    return ret;
}

LL prime[5] = {2, 3, 5, 233, 331};

LL pow_mod(LL a, LL n, LL mod)
{
    LL ret = 1;
    while (n)
    {
        if (n&1)
            ret = ret * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return ret;
}

int isPrime(LL n)
{
    if (n < 2 || (n != 2 && !(n&1)))
        return 0;
    LL s = n - 1;
    while (!(s&1))
        s >>= 1;
    for (int i = 0; i < 5; ++i)
    {
        if (n == prime[i])
            return 1;
        LL t = s, m = pow_mod(prime[i], s, n);
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
    LL ans = 1;
    int n; cin >> n;
    LL tem = 1;
    for (int i=0; i<n; i++) {
        int x;
        scanf("%d", &x);
        if (isPrime(x)) {
            ans *= euler(x);
            ans %= mod;
        }
        else tem *= x;
    }
    ans *= euler(tem);
    ans %= mod;
    cout << ans <<  endl;
    return 0;
}
