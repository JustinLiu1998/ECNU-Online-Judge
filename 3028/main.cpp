//
//  main.cpp
//  3028
//
//  Created by 刘靖迪 on 2017/11/15.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int T, cas=0;
    cin >> T;
    while (T--) {
        printf("case #%d:\n", cas++);
        int a[10], flag = -1;
        for (int i=0; i<9; i++) {
            scanf("%d", &a[i]);
            if (flag == -1 && a[i] != 0) flag = i;
        }
        if (flag == -1) puts("0");
        else {
            for (int i=0; i<9; i++) {
                if (i >= flag && a[i] != 0) {
                    if (i > flag && a[i] > 0)
                        printf("+");
                    if (i < 8) {
                        if (a[i] != 1 && a[i] != -1)
                            printf("%dx", a[i]);
                        else {
                            if (a[i] < 0)
                                printf("-");
                            printf("x");
                        }
                        if (i < 7)
                            printf("^%d", 8-i);
                    }
                    if (i == 8) {
                        printf("%d", a[i]);
                    }
                }
            }
            puts("");
        }
    }
    return 0;
}
