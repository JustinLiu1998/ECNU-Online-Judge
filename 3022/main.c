//
//  main.c
//  3022
//
//  Created by 刘靖迪 on 2017/4/17.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>

int main() {
    int T,N,a;
    scanf("%d",&T);
    for (int k=0; k<T; k++) {
        scanf("%d",&N);
        a=0;
        while (N/5) {
            N/=5;
            a+=N;
        }
        printf("case #%d:\n",k);
        printf("%d\n",a);
    }
    return 0;
}
