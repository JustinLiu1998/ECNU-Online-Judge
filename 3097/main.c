//
//  main.c
//  3097
//
//  Created by 刘靖迪 on 2017/6/8.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct {char b[31];} str;
int cmp (const void *a, const void *b) {
    str *x = (str *) a; str *y = (str *) b;
    return strcmp(y->b, x->b);
}
int main() {
    int n;
    str s[11];
    scanf("%d",&n);
    getchar();
    for (int k=0; k<n; k++) {
        gets(s[k].b);
    }
    qsort(s, n, sizeof(s[0]), cmp);
    for (int j=0; j<n; j++) {
        printf("%s\n",s[j].b);
    }
    return 0;
}
