//
//  main.c
//  3169
//
//  Created by 刘靖迪 on 2017/5/22.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int count(char s[],char t[])
/* precondition: s和t是两个字符串，t不会是空串，且t不会重叠
 postcondition: 返回t在s中出现的次数
 */

{
    int n=0,a,b,flag=0;
    a=strlen(s);b=strlen(t);
    for (int i=0;i<a-b+1;i++) {
        flag=0;
        for (int j=i;j<i+b;j++) {
            if (s[j]==t[j-i])
                flag+=0;
            else
                flag++;
        }
        if (flag==0)
            n++;
    }
    return n;
}

/***************************************************************/
#define N 80
int main()
{   char s[N+1],t[N+1];
    scanf("%s%s",s,t);
    
    //********** count is called here ******************
    printf("%d\n",count(s,t));
    //**************************************************
    
    return 0;
}

