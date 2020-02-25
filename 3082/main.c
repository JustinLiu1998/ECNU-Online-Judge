//
//  main.c
//  3082
//
//  Created by 刘靖迪 on 2017/3/13.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    if (x < 1)
        y = x;
    else if (x >= 1 && x < 10)
        y = 2 * x - 1;
    else if (x >= 10)
        y = 3 * x - 11;
    printf("%d",y);
    return 0;
}
