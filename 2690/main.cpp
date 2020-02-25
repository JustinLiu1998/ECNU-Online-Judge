//
//  main.cpp
//  2690
//
//  Created by 刘靖迪 on 2017/11/21.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int e, f, c;
    while (scanf("%d%d%d", &e, &f, &c) == 3) {
        int ans = 0, tem = e+f, TEM;
        while (tem >= c) {
            ans += (tem / c);
            TEM = tem%c;
            tem /= c;
            tem += TEM;
        }
        printf("%d\n", ans);
    }
    return 0;
}
