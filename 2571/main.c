//
//  main.c
//  2571
//
//  Created by 刘靖迪 on 2017/4/10.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>

int main() {
    int T;
    scanf("%d",&T);
    int a,b,i;
    for (i=0; i<T; i++) {
        scanf("%d%d",&a,&b);
        int m,n,p;
        m=a;n=b;p=0;
        if (a >= b)
            ;
        else {
            int c; c = a; a = b; b = c;     //确保a>b
        }
        if (a%b==0)
            ;
        else
            while (a%b!=0) {
                p=a;
                a=b;
                b=p%b;
            }
        printf("%d ",b);
        printf("%d\n",b*(n/b)*(m/b));
    }
    return 0;
}
