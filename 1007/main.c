//
//  main.c
//  1007
//
//  Created by 刘靖迪 on 2017/9/13.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>

void insertion_sort(int *a, int n) {
    int i, j, t;
    for (i=1; i<n; i++) {
        t = a[i];
        for (j=i-1; j>=0 && a[j] > t; j--) {
            a[j+1] = a[j];
        }
        a[j+1] = t;
    }
}
int main(int argc, const char * argv[]) {
    int n;
    while (scanf("%d",&n) != EOF) {
        int a[n+1];
        for (int i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }
        insertion_sort(a, n);
        for (int i=0; i<n-1; i++) {
            printf("%d ", a[i]);
        }
        printf("%d\n", a[n-1]);
    }
    return 0;
}
