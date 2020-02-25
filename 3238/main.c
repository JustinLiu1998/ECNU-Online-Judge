//
//  main.c
//  3238(3)
//
//  Created by 刘靖迪 on 2017/6/11.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct {char s[30]; int num;} str;
int cmp (const void *a,const void *b) {
    str *x = (str *)a; str *y = (str *)b;
    if (x->num != y->num) {
        return y->num - x->num;
    }
    else return strcmp(x->s, y->s);
}
int cmp_s (const void *a, const void *b) {
    return *(char *)a - *(char *)b;
}
int counting (const char *s) {
    char temp [30]; int i, ans=0;
    memset(temp, 0, sizeof(temp));
    memcpy(temp, s , strlen(s));
    qsort(temp, strlen(temp), sizeof(char), cmp_s);
    for (i=1; i<strlen(temp); i++) {
        if (temp[i] != temp[i-1]) ans++;
    }
    return ans;
}
int main() {
    int T,t;
    scanf("%d",&T);
    for (t=0; t<T; t++) {
        int n, i;
        str ranking [110];
        scanf("%d",&n);
        for (i=0; i<n; i++) {
            memset(ranking[i].s, 0, sizeof(ranking[i].s));
            scanf("%s",ranking[i].s);
            ranking[i].num = counting(ranking[i].s);
        }
        qsort(ranking, n, sizeof(ranking[0]), cmp);
        printf("case #%d:\n",t);
        for (i=0; i<n; i++) {
            printf("%s\n",ranking[i].s);
        }
    }
    return 0;
}
