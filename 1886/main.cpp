//
//  main.cpp
//  1886
//
//  Created by 刘靖迪 on 2017/11/1.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    while (scanf("%d", &n) == 1) {
        int a=0, x;
        for (int i=0; i<n; i++) {
            scanf("%d", &x);
            a = a^x;
        }
        printf("%d\n", a);
    }
}
