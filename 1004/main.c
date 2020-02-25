//
//  main.c
//  1004
//
//  Created by 刘靖迪 on 2017/9/14.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <mm_malloc.h>
typedef struct node{
    int data;
    struct node *llink, *rlink;
}NODE;
NODE *head;                                             //只是指针

int insert_d_l (NODE *head, int x, int y) {
    NODE *p, *q;
    p = head ->rlink;
    while (p != head && p ->data != x)
        p = p ->rlink;
    if (p == head)
        return 1;
    q = (NODE *)malloc(sizeof(NODE));
    q ->data = y;
    q ->rlink = p ->rlink;
    p ->rlink = q;
    q ->rlink ->llink = q;
    q ->llink = p;
    return 0;
}

int delete_d_l (NODE *head, int x) {
    NODE *p;
    p = head ->rlink;
    while (p != head && p ->data != x)
        p = p ->rlink;
    if (p == head)
        return 1;
    p ->llink ->rlink = p ->rlink;
    p ->rlink ->llink = p ->llink;
    free(p);
    return 0;
}

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        int a[n];
        scanf("%d", &a[0]);
        
        NODE *q;
        head = (NODE *)malloc(sizeof(NODE));
        q = head;
        q ->data = a[0];
        q ->rlink = q;
        q ->llink = q;
        
        for (int i=1; i<n; i++) {
            scanf("%d", &a[i]);
            insert_d_l(head, a[i-1], a[i]);
        }
        int x;
        scanf("%d", &x);
        if (x > 0 && x <= n) {
            delete_d_l(head, a[x-1]);
            q = head;
            printf("%d", q ->data);
            for (int i=1; i<n-1; i++) {
                printf(" %d", q ->rlink ->data);
                q = q ->rlink;
            }
            printf("\n");
        }
        else printf("-1\n");
    }
    return 0;
}
