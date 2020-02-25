//
//  main.c
//  8
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
    char tag[1300] = "11", shulie[100][200];
    int length = 0;
    strcpy(shulie[1], "1"); strcpy(shulie[2], "1");
    int i=3;
    while (length < 1050) {
        lplus(shulie[i-1], shulie[i-2], shulie[i]);
        strcat(tag, shulie[i]);
        length = (int )strlen(tag);
        i++;
    }
    int x;
    scanf("%d",&x);
    for (int j=0; j<x; j++) {
        printf("%c",tag[j]);
    }
    printf("\n");
    return 0;
}
