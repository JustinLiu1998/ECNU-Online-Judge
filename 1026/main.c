//
//  main.c
//  1026
//
//  Created by 刘靖迪 on 2017/3/2.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    double s,t;
    while (scanf("%d",&n)!=EOF)
    {
        if (n==0)
            return 0;
        if (n<=2)
        {
            s=5*(n-1)+1.75;
            t=sqrt(2*s/9.8);
            printf("%.3f\n",t);
        }
        else if (n>=3)
        {
            s=3*(n-3)+10+1.75;
            t=sqrt(2*s/9.8);
            printf("%.3f\n",t);
        }
    }
    return 0;
}
