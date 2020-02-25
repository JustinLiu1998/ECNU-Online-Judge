//
//  main.c
//  3099
//
//  Created by 刘靖迪 on 2017/5/22.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isRotation(char s1[],char s2[])
/* PreCondition:  s1和s2是长度不超80的两个字符串
 PostCondition: s2可以是s1经过循环移动后得到时返回1，否则0
 */

{
    int a,b,flag=0,x=0;
    a=strlen(s1),b=strlen(s2);
    if (a==b) {
        for (int i=0;i<a;i++) {
            flag=0;
            for (int j=i;j<a;j++) {
                if (s1[j]==s2[j-i]) {
                    flag+=0;
                }
                else
                    flag++;
            }
            for (int k=0;k<i;k++) {
                if (s1[k]==s2[k+a-i])
                    flag+=0;
                else
                    flag++;
            }
            if (flag==0)
                x+=1;
            else
                x+=0;
        }
        if (x)
            return 1;
        else
            return 0;
    }
    else
        return 0;
}

/***************************************************************/
#define N 80
int main()
{   char s[N+1],t[N+1];
    scanf("%s%s",s,t);
    
    //********** isRotation is called here *************
    if(isRotation(s,t)) printf("\"%s\" is a rotation of \"%s\"\n",s,t);
    else printf("\"%s\" is NOT a rotation of \"%s\"\n",s,t);
    //**************************************************
    
    return 0;
}
