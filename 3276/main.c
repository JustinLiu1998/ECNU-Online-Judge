//
//  main.c
//  3276
//
//  Created by 刘靖迪 on 2017/7/18.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>

int tab[1000001] = {0};
int main () {
    int T, a, i, j, k, tem;
    for (j=1; j<1000001; j++) {
        for (k=j, tem = 0; tem + k <= 1000000; k++) {
            tab[tem+=k]++;
        }
    }
    scanf("%d",&T);
    for (i=0; i<T; i++) {
        scanf("%d",&a);
        printf("Case %d: %d\n",i+1,tab[a]-1);
    }
    return 0;
}
