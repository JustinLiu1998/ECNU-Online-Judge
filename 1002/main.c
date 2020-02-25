//
//  main.c
//  1002
//
//  Created by 刘靖迪 on 2017/9/13.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>

#define MAXN 1024
char a[MAXN];
int top = 0;

int push (char x) {
    if (top >= MAXN)
        return 1;
    a[top++] = x;
    return 0;
}

int pop(char *p_y) {
    if (top == 0)
        return 1;
    *p_y = a[--top];
    printf("%c", *p_y);
    return 0;
}
int main(int argc, const char * argv[]) {
    int n;
    char c;
    while (scanf("%d", &n) != EOF) {
        getchar();
        for (int i=0; i<n; i++) {
            scanf("%c", &c);
            getchar();
            push(c);
        }
        for (int i=0; i<n; i++) {
            pop(&c);
            if (i<n-1)
                printf(" ");
            else
                printf("\n");
        }
    }
    return 0;
}
