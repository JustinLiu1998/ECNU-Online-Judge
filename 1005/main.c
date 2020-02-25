//
//  main.c
//  1005
//
//  Created by 刘靖迪 on 2017/9/13.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <mm_malloc.h>

typedef struct node {char data; struct node*link;} NODE;
NODE *head, *tail;

void en_queue_l (char x) {
    NODE *p;
    p = (NODE*)malloc(sizeof(NODE));
    p -> data = x;
    p -> link = NULL;
    if (head == NULL)
        head = p;
    else
        tail -> link = p;
    tail = p;
}

int de_queue_l (char *p_y) {
    NODE *p;
    if (head == NULL)
        return 1;
    *p_y = head -> data;
    p = head;
    head = head -> link;
    printf("%c", *p_y);
    free(p);
    return 0;
}

int main(int argc, const char * argv[]) {
    int n;
    while (scanf("%d", &n) != EOF) {
        getchar();
        char a;
        for (int i=0; i<n; i++) {
            scanf("%c", &a);
            getchar();
            en_queue_l(a);
        }
        char c;
        for (int i=0; i<n; i++) {
            de_queue_l(&c);
            if (i < n-1)
                printf(" ");
            else
                printf("\n");
        }
        
    }
    return 0;
}
