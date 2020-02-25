//
//  main.c
//  2997
//
//  Created by 刘靖迪 on 2017/4/10.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
int main() {
    int a[37],T;
    a[0]=0,a[1]=1,a[2]=1;
    for (int i=3; i<=37; i++) {
        a[i]=a[i-1]+a[i-2]+a[i-3];
    }
    scanf("%d",&T);
    int j,n;
    for (j=0; j<T; j++) {
        scanf("%d",&n);
        printf("case #%d:\n%d\n",j,a[n]);
    }
    return 0;
}
