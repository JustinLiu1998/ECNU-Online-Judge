//
//  main.cpp
//  3416
//
//  Created by 刘靖迪 on 2017/10/26.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int x;
    char c;
    double ans;
    scanf("%2d%c", &x, &c);
    if (c == 'c') {
        ans = 9.0 * x / 5 + 32;
    }
    else ans = (x - 32) *5.0 / 9;
    printf("%.2lf%c\n", ans, (c == 'c' ? 'f' : 'c'));
    return 0;
}
