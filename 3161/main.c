//
//  main.c
//  3161
//
//  Created by 刘靖迪 on 2017/3/20.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
int main()
{
    unsigned a,b,c;
    int p,n;
    scanf("%u%d%d",&a,&p,&n);
    b = ~(~0<<n)<<(p+1-n);              /*b = 00000001110000*/
    c = ~(~0<<n)<<(p+1-n);
    c &= a;                    /*c读取a中n位 00000000xxxx00000*/
    c |= (~b);              /*c= 11111111xxxxx1111*/
    a &= (~b);                          /*a中的n位被置零*/
    a |= (~c);                /*~c = 0000000yyyy0000*/
    printf("%u",a);
    return 0;
}
