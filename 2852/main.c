//
//  main.c
//  2852
//
//  Created by 刘靖迪 on 2017/6/16.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int cmp (const void *a, const void *b) {
    return *(char *)a - *(char *)b;
}
int main(int argc, const char * argv[]) {
    char a[3500], c, tar;
    int n=0;
    while ((c=getchar()) != EOF) {
        if (c >= 'a' && c<= 'z')
            a[n++] = c;                                 //共n个字母
    }
    qsort(a, n, sizeof(a[0]), cmp);                     //升序排序
    double x;
    int tem=1, max=1;
    tar = a[0];
    for (int i=1; i<n; i++) {
        if (a[i] == a[i-1])
            tem++;
        else tem=1;
        if (tem>max) {max=tem; tar = a[i];}
    }
    x=(double)max/n;
    printf("%c %.2lf\n",tar, x);
    return 0;
}
