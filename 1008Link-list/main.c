//
//  main.c
//  1008Link-list
//
//  Created by 刘靖迪 on 2017/9/20.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <mm_malloc.h>

typedef struct node{int data; struct node *link;} NODE;
NODE *p_head;

void insert(int a, int b) {
    NODE *p, *q;
    q = (NODE *)malloc(sizeof(NODE));
    q->data = b;
    q->link = NULL;                                     //要记得初始化q->link
    if (p_head == NULL)                                 //如果头结点等于NULL
        p_head = q;
    else {                                              //其他情况
        p = p_head;
        while (p ->data != a && p ->link != NULL)       //实现“如果没找到，就插在末尾”
            p = p ->link;
        q ->link = p ->link;
        p ->link = q;
    }
}

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        int t;
        scanf("%d", &t);
        insert(-1, t);
    }
    int q;
    scanf("%d", &q);
    for (int i=0; i<q; i++) {
        int t, y;
        scanf("%d%d", &t, &y);
        insert(t, y);
        printf("%d", p_head->data);                    //以下是按照要求输出每一步的结果
        NODE *p;
        p = p_head;
        while (p ->link != NULL) {
            p = p ->link;
            printf(" %d", p ->data);
        }
        printf("\n");
    }
    return 0;
}
