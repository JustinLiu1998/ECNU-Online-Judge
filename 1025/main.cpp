//
//  main.cpp
//  1025
//
//  Created by 刘靖迪 on 2017/9/13.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void merge(int *a, int *b, int l, int m, int n) {
    int i, j, k;
    i=l;
    j=m+1;
    k=l;
    while (i<=m && j<=n) {
        if (a[i] <= a[j]) {
            b[k++] = a[i++];
        }
        else b[k++] = a[j++];
    }
    while (i<=m) {
        b[k++] = a[i++];
    }
    while (j<=n) {
        b[k++] = a[j++];
    }
}

void mpass (int *a, int *b, int n, int l) {
    int i, j;
    i=0;
    while (i + 2*l <= n) {
        merge(a, b, i, i+l-1, i+2*l-1);
        i+=2*l;
    }
    if (i+l < n) merge(a, b, i, i+l-1, n-1);
    else for (j=i; j<n; j++)
        b[j]=a[j];
}

void merge_sort (int *a, int n) {
    int b[n];
    int l = 1;
    while (l<n) {
        mpass(a, b, n, l);
        l *= 2;
        mpass(b, a, n, l);
        l *= 2;
    }
}

int main(int argc, const char * argv[]) {
    int n, k;
    scanf ("%d%d", &n, &k);
    int a[n];
    for (int i=0; i<n; i++) {
        scanf ("%d", &a[i]);
    }
    merge_sort(a, n);
    int i, j, t=-1;
    for (i=0, j=0; i<k; i++) {
        while (a[j++] == t);
        printf ("%d: %d\n", i+1, a[--j]);
        t = a[j++];
    }
    return 0;
}
