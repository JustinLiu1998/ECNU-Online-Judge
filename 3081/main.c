//
//  main.c
//  3081
//
//  Created by 刘靖迪 on 2017/3/13.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main()
{
    int  d,p;
    float r,m;
    scanf("%d%d%f",&d,&p,&r);
    m = (log10(p / (p - d * r / 100)))/log10(1 + r / 100);
    printf("%.0f",m);
    return 0;
}
