//
//  main.c
//  22(2)
//
//  Created by 刘靖迪 on 2017/9/3.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int judbig(char *n) {
    int len = (int)strlen(n);
    int flag=1;
    for (int i=0; i<len; i++) {
        if (n[i] != '1' && n[i] != '0') {
            flag=0;
        }
    }
    return flag;
}

int jud(char *n) {
    int flag=1, i=0, len = (int)strlen(n);
    if (n[0] != '1')
        flag=0;
    for (i=1; i<len; i++) {
        if (n[i] != '0')
            flag = 0;
    }
    return flag;
}


int main(int argc, const char * argv[]) {
    char n[25]; int x, d;
    char ans[25];
    scanf("%s%d", n, &x);
    int len = (int)strlen(n);
    d=len-x;
    if (judbig(n)) {                                //是大数
        if (jud(n)) {                                   //是1000……000型
            if (d==0) {
                strcpy(ans, n);
            }
            else if (d==1) {
                for (int i=0; i<x; i++) {
                    ans[i]='1';
                }
            }
            else if (d>1){
                for (int i=0; i<d-1; i++) {
                    ans[i]='9';
                }
                for (int i=d-1; i<len-1; i++) {
                    ans[i]='1';
                }
            }
        }                                               //一种情况实现
        
        else {                                          //不是1000……000型
            if (d==0) {
                strcpy(ans, n);
            }
            else if ()
        }
        
    }
    else {                                          //不是大数
        if (d) {                                        //长度不同
            
        }
        else {                                          //长度相同
            
        }
    }
    printf("%s\n",ans);
    return 0;
}
