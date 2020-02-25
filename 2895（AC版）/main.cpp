//
//  main.cpp
//  2895（AC版）
//
//  Created by 刘靖迪 on 2017/9/20.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
void solve(int m,int n)//判断是否为循环小数
{
    int *yu,*shang,i=1,j=1,k,p;
    yu=(int*)malloc(n*sizeof(int));
    shang=(int*)malloc(n*sizeof(int));
    yu[0]=m;
    shang[0]=n;
    for(m*=10;;)
    {
        if(m%n==0)
        {
            printf("0\n");
            break;
        }
        else
        {
            for(k=0;k<i;k++)
            {
                if(yu[k]==m%n)
                {
                    shang[j++]=m/n;
                    for(p=k+1;p<j;p++)
                        printf("%d",shang[p]);
                    printf("\n");
                    break;
                }
            }
            if(k!=i)
                break;
            else if(k==i)
            {
                yu[i]=m%n;
                shang[j]=m/n;
                m=yu[i]*10;
                i++;
                j++;
            }
        }
    }
    free(yu);
    free(shang);
}
int main()
{
    int m,n;
    while(scanf("%d",&m)!=EOF)
    {
        getchar();
        scanf("%d",&n);
        solve(m,n);
    }
    return 0;
}
