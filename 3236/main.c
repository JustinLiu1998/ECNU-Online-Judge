//
//  main.c
//  3236
//
//  Created by 刘靖迪 on 2017/6/12.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
int main() {
    int cas,t;
    scanf("%d",&cas);
    for (t=0; t<cas; t++) {
        int n, res=0;
        scanf("%d",&n);
        for (int i=2; i<n; i++) {
            if (n%i == 0) res += i*i;
        }
        printf("case #%d:\n%d\n",t,res);
    }
    return 0;
}
