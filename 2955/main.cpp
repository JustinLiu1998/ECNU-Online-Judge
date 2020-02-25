//
//  main.cpp
//  2955
//
//  Created by 刘靖迪 on 2017/11/20.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
int GCD(int a, int b) {
    return b == 0 ? a : GCD (b, a%b);
}
int main(int argc, const char * argv[]) {
    int T, cas=0;
    cin >> T;
    while (T--) {
        printf("case #%d:\n", cas++);
        int a, b;
        scanf("%d%d", &a, &b);
        int tem;
        if ((tem = GCD(a, b)) == 1)
            puts("No");
        else
            for (int i=2; i<=tem; i++)
                if (tem % i == 0) {
                    printf("Yes %d\n", i);
                    break;
                }
    }
    return 0;
}
