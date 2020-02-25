//
//  main.c
//  1004线性表去重
//
//  Created by 刘靖迪 on 2017/9/20.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
    int *x=(int *)a, *y=(int *)b;
    return *x - *y;
}
int main(int argc, const char * argv[]) {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++)
        scanf("%d", &a[i]);
    qsort(a, n, sizeof(a[0]), cmp);
    printf("%d", a[0]);
    for (int i=1; i<n; i++) {
        if(a[i] != a[i-1])
            printf(" %d", a[i]);
    }
    printf("\n");
    return 0;
}
