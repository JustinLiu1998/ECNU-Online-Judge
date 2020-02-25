//
//  main.c
//  1002线性表比较
//
//  Created by 刘靖迪 on 2017/9/20.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>

int cmp(int *a, int *b, int m, int n) {
    int x, y;
    for (x=0, y=0; x<m && y<n && a[x]==b[y]; x++,y++)  ;
    if (m==n && y==m)
        return 0;
    if (m<n && x==m)
        return -1;
    if (x<m && y<n && a[x]<b[y])
        return -1;
    else return 1;
}
int main(int argc, const char * argv[]) {
    int m, n;
    scanf("%d%d", &m, &n);
    int a[m], b[n];
    for (int i=0; i<m; i++) {
        scanf("%d", &a[i]);
    }
    for (int i=0; i<n; i++) {
        scanf("%d", &b[i]);
    }
    printf("%d\n", cmp(a, b, m, n));
    return 0;
}
