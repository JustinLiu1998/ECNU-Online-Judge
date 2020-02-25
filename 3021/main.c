//
//  main.c
//  3021
//
//  Created by 刘靖迪 on 2017/5/8.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp(const void *a,const void*b) {
    return *(char *)a-*(char *)b;
}
int main() {
    int T;
    char a[300]={0},b[300]={0};
    scanf("%d",&T);
    getchar();
    for (int k=0; k<T; k++) {
        gets(a);
        int n=0;
        for (int i=0; i<(int)strlen(a); i++) {
            if (a[i] >= 'A' && a[i] <='Z') {
                b[n]=a[i];
                n++;
                a[i]=0;
            }
        }
        qsort(b, n, sizeof(b[0]), cmp);
        n=0;
        for (int m=0; m<(int)strlen(a); m++) {
            if (a[m] ==0) {
                a[m]=b[n];
                n++;
            }
        }
        printf("case #%d:\n",k);
        for (int j=0; j<(int)strlen(a); j++) {
            printf("%c",a[j]);
        }
        printf("\n");
    }
    return 0;
}
