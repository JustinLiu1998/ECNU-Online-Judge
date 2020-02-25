//
//  main.c
//  1011顺序查找
//
//  Created by 刘靖迪 on 2017/10/25.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>

int seque2 (int *a, int v, int n) {
    int i;
    a[n] = v;                                               //置a[n]为v，能简化代码
    for (i=0; a[i] != v; i++);
    if (i < n) return i;
    return -1;
}

int main(int argc, const char * argv[]) {
    int n;
    while (scanf("%d", &n) != EOF) {                        //处理到文件结束
        int a[n], v;
        for (int i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }
        scanf("%d", &v);                                    //输入要查找的数
        int x=seque2(a, v, n);                              //调用函数
        if (x == -1) {
            printf("-1\n");
        }
        else printf("%d\n", x);
    }
    return 0;
}

