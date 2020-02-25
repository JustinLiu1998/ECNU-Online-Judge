//
//  main.c
//  3243
//
//  Created by 刘靖迪 on 2017/6/12.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct{char nam[30]; char nu[11]; int flag;} mystr;
int cmp (const void *a, const void *b) {
    mystr *x = (mystr *)a; mystr *y = (mystr *)b;
    if (strcmp(x->nam, y->nam) == 0) return strcmp(x->nu, y->nu);
    else return strcmp(x->nam, y->nam);
}
int main() {
    int cas,t;
    scanf("%d",&cas);
    for (t=0; t<cas; t++) {
        int n, a=0;
        scanf("%d",&n);
        mystr tlx[n];
        for (int k=0; k<n; k++) {
            scanf("%s %s",tlx[k].nam,tlx[k].nu);
        }
        char key[11];
        scanf("%s",key);
        char *p;
        for (int i=0; i<n; i++) {
            if ((p = strstr(tlx[i].nu, key)) != NULL) {
                a++;
                tlx[i].flag = 1;
            }
            else tlx[i].flag = 0;
        }
        qsort(tlx, n, sizeof(tlx[0]), cmp);
        printf("case #%d:\n%d\n",t,a);
        for (int i=0; i<n; i++) {
            if (tlx[i].flag) printf("%s %s\n",tlx[i].nam,tlx[i].nu);
        }
    }
    return 0;
}
