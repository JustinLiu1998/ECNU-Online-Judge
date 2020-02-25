//
//  main.cpp
//  1055
//
//  Created by 刘靖迪 on 2017/11/22.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
typedef long long LL;
LL GCD(LL a, LL b) {
    return (b == 0 ? a : GCD(b, a%b));
}
LL LCM(LL a, LL b) {
    return a / GCD(a, b) * b;
}
int main(int argc, const char * argv[]) {
    LL a, b;
    while (std::cin >> a >> b) {
        std::cout << LCM(a, b) << std::endl;
    }
    return 0;
}
