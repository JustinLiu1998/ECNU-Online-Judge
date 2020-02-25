//
//  main.c
//  3184
//
//  Created by 刘靖迪 on 2017/6/14.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define M 100
#define N 100
//********** Specification of SortLines **********
struct str {int sum; int q[100];} ranking [100];

int cmp (const void *a, const void *b) {
    struct str *x = (struct str *)a; struct str *y = (struct str *)b;
    int k=0;
    if (x->sum != y->sum)
        return x->sum - y->sum;
    else {
        while (x->q[k] == y->q[k]) {
            k++;
        }
        return x->q[k] - y->q[k];
    }
}
void SortLines(int (*p)[M], int n, int m)
{
    int i=0, j=0;
    for (i=0; i<n; i++) {
        ranking[i].sum = 0;
        for (j=0; j<m; j++) {
            ranking[i].q[j] = p[i][j];
            ranking[i].sum += p[i][j];
        }
    }
    qsort(ranking, n, sizeof(ranking[0]), cmp);
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            p[i][j] = ranking[i].q[j];
        }
    }
}
/***************************************************************/
int main()
{
    int a[N][M];
    int n,m,i,j;
    int t,cas;
    scanf("%d",&cas);
    for(t=0; t<cas; t++)
    {
        memset(a,0,sizeof(a));
        scanf("%d%d",&n,&m);
        for (i=0; i<n; i++)
            for (j=0; j<m; j++)
                scanf("%d",&a[i][j]);
        /***** function SortLines is called here *****/
        SortLines(a,n,m);
        /****************************************/
        printf("case #%d:\n",t);
        for (i=0; i<n; i++)
            for (j=0; j<m; j++)
                printf("%d%c",a[i][j],j<m-1?' ':'\n');
    }
    return 0;
}
