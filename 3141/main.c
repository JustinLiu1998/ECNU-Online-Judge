//
//  main.c
//  3141
//
//  Created by 刘靖迪 on 2017/9/4.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include<stdio.h>
#include<string.h>
int main()
{
    char a1[1001] = {0},a2[1001] = {0};
    while( scanf("%s%s",a1,a2) != EOF )
    {
        if (a1[0] == '0' && a2[0] == '0') break;
        int n1 = (int)strlen(a1), n2 = (int)strlen(a2), b1[1000] = {0}, b2[1000] = {0}, i, j, ans = 0;
        for(i=1000-n1,j=0; i<1000; i++)	b1[i] = a1[j++] - '0';
        for(i=1000-n2,j=0; i<1000; i++)	b2[i] = a2[j++] - '0';
        for(i = 999; i >= 999 - (n1 > n2 ? n1 : n2); i--){
            b1[i] += b2[i];
            if(b1[i] >= 10)
            {b1[i] -= 10; b1[i-1]++; ++ans;}
        }
//        for(i=0; i<1000; i++)	{if(b1[i]) break;}
//        for(   ; i<1000; i++)	printf("%d",b1[i]);
        printf("%d\n", ans);
    }
}
