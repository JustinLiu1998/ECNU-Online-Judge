//
//  main.c
//  1147
//
//  Created by 刘靖迪 on 2017/3/5.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include<stdio.h>
int main()
{
    int a[1000],b,T,c,N,R,i,j;
    scanf("%d",&T);
    for (c=1; c<=T; c++) {
        scanf("%d%d",&N,&R);
        if (N<0) {
            N=-N;
            printf("-");
        }
        if (N==0)
            printf("0");
        i=0;
        while (N>0) {
            b=N%R;
            a[i]=b;
            N=N/R;
            i++;
        }
        char x = 0;
        for (j=i-1; j>=0; j--) {
            if (a[j] >= 10) printf("%c",x=a[j] - 10 + 'A');
            else printf("%d",a[j]);
        }
        printf("\n");
    }
    return 0;
}
