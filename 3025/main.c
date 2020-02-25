//
//  main.c
//  3025
//
//  Created by 刘靖迪 on 2017/4/24.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>

int main() {
    int T,N,a,s,i,j;
    scanf("%d",&T);                      //a是个数
    for (int k=0; k<T; k++) {
        scanf("%d",&N);
        a=0;
        for (j=1; j<=(N/2)+1; j++) {
            s=0;
            for (i=j; i<=(N/2)+1; i++) {
                s+=i;
                if (s==N) {
                    a++;
                    break;
                }
                if (s>N) {
                    break;
                }
            }
        }
        printf("case #%d:\n",k);
        printf("%d\n",a);
    }
    return 0;
}
