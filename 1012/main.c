//
//  main.c
//  1012
//
//  Created by 刘靖迪 on 2017/9/13.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>

void select_sort (int *a, int n) {
    int k, t;
    for (int i=0; i<n-1; i++) {
        k=i;
        for (int j=i+1; j<n; j++) {
            if (a[k] > a[j]) k = j;
        }
        t=a[k];
        a[k]=a[i];
        a[i]=t;
    }
}
int main(int argc, const char * argv[]) {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    select_sort(a, n);
    for (int i=0; i<n; i++) {
        printf("%d", a[i]);
        printf(i<n-1 ? " " : "\n");
    }
    return 0;
}
