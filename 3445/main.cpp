//
//  main.cpp
//  3445
//
//  Created by 刘靖迪 on 2017/12/12.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include<stdio.h>
#include<string.h>
#define N 100
int main(void)
{
    char s[3*N+1],x[N+1],y[N+1],*k,temp[3*N+1];
    scanf("%s%s%s",s,x,y);
    int lx=(int)strlen(x),ly=(int)strlen(y);
    k=strstr(s,x);
    while(k)
    {
        strcpy(temp,k+lx);
        strcpy(k,y);
        strcat(s,temp);
        k=strstr(k+ly,x);
    }
    puts(s);
}
