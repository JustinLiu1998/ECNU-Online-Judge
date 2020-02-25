//
//  main.c
//  1024(stack)
//
//  Created by 刘靖迪 on 2017/10/30.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
typedef struct node {
    char data;
    int lev;
} NODE;
#define N 30
int main(int argc, const char * argv[]) {
    int n;
    scanf("%d", &n);
    getchar();
    NODE tree[N];
    for (int i=0; i<n; i++) {
        scanf("(%1d,%c)", &tree[i].lev, &tree[i].data);
        getchar();
    }
    NODE stack[N];
    stack[0] = tree[0];
    int top = 1;
    int t = 1;
    while (t < n) {
        NODE tem = tree[t++];
        while (top > 0 && stack[top - 1].lev >= tem.lev) {
            printf("%c", stack[--top].data);
        }
        if (t == n) printf("%c", tem.data);
        else stack[top++] = tem;
    }
    printf("%c\n", stack[0].data);
    return 0;
}
