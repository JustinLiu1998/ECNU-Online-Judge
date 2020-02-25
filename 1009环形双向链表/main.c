//
//  main.c
//  1009环形双向链表
//
//  Created by 刘靖迪 on 2017/10/29.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <mm_malloc.h>
typedef struct node {
    int data;
    struct node *llink, *rlink;
} NODE;
//NODE *head;

int insert_d_l (NODE *head, int x, int y) {                 //插入函数
    NODE *p, *q;
    p = head->rlink;
    while (p != head && p->data != x) {
        p = p->rlink;
    }
    if (p == head) return 1;                            //找不到插入位置，返回1
    q = (NODE*)malloc(sizeof(NODE));
    q->data = y;
    q->rlink = p->rlink;                                //注意更改指针
    p->rlink = q;
    p->rlink->llink = q;
    q->llink = p;
    return 0;
}

void creat_d_l (NODE*head, int a[], int n) {                   //生成带表头的环形双向链表的的函数
    NODE *p, *q;                                            //插入a[0]，因为a[0]前没有值，故特殊处理
    p = head;
    q = (NODE*)malloc(sizeof(NODE));
    q->data = a[0];
    q->rlink = p->rlink;
    p->rlink = q;
    p->rlink->llink = q;
    q->llink = p;
    for (int i=0; i<n; i++) {                               //其他的用插入函数循环就行
        insert_d_l(head, a[i-1], a[i]);
    }
}

int delete_d_l (NODE *head, int x) {                        //删除函数
    NODE *p;
    p = head->rlink;
    while (p != head && p->data != x) {
        p = p->rlink;
    }
    if (p == head) return 1;                                //找不到要删除的元素，返回1
    p->rlink->llink = p->llink;                             //注意更改指针
    p->llink->rlink = p->rlink;
    free(p);
    return 0;
}

int main(int argc, const char * argv[]) {
    int n;
    while (scanf("%d", &n) == 1) {
        NODE *head;
        head = (NODE*)malloc(sizeof(NODE));
        head->rlink = head;
        head->llink = head;
        int a[n];
        for (int i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }
        creat_d_l(head, a, n);
        int x;
        scanf("%d", &x);
        if (x == 0 || delete_d_l(head, a[x-1]))
            printf("-1\n");
        else {
            NODE *p;
            p = head->rlink;
            while (p != head && n != 2) {                       //这些是后面要打印空格的，n用来计数
                printf("%d ", p->data);
                p = p->rlink;
                n--;
            }
            printf("%d\n", p->data);                            //最后一个是打印'\n'的
        }
    }
    return 0;
}
