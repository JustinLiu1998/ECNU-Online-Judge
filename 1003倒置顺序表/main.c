//
//  main.c
//  1003倒置顺序表
//
//  Created by 刘靖迪 on 2017/9/20.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#define MAXN 100
int main(int argc, const char * argv[]) {
    int a[MAXN];
    int n;
    scanf("%d", &n);
    for (int i=0; i<n; i++)
        scanf("%d", &a[i]);
    int tem;
    for (int i=0; i<n/2; i++) {
        tem = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = tem;
    }
    for (int i=0; i<n; i++)
        printf("%d%c", a[i], i < n-1 ? ' ' : '\n');
    return 0;
}
