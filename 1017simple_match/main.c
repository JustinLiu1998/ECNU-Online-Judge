//
//  main.c
//  1017simple_match
//
//  Created by 刘靖迪 on 2017/9/27.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define MAXN 1000
#define MAXM 100
char t[MAXN], p[MAXM];

int simple_match (char t[], char p[], int n, int m) {
    int i, j, k;                                                //j用来存储当前有多少长度是匹配的
    for (i=0; i <= n-m; i++) {                                  //对t从0扫到n-m
        for (j=0, k=i; j < m && t[k] == p[j]; k++, j++) ;
        if (j == m)                                             //匹配的长度等于m时，匹配成功
            return i;                                           //返回i，函数运行结束
    }
    return -1;                                                  //否则返回-1
}

int main(int argc, const char * argv[]) {
    while (scanf("%s%s", t, p) != EOF)                      //多组输入，直到文件结束
        printf("%d\n", simple_match(t, p, (int)strlen(t), (int)strlen(p)));         //调用函数并打印结果
    return 0;
}
