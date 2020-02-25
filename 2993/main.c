//
//  main.c
//  2993
//
//  Created by 刘靖迪 on 2017/4/17.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>

int main() {
    int T,N,i,j,k,m,s;
    scanf("%d",&T);
    for (k=0;k<T;k++) {
        scanf("%d",&N);
        int a[N],b[N];
        for (i=0; i<N; i++) {
            scanf("%d",&a[i]);
        }
        while (1) {
        
        for (i=0; i<N; i++) {
            m=0;
            for (j=i; j<N; j++) {
                if (a[j]<a[i]) {
                    m++;
                }
                b[i]=m;
            }
        }
            s=0;
            for (i=0; i<N; i++) {
                if (a[i]>b[i]||a[i]<b[i]) {
                    s++;
                }
            }
            if (s==0) {
                break;
            }
            else
                for (i=0; i<N; i++) {
                    a[i]=b[i];
                    b[i]=0;
                }
        }
        printf("case #%d:\n",k);
        for (i=0; i<N-1; i++) {
            printf("%d ",b[i]);
        }
        printf("%d\n",b[N-1]);
    }
    return 0;
}
