//
//  main.c
//  3076
//
//  Created by 刘靖迪 on 2017/8/31.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <string.h>

void lplus (char y[], char z[], char ans[]) {                   //lplus正确
    char a[1200]= "", b[1200] = "";
    strcpy(a, y); strcpy(b, z);
    int m, n, x;
    m = (int)strlen(a); n = (int)strlen(b);
    char p[1200] = "", q[1200] = "0", c[1200] ="";
    if (m >= n) {
        x = m-n;
        for (int i=0; i<x; i++) {
            strcat (p, q);
        }
        strcat(p, b);
        strcpy(b, p);
    }
    else {
        x = n-m;
        for (int i=0; i<x; i++) {
            strcat(p, q);
        }
        strcat(p, a);
        strcpy(a, p);
    }                                           //之后a和b一样长
    x = (int)strlen(a);
    int flag=0 ,i;
    for (i=x-1; i>=0; i--) {
        c[i] = (a[i] - '0' + b[i] - '0' + flag) % 10 + '0';
        flag = (a[i] - '0' + b[i] - '0' + flag) / 10;
    }
    if (flag == 0) {
        strcpy(ans, c);
    }
    else {
        strcpy(ans, "1");
        strcat(ans, c);
    }
}

int main(int argc, const char * argv[]) {
    char shulie[140][200];
    strcpy(shulie[0], "0");
    strcpy(shulie[1], "1");
    strcpy(shulie[2], "1");
    int i;
    for (i=3; i<125; i++) {
        lplus(shulie[i-1], shulie[i-2], shulie[i]);
    }
    int T;
    scanf("%d",&T);
    for (int j=0; j<T; j++) {
        int a;
        scanf("%d",&a);
        printf("case #%d:\n%s\n",j,shulie[a]);
    }
    return 0;
}
