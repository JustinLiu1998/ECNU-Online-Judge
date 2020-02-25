//
//  main.c
//  3170
//
//  Created by 刘靖迪 on 2017/5/22.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned b2i(char s[])
/* PreCondition:  s是由0和1组成的字符串，且字符串长度不超32
 PostCondition: 返回与字符串s对应的十进制数
 */

{
    int a,b=0;
    a=strlen(s);
    for (int i=0;i<a;i++) {
        b*=2;
        b+=s[i]-'0';
    }
    return b;
}

/***************************************************************/
#define N 32
int main()
{   char s[N+1];
    scanf("%s",s);
    
    //********** b2i is called here ********************
    printf("%u\n",b2i(s));
    //**************************************************
    
    return 0;
}

