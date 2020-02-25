//
//  main.c
//  3055(2)
//
//  Created by 刘靖迪 on 2017/6/7.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define N 100
double f[26];                                       //存频率

int trans(char c) {                                 //换成数字
    if (c <= 'Z') {
        return c - 'A';
    }
    else
        return c - 'a';
}

double charcmp (char a, char b) {
    if (a==b) {
        return 0;
    }
    if (abs(a-b) == 'a' - 'A') {                   //a和b分别是大小写字母的情况
        return b-a;                                //降序，即小写字母在前
    }
    if (f[trans(b)] == f[trans(a)]) {               //不同字母若频率一样，则按字母顺序排
        return trans(a) - trans(b);
    }
    if (f[trans(a)] - f[trans(b)] > 1e-6) {
        return -1;
    }
    if (f[trans(a)] - f[trans(b)] < 1e-6) {
        return 1;
    }
    return 0;
}

int cmp(const void *a, const void *b) {
    char *p = (char *)a; char *q = (char *)b;
    if (charcmp(*p, *q) > 1e-6) {                           //double型的比大小
        return 1;
    }
    if (charcmp(*p, *q) < 1e-6) {
        return -1;
    }
    return 0;
}

int main() {
    int T,k,i;
    char s[N+1];
    scanf("%d",&T);
    for (k=0; k<T; k++) {
        printf("case #%d:\n",k);
        for (i=0; i<26; i++) {
            scanf("%lf",&f[i]);
        }
        scanf("%s",s);
        qsort(s, (int) strlen (s), sizeof(s[0]), cmp);
        printf("%s\n",s);
    }
    return 0;
}
