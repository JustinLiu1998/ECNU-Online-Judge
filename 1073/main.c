//
//  main.c
//  1073
//
//  Created by 刘靖迪 on 2017/3/6.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    char a[1024];
    while ((gets(a))) {
        n=strlen(a);
        printf("%d\n",n);
    }
    return 0;
}
