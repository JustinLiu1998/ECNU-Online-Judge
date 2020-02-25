//
//  main.c
//  1828(2)
//
//  Created by 刘靖迪 on 2017/3/27.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//
#include<stdio.h>
int main()
{
    int a,b,c,n;
    while (scanf("%d",&n)!=EOF)
    {
        if(n >= 0 && n<= 86399){
            a = n / 3600;
            b = (n - 3600 * a) / 60;
            c=n-3600*a-60*b;
            if (n==-1)
                break;
            if(a<10&&b<10&&c<10)
                printf("0%d:0%d:0%d\n",a,b,c);
            else if(a>=10&&b<10&&c<10)
                printf("%d:0%d:0%d\n",a,b,c);
            else if(a<10&&b>=10&&c<10)
                printf("0%d:%d:0%d\n",a,b,c);
            else if(a<10&&b<10&&c>=10)
                printf("0%d:0%d:%d\n",a,b,c);
            else if(a>=10&&b>=10&&c<10)
                printf("%d:%d:0%d\n",a,b,c);
            else if(a>=10&&b<10&&c>=10)
                printf("%d:0%d:%d\n",a,b,c);
            else if(a<10&&b>=10&&c>=10)
                printf("0%d:%d:%d\n",a,b,c);
            else
                printf("%d:%d:%d\n",a,b,c);}
        else break;
    }
    return 0;
}
