//
//  main.c
//  3172
//
//  Created by 刘靖迪 on 2017/5/27.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
int i=0;
//********** Specification of i2a **********
void i2a(char s[],long long int n)
{
    if (n>=10) {
        i2a(s,n/10);
        s[++i]='0'+n%10;
    }
    else
    {
        s[i]='0'+n%10;
        s[i+1]='\0';
    }
}

/***************************************************************/

int main()
{  long long int n;
    char s[20];
    scanf("%lld",&n);
    
    //********** i2a is called here ********************
    i2a(s,n);
    //**************************************************
    printf("%s\n",s);
    
    return 0;
}

/*
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 
 int i=0;
 void i2a(char s[],long long int n)//
 {
    if(n/10!=0)//最后一位不需要递归
        i2a(s,n/10);
    s[i]=n%10+'0';
    s[i+1]='\0';
    i++;
 }
 
 int main()
 {
    long long int n;
    char s[20];
    scanf("%I64d",&n);
    i2a(s,n);
    printf("%s\n",s);
    return 0;
 }
 */

