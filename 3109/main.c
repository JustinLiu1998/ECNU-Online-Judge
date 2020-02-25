//
//  main.c
//  3109
//
//  Created by 刘靖迪 on 2017/6/5.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#define N 80
char* strmcpy(char* t, char* s, int m) {
    int i;
    for (i=m; s[i] != '\0'; i++) {
        t[i-m]=s[i];
    }
    t[i-m]='\0';
    return t;
}


int main() {
    char s[N+1],t[N+1]; int m;
    gets(s);
    scanf("%d",&m);
    printf("%s\n",strmcpy(t,s,m));
    return 0;
}

