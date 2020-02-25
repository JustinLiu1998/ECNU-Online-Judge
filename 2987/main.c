//
//  main.c
//  2987
//
//  Created by 刘靖迪 on 2017/4/17.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>

int main() {
    int n,k,a[4],s,t;
    scanf("%d",&n);
    for (k=0; k<n; k++) {
        scanf("%d.%d.%d.%d",&a[0],&a[1],&a[2],&a[3]);
        s=0,t=0;
        if (0<=a[0]&&a[0]<=255) {
            if (0<=a[1]&&a[1]<=255) {
                if (0<=a[2]&&a[2]<=255) {
                    if (0<=a[3]&&a[3]<=255) {
                        s=1;
                    }
                    else t=3;
                }
                else t=2;
            }
            else t=1;
        }
        else t=0;
        printf("case #%d:\n",k);
        if (s) {
            printf("Yes\n");
        }
        else
            printf("No %d %d\n",t,a[t]);
    }
    
    return 0;
}
