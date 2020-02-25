//
//  main.c
//  3157
//
//  Created by 刘靖迪 on 2017/3/2.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
int Max(int w,int x,int y)
{   int z;
    if (w>x) z=w;
    else z=x;
    if (z>y) z=z;
    else z=y;
    return z;
}
int main()
{   int a,b,c,d;
    printf("Enter a,b and c:");
    scanf("%d%d%d",&a,&b,&c);
    d=Max(a,b,c);
    printf("Max=%d",d);
    return 0;
}
