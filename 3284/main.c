//
//  main.c
//  3284
//
//  Created by 刘靖迪 on 2017/8/17.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct {int num;double dis;} myt;
int cmp (const void *a, const void *b) {
    myt *x = (myt *)a; myt *y = (myt *)b;
    if (x->dis != y->dis) {
        return y->dis - x->dis;
    }
    else
        return y->num - x->num;
}

int main(int argc, const char * argv[]) {
    myt dat[1000000];
    int Q, i=0, x, X, Y ,A, n=1;
    scanf("%d",&Q);
    for (i=0; i<Q; i++) {
        scanf("%1d",&x);
        if (x==1) {
            scanf("%d%d%d", &A, &X, &Y);
            dat[A].dis=pow(X, Y);
            dat[A].num=A;
            if (A>n) {
                n=A;
            }
        }
        else if (x==2) {
            scanf("%d", &A);
            dat[A].dis=-1;
        }
        else if (x==3) {
            qsort(dat, n, sizeof(dat[0]),cmp);
            for (int j=1; j<=n;  ) {
                if (dat[j].dis>-1) {
                    printf("%d\n",dat[j].num);
                }
                else
                    j++;
            }
        }
    }
    return 0;
}
