//
//  main.cpp
//  3121(c)
//
//  Created by 刘靖迪 on 2017/9/4.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX 1000000
bool x[MAX+1];
int main()
{
    memset(x, true , sizeof(x));
    x[0] = x[1] = false; x[2] = true;
    int i,j;
    for(i = 2; i * i <= MAX; i ++) {
        if(x[i]){
            for(j = i + i; j <= MAX; j += i)
                x[j] = false;
        }
    }
    for (int j=100; j<=200; j++) {
        if (x[j])
            printf("%d ", j);
    }
    printf("\n");
    return 0;
}
