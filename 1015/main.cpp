//
//  main.cpp
//  1015
//
//  Created by 刘靖迪 on 2017/9/13.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp (const void *a, const void *b) {
    int *x = (int *)a;
    int *y = (int *)b;
    return *x - *y;
}
int main(int argc, const char * argv[]) {
    int n, k;
    scanf ("%d%d", &n, &k);
    int a[n];
    for (int i=0; i<n; i++) {
        scanf ("%d", &a[i]);
    }
    qsort(a, n, sizeof(a[0]), cmp);
    for (int i=0; i<k-1; i++) {
        printf ("%d ", a[i]);
    }
    printf ("%d\n", a[k-1]);
    return 0;
}
