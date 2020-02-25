//
//  main.c
//  2946
//
//  Created by 刘靖迪 on 2017/4/10.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>

int main() {
    int T,a,k;
    scanf("%d",&T);
    for (int i=0; i<T; i++) {
        scanf("%d",&a);
            k=0;
            for (int j=2; j<=a; j++) {
                if (a%j==0) {
                    while (a%j==0) {
                        k++;
                        a/=j;
                    }
                    if (k>0)
                        printf("(%d,%d)",j,k);
                    k=0;
                }
            }
            printf("\n");
    }
    return 0;
}
