//
//  main.c
//  2998
//
//  Created by 刘靖迪 on 2017/4/17.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>

int main() {
    int T,n,a;
    scanf("%d",&T);
    for (int k=0; k<T; k++) {
        scanf("%d",&n);
        a=0;
        for (int i=2; i<2000000000; i++) {
            if (n%i==0) {
                a=n/i;
                break;
            }
        }
        printf("case #%d:\n",k);
        printf("%d\n",a);
    }
    return 0;
}
