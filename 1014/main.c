//
//  main.c
//  1014
//
//  Created by 刘靖迪 on 2017/9/13.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>

void bubble_sort (int *a, int n) {
    int t;
    for (int i=0; i<n-1; i++) {
        for (int j=n-1; j>i; j--) {
            if (a[j-1] > a[j]) {
                t = a[j-1];
                a[j-1] = a[j];
                a[j] = t;
            }
        }
    }
}
int main(int argc, const char * argv[]) {
    int n;
    while (scanf("%d",&n) != EOF) {
        int a[n+1];
        for (int i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }
        bubble_sort(a, n);
        for (int i=0; i<n-1; i++) {
            printf("%d ", a[i]);
        }
        printf("%d\n", a[n-1]);
    }
    return 0;
}
