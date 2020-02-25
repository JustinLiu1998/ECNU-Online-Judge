//
//  main.c
//  1013string
//
//  Created by 刘靖迪 on 2017/9/20.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>

#define MAXN 1030
const int false=0, fail=0;
const int true=1, success=1;

int strlen1(char *s) {
    int i;
    for (i=0; s[i] != '\0'; i++) ;
    return i;
}

int strcat1(char *s1, char *s2) {
    int i, j, k;
    if ((i = strlen1(s1)) + (j = strlen1(s2)) >= MAXN)              //如果数组越界，则操作失败
        return fail;
    for (k=0; k<j; k++)
        s1[i+k] = s2[k];
    return success;
}

int strsub1(char *s1, int i, int j, char*s2) {
    int m ,k;
    if (i<0 || i>(m = strlen1(s1)))                         //如果i<0或i>m，都是非法操作，操作失败
        return fail;
    if (j<0 || i+j>m)
        return fail;
    for (k=0; k<j; k++)
        s2[k]=s1[i+k];
    s2[k]='\0';
    return success;
}

int strequ1(char *s1, char *s2) {
    int i=0;
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        i++;
    if (s1[i] == '\0' && s2[i] == '\0')
        return true;
    else return false;
}

int main(int argc, const char * argv[]) {
    char s[MAXN], s1[MAXN];
    scanf("%s", s);
    int n;
    scanf("%d", &n);                                        //输入操作次数
    for (int i=0; i<n; i++) {
        char t1[20];
        scanf("%s", t1);
        if (t1[3] == 'c'){                                  //对每次操作进行判断，并调用相应的函数
            char t2[MAXN];
            scanf("%s", t2);
            strcat1(s, t2);
            printf("%s\n", s);
        }
        if (t1[3] == 's') {
            int a, b;
            scanf("%d%d", &a, &b);
            char t2[MAXN];
            if (strsub1(s, a, b, t2))
                printf("%s\n", t2);
            else printf("fail\n");
        }
        if (t1[3] == 'e') {
            scanf("%s", s1);
            if (strequ1(s, s1))
                printf("yes\n");
            else printf("no\n");
        }
    }
    return 0;
}
