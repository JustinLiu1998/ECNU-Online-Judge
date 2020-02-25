//
//  main.c
//  1012bisect函数
//
//  Created by 刘靖迪 on 2017/9/20.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>

int bisect(int *a, int n, int v) {
    int i, j, m;
    i = 0;
    j = n-1;
    while (i <= j) {                                    //采用二分的思想进行快速的查找
        m = (i+j) / 2;
        if (v == a[m])
            return m;
        if (v < a[m])
            j = m-1;
        else i = m+1;
    }
    return -1;
}

int main(int argc, const char * argv[]) {
    int n;
    while (scanf("%d", &n) != EOF) {                            //多组输入，处理到文件结束
        int a[n];
        for (int i=0; i<n; i++)                                 //输入
            scanf("%d", &a[i]);
        int v;
        scanf("%d", &v);                                        //输入要查找的数
        printf("%d\n", bisect(a, n, v));                        //调用函数并打印结果
    }
    return 0;
}
