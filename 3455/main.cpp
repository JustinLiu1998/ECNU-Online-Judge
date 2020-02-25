//
//  main.cpp
//  3455
//
//  Created by 刘靖迪 on 2017/12/8.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
typedef long long LL;
LL ret (LL a, LL b, LL mod) {
    if (b == 0) return 1 % mod;
    if (b == 1) return a % mod;
    else {
        LL tem = ret(a, b >> 1, mod);
        if (b & 1)
            return (tem * tem * a) % mod;
        else return (tem * tem) % mod;
    }
}
int main(int argc, const char * argv[]) {
    int T, cas=0;
    cin >> T;
    while (T--) {
        printf("Case #%d: ", ++cas);
        LL A, N, P;
        scanf("%lld%lld%lld", &A, &N, &P);
        while (N--) {
            A = ret(A, N+1, P);
        }
        printf("%lld\n", A);
    }
    return 0;
}
