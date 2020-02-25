//
//  main.c
//  2985
//
//  Created by 刘靖迪 on 2017/4/1.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main() {
    int T,i;
    scanf("%d",&T);
    for (i=0; i<T; i++) {
        int N,K;
        scanf("%d%d",&N,&K);
        double s;
        s=N*N*(4-M_PI)*(2-pow(0.5, K-1))/4;
        printf("case #%d:\n%.6f\n",i,s);
    }
    return 0;
}
