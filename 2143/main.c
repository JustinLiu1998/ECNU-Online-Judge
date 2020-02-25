//
//  main.c
//  2143
//
//  Created by 刘靖迪 on 2017/4/1.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
int main() {
    int N,i;
    scanf("%d",&N);
    if (N>=1 && N<=100) {
        for (i=0; i<N; i++) {
            int A,B;
            scanf("%d%d",&A,&B);
            int j,k;
            j=A/B;
            k=j/5;
            if (k) {
                if ((j%5) / 3) {
                    j=j+2*k+((j%5) / 3);
                }
                else
                    j=j+2*k;
                printf("%d\n",j);
            }
            else if (j / 3)
                printf("%d\n",j+(j / 3));
            else
                printf("%d\n",j);
        }
    }
    return 0;
}
