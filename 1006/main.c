//
//  main.c
//  1006
//
//  Created by 刘靖迪 on 2017/9/13.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <mm_malloc.h>

typedef struct node {char data; struct node*link;} NODE;
NODE *top;

void push_l (char x) {
    NODE *p;
    p = (NODE*)malloc(sizeof(NODE));
    p ->data = x;
    p ->link = top;
    top = p;
}

int pop_l (char *p_y) {
    NODE *p;
    if (top == NULL)
        return 1;
    *p_y = top->data;
    printf("%c", *p_y);
    p = top;
    top = top->link;
    return 0;
}
int main(int argc, const char * argv[]) {
    int n;
    while (scanf("%d", &n) != EOF) {
        getchar();                                  //接下来是用scanf读取字符，因此此处要用getchar（）处理一下缓存区里的字符
        char a;
        for (int i=0; i<n; i++) {
            scanf("%c", &a);
            getchar();
            push_l(a);                              //入栈
        }
        char c;
        for (int i=0; i<n; i++) {
            pop_l(&c);                              //出栈
            printf("%c", i < n-1 ? ' ' : '\n');
        }
    }
    return 0;
}
