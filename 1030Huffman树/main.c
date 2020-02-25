//
//  main.c
//  1030Huffman树
//
//  Created by 刘靖迪 on 2017/11/9.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int a[1010];
int cmp (const void *a, const void *b) {
    return *(int*)b - *(int *)a;
}
int main(int argc, const char * argv[]) {
    int n;
    scanf("%d", &n);
    for (int i=1; i<=n; i++)                        //输入n个结点的权值
        scanf("%d", &a[i]);
    qsort(a+1, n, sizeof(int), cmp);                //先用快速排序排一次，大的在前，小的在后
    for (int i=n-1; i>0; i--) {                     //合并最小的两个，之后i往前移一位
        a[i] += a[i+1];
        a[0] += a[i];
        int t = a[i], j;
        for (j = i-1; j>0 && a[j] < t; j--)         //用插入排序维护这个序列
                a[j+1] = a[j];
        a[j + 1] = t;
    }
    printf("%d\n", a[0]);                           //打印剩下的一个结点的权值
    return 0;
}
