//
//  main.c
//  3245
//
//  Created by 刘靖迪 on 2017/7/18.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int judge(char *a, int len) {
    int flag = 1, i=0;
    for (i=0; i<len-1; i++) {
        if (a[i] > a[i+1]) {
            flag = 0;
        }
    }
    return flag;
}
int main(int argc, const char * argv[]) {
    char x[101][20];
    int T ,i, n;
    scanf("%d",&T);
    for (i=0; i<T; i++) {
        scanf("%s",x[i]);
        n=(int)strlen(x[i]);
        if (!judge(x[i], n) ){
            while (!judge(x[i], n)){
                x[i][--n]='9';
                while (x[i][--n] == '0') {
                    x[i][n]='9';
                }
                x[i][n]--;
                n++;
            }
        }
        int j = 0, k;
        while (x[i][j++] == '0') ;j--;
        for (k=0; x[i][j] != '\0'; k++) {
            x[i][k]=x[i][j++];
        }
        x[i][k]='\0';
        printf("case #%d:\n%s\n",i,x[i]);
    }
    return 0;
}
