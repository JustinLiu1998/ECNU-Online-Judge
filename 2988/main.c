//
//  main.c
//  2988（2）
//
//  Created by 刘靖迪 on 2017/4/17.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include<stdio.h>
int main()
{
    char a[1001];
    int r,m,n,s,t,b,c,q[6]={0};
    s=0;r=0;
    scanf("%d\n",&n);
    while (n--)
    {
        t=0;
        gets(a);
        for (int i=0;a[i]!='\0';i++)
            t++;
        for(int i=0;i<6;i++)
            for(int j=0;j+i<t;j+=6)
                q[i]=a[j+i]+q[i];
        for(int i=0;i<6;i++)
        {
            q[i]%=10;
        }
        printf("case #%d:\n",r);
        for (int i=0;i<6;i++)
            printf("%d",q[i]);
        printf("\n");
        for (int i=0;i<6;i++)
            q[i]=0;
        r++;
    }
    return 0;
}
