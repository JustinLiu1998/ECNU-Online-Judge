//
//  main.c
//  1023稀疏矩阵三元组转化
//
//  Created by 刘靖迪 on 2017/9/27.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#define MAXN 1000010

void mat_transpose(int a[][3], int b[][3]) {                        //普通版转置函数
    int m, n, t, p, q, col;
    m=a[0][0];                                                  //先处理a[0]这一行
    n=a[0][1];
    t=a[0][2];
    b[0][0]=m;
    b[0][1]=n;
    b[0][2]=t;
    if (t>0) {                                                  //如果t>0,表示有元素需要转置
        q=1;
        for (col=0; col<n; col++)                               //分别对行和列遍历
            for (p=1; p<=t; p++)
                if (a[p][1] == col) {
                    b[q][0] = a[p][1];
                    b[q][1] = a[p][0];
                    b[q][2] = a[p][2];
                    q++;
                }
    }
}

void mat_fast_transpose(int a[][3], int b[][3]) {                   //快速版转置函数
    int m, n, t, i, j;
    int x[MAXN], y[MAXN];                               //用y[i]来存储第i列第一个非0元素应该插入的魏位置
    m=a[0][0];                                                  //同样先a[0]这一行
    n=a[0][1];
    t=a[0][2];
    b[0][0]=m;
    b[0][1]=n;
    b[0][2]=t;
    if (t>0) {
        for (i=0; i<n; i++)
            x[i]=0;
        for (i=1; i<=t; i++)
            x[a[i][1]] += 1;                        //通过第一遍历，对x数组进行计数和更新
        y[0]=1;
        for (i=1; i<n; i++)                         //y[i]的递推关系是y[i] = y[i-1] + [xi-1]，此行是本函数的精髓
            y[i] = y[i-1] + x[i-1];
        for (i=1; i<=t; i++) {                      //通过“飞插”实现快速地讲三元组存入正确的位置
            j = y[a[i][1]];
            b[j][0] = a[i][1];
            b[j][1] = a[i][0];
            b[j][2] = a[i][2];
            y[a[i][1]] = j+1;
        }
    }
}

int main(int argc, const char * argv[]) {
    int m, n, c;
    scanf("%d%d%d", &m, &n, &c);
    int a[c+1][3], b[c+1][3];
    for (int i=1; i<=c; i++) {
        scanf("%d%d%d", &a[i][0], &a[i][1], &a[i][2]);              //存入数组
    }
    a[0][0] = m;                                                    //分别对a[0][0],a[0][1]和a[0][2]赋值
    a[0][1] = n;
    a[0][2] = c;
    mat_fast_transpose(a, b);                                   //调用函数
    for (int i=1; i<=c; i++) {
        printf("%d %d %d\n", b[i][0], b[i][1], b[i][2]);        //打印结果
    }
    return 0;
}

