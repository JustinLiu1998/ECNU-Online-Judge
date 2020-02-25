//
//  main.c
//  3166
//
//  Created by 刘靖迪 on 2017/5/15.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int binary (int *a, int n, int m) {
    int low = 0, high = n-1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (a[mid] == m) return mid;
        else if (a[mid] > m) high = mid-1;
        else if (a[mid] < m) low = mid + 1;
    }
    return -1;
}
int main() {
    int n, a[1001], m;
    scanf("%d", &n);
    for (int i=0; i<n; ++i) scanf("%d",&a[i]);
    scanf("%d", &m);
    if (binary(a, n, m) == -1)
        printf("not found\n");
    else printf("%d\n", binary(a, n, m)+1);
    return 0;
}
