//
//  main.c
//  1013
//
//  Created by 刘靖迪 on 2017/9/13.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>

void quick_sort (int a[], int low, int high) {
    if (low >= high)
        return;
    int first = low, last = high, key = a[first];
    while (first < last) {
        while (first < last && a[last] >= key) {
            --last;
        }
        a[first] = a[last];
        while (first < last && a[first] <= key) {
            ++first;
        }
        a[last] = a[first];
    }
    a[first] = key;
    quick_sort(a, low, first-1);
    quick_sort(a, first+1, high);
}

int main(int argc, const char * argv[]) {
    int n;
    while (scanf("%d", &n) != EOF) {
        int a[n];
        for (int i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }
        quick_sort(a, 0, n-1);
        for (int i=0; i<n; i++) {
            printf("%d", a[i]);
            if (i<n-1)
                printf(" ");
            else
                printf("\n");
        }
    }
    return 0;
}
