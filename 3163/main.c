//
//  main.c
//  3163
//
//  Created by 刘靖迪 on 2017/3/20.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
int main()
{
    unsigned a;
    int b,c,d;
    scanf("%u",&a);
    int i;
    for (i = 0;a != 0; i++) {
        a &= (a - 1);
    }
    printf("%d,",i);
    if (i == 0)
        printf("%d:%d",b = 0,c = 32);
    else if ((32 % i) == 0)
        printf("%d:%d",b = 1,c = (32 / i));
    else if (32 % i != 0) {
        d = 32 % i;
        while ((i % d) != 0) {
            d = i % d;
        }
        printf("%d:%d",b = (i / d),c = 32 / d);
    }
    return 0;
}
