//
//  main.c
//  3283
//
//  Created by 刘靖迪 on 2017/8/17.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int N, M, a, b, c, d, ans;
    scanf("%d%d", &N, &M);
    if (N%2) {
        b=N/2;
        a=b+1;
    }
    else {
        a=b=N/2;
    }
    d=M/2;
    if (M%2) {
        c=d+1;
    }
    else
        c=d;
    ans=a*c+b*d;
    printf("%d\n",ans);
}
