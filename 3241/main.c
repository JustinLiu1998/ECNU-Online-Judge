//
//  main.c
//  3241
//
//  Created by 刘靖迪 on 2017/6/5.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#define N 80
int main() {
    int T,i,k;
    char S[N+1];
    scanf("%d\n",&T);
    for (i=0; i<T; i++) {
        printf("case #%d:\n",i);
        gets(S);
        for (k=0; S[k]!='\0'; k+=2) {
            if (S[k] >= 'A' && S[k] <= 'Z') {
                S[k]-=('A'-'a');
            }
        }
        printf("%s\n",S);
    }
    return 0;
}
