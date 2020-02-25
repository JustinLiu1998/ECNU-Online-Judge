//
//  main.c
//  2849
//
//  Created by 刘靖迪 on 2017/5/15.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
struct coord {                                  //引入结构体
    long long x;
    int y;
}data[100];
int cmp (struct coord*a,struct coord*b) {
    if (b->y != a->y) {
        return b->y - a->y;
    }
    else
        return (a->x < b->x)? -1:1;
}

int main() {
    int n,k;
    scanf("%d",&n);
    for (k=0; k<n; k++) {
        scanf("%lld%d",&data[k].x,&data[k].y);
    }
    qsort(data, n, sizeof(data[0]), cmp);
    for (k=0; k<n; k++) {
        if (data[k].y >= 60) {
            printf("%lld %d\n",data[k].x,data[k].y);
        }
    }
    return 0;
}
