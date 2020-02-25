//
//  main.c
//  2984
//
//  Created by 刘靖迪 on 2017/4/24.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>

int main() {
    int T,N,K,m,w,c,  x,a[100000],b[100000],e,f,x1,x2,x3;
    scanf("%d",&T);
    for (int k=0; k<T; k++) {
        scanf("%d%d",&N,&K);
        m=w=c=0;
        e=K-2*N;f=3*N-K;
        for (x=0; x<=N; x++) {
            a[x]=10000*(e+x)+100*(f-2*x)+x;
        }
        int min;
        for (int i=0; i<=N; i++) {
            for (int j=i; j<=N; j++) {
                min = a[i];
                if (min > a[j]) {
                    min = a[j];
                }
                b[i] = min;
            }
        }
        int s=0;
        for (int i=0; i<=N; i++) {
            x1=b[i]/10000;x2=(b[i]%10000)/100;x3=b[i]%100;
            if (x1+x2+x3==N && x1>=0 && x2>=0)
                s++;
        }
        printf("case #%d:\n",k);
        if (!s) {
            printf("-1\n");
        }
        else {
        for (int i=0; i<=N; i++) {
            x1=b[i]/10000;x2=(b[i]%10000)/100;x3=b[i]%100;
            if (x1+x2+x3==N && x1>=0 && x2>=0)
            printf("%d %d %d\n",x1,x2,x3);
        }
        }
    }
    return 0;
}
