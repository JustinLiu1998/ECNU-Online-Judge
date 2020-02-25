//
//  main.c
//  2844
//
//  Created by 刘靖迪 on 2017/6/16.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char s;
    scanf("%c",&s);
    int a[1001]={0}, tem, num=0;
    while (scanf("%d",&tem) != EOF) {
        a[tem]++;
    }
    int b[1001]={0};
    for (int i=0; i<1001; i++) {
        if (a[i]) {
            b[num++]=i;
        }
    }
    if (s=='A') {
        for (int i=0; i<num-1; i++) {
            printf("%d ",b[i]);
        }
        printf("%d\n",b[num-1]);
    }
    else if (s=='D') {
        for (int i=num-1; i>0; i--) {
            printf("%d ",b[i]);
        }
        printf("%d\n",b[0]);
    }
    return 0;
}
