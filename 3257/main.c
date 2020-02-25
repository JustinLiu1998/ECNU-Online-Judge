//
//  main.c
//  3257
//
//  Created by 刘靖迪 on 2017/9/4.
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

void lsubstract (char *r, char *l, char *ans) {                     //r-l
    char a[1200]= "", b[1200] = "";
    strcpy(a, r); strcpy(b, l);
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
    int flag = 0;
    for (int i=x-1; i>=0; i--) {
        if (r[i] >= l[i]) {
            ans[i] = r[i] - l[i] + '0' + flag;
        }
        else {
            ans[i] = r[i] - l[i] + 10 + flag + '0';
            flag = -1;
        }
    }
}

void count (char *x, char *ans) {
    int len = (int)strlen(x), y[30], num1 = 0;
    char tem[30];
    for (int i=0; i<len; i++) {
        y[i] = x[i] - '0';
        if (y[i] >= 6)
            num1++;
    }
    for (int i=len-1; i>=0; i--) {
        for (int j=0, k=0; j<len; j++) {
            if (j!=i) {
                tem[k++]=x[j];
            }
        }
        lplus(tem, ans, ans);
    }
    strcpy(tem, "1");
    for (int i=0; i<num1; i++) {
        lplus(ans, tem, ans);
    }
    
    
}
int main(int argc, const char * argv[]) {
      char l[30], r[30];
    while (scanf("%s%s", l, r) != EOF) {
        char ans[30]="0", tem[30]="0", tem1[30]="0";
        count(r, tem), count(l, tem1);
        lsubstract(tem, tem1, ans);
        printf("%s\n", ans);
    }
    return 0;
}
