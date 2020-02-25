//
//  main.c
//  3091
//
//  Created by 刘靖迪 on 2017/6/4.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int cmp (const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}
int binary (int *a, int n, int key) {
    int low = 0, high = n-1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (a[mid] == key) return mid;
        else if (a[mid] > key) high = mid-1;
        else if (a[mid] < key) low = mid + 1;               //while循环实现的二分查找
    }
    return -1;
}
int main() {
    int n, a[100001], key;
    scanf("%d", &n);
    for (int i=0; i<n; ++i) scanf("%d",&a[i]);
    qsort(a, n, sizeof(int), cmp);
    scanf("%d", &key);
    if (binary(a, n, key) == -1)
        printf("not found\n");
    else printf("%d\n", binary(a, n, key)+1);       //+1很重要
    return 0;
}
