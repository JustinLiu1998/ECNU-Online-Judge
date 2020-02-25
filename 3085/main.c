//
//  main.c
//  3085
//
//  Created by 刘靖迪 on 2017/4/24.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include<stdio.h>

int main()
{
    int a,b;
    while(scanf("%d",&a)!=EOF)
    {
        b=0;
        while(a)
        {
            a&=(a-1);
            b++;
        }
        printf("%d\n",b);
        
    }
    return 0;
}
