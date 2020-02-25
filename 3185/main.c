//
//  main.c
//  3185
//
//  Created by 刘靖迪 on 2017/3/28.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
int main() {
    int T,i,N,M,j,a;
    scanf("%d",&T);
    {
        for (i=0; i<T; i++) {
            scanf("%d%d",&N,&M);
            int num=0;
            for (j=N; j>=1; j-=2) {
                a = j;
                while(a%M==0 && a!=0){
                    a=a/M;
                    num++;
                }
            }
            printf("case #%d:\n",i);
            printf("%d\n",num);
        }
    }
    return 0;
}
