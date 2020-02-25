//
//  main.c
//  3278
//
//  Created by 刘靖迪 on 2017/7/18.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>

int main () {
    int tab[200001][4];
    int N, i, ans = 0;
    scanf("%d",&N);
    for (i=0; i<N-1; i++) {
        scanf("%d%d%d",&tab[i][0],&tab[i][1],&tab[i][2]);
        ans+=tab[i][2];
    }
    ans*=2;
    printf("%d\n",ans);
    return 0;
}
