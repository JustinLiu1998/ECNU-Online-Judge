//
//  main.c
//  2819
//
//  Created by 刘靖迪 on 2017/4/1.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>

int main() {
    int T,i,a,b,c,n;        //a为总数，n为手上
    scanf("%d",&T);
    for (i=0; i<T; i++) {
        scanf("%d",&n);
        a=n;
        while (1) {
            b=n/3;
            c=n%3;
            n=b+c;
            a=a+b;
            if (n<3)
                break;
        }
        printf("%d\n",a);
    }
    return 0;
}
