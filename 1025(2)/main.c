//
//  main.c
//  1025(2)
//
//  Created by 刘靖迪 on 2017/9/13.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int a[10000000] = {0};
int main(int argc, const char * argv[]) {
    int n, k;
    scanf("%d%d", &n, &k);
    memset(a, 0, sizeof(a));
    int t;
    for (int i=0; i<n; i++) {
        scanf("%d", &t);
        a[t]++;
    }
    int j = 0;
    for (int i=0; i<k; j++) {
        if (a[j])
            printf("%d: %d\n", ++i, j);
    }
    return 0;
}
