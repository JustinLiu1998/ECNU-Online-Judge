//
//  main.c
//  3242
//
//  Created by 刘靖迪 on 2017/6/12.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

/*
#include <stdio.h>
#include <stdlib.h>
int main() {
    int cas, t;
    scanf("%d",&cas);
    for (t=0; t<cas; t++) {
        int a[1000], n, i, j, k, max=1, most=1;
        scanf("%d",&n);
        for (int p=0; p<n; p++) {
            scanf("%d",&a[p]);
        }
        for (i=0;i<n-1;i++ )
            for (j=i+1;j<n;j++ )
                if (a[i]>a[j]) { k=a[i];a[i]=a[j];a[j]=k; }
        for (int p=1; p<n; p++) {
            if (a[p] == a[p-1]) {
                ++max;
            }
            else max=1;
            if (max > most) most = max;
        }
        printf("case #%d:\n%d\n",t,most);
    }
         
    return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>
int cmp (const void*a, const void *b) {
    return *(int *)a - *(int *)b;               //强制类型转换+取内容
}
int main() {
    int cas, t;
    scanf("%d",&cas);
    for (t=0; t<cas; t++) {
        int a[1000], n, max=1, most=1;
        scanf("%d",&n);
        for (int p=0; p<n; p++) {
            scanf("%d",&a[p]);
        }
        qsort(a, n, sizeof(a[0]), cmp);
        for (int p=1; p<n; p++) {
            if (a[p] == a[p-1]) {
                ++max;
            }
            else max=1;
            if (max > most) most = max;
        }
        printf("case #%d:\n%d\n",t,most);
    }
    
    return 0;
}
