//
//  main.c
//  3296
//
//  Created by 刘靖迪 on 2017/8/17.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a, T;
    scanf("%d",&T);
    for (int i=0; i<T; i++) {
        scanf("%d",&a);
        a/=3;
        printf("%d\n",a);
    }
    return 0;
}
