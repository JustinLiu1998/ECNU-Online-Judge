//
//  main.c
//  1004(2)
//
//  Created by 刘靖迪 on 2017/9/14.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    while (scanf("%d", &n) != EOF) {
        int a[n];
        for (int i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }
        int q;
        scanf("%d", &q);
        if (q <= 0 || q > n) {
            printf("-1\n");
            continue;
        }
        q--;
        for (int i=0; i<n-1; i++) {
            if (i != q)
                printf("%d ", a[i]);
        }
        if (q != n-1)
            printf("%d", a[n-1]);
        printf("\n");
    }
    return 0;
}
