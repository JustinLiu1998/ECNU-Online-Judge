//
//  main.cpp
//  32
//
//  Created by 刘靖迪 on 2018/1/7.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
typedef long long LL;
LL Pow(int x) {
    LL ans=1;
    for (int i=0; i<x; i++) {
        ans <<= 1;
    }
    return ans;
}
int main(int argc, const char * argv[]) {
    int x;
    scanf("%d", &x);
    printf("%lld\n", Pow(x));
    return 0;
}
