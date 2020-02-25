//
//  main.cpp
//  1001
//
//  Created by 刘靖迪 on 2017/9/13.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>

int sq_delete (int *a, int *p_n, int i) {
    int j;
    if (i<0 || i >= *p_n)   return 1;
    printf("%d\n", a[i]);
    for (j = i+1; j<*p_n; j++) {
        a[j-1] =a[j];
    }
    (*p_n)--;
    return 0;
}
int main(int argc, const char * argv[]) {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    int q, k;
    scanf("%d", &q);
    for (int i=0; i<q; i++) {
        scanf("%d", &k);
        if (sq_delete(a, &n, k-1))
            printf("-1\n");
    }
    return 0;
}
