//
//  main.c
//  1025树的顺序存储结构
//
//  Created by 刘靖迪 on 2017/10/30.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <mm_malloc.h>
#define N 100002
typedef struct stack{                           //用链栈的结构来存子树
    int child;
    struct stack *link;
} STACK;
typedef struct node {                           //结点的结构
    int data;
    STACK *last;
} NODE;

NODE *tree[N];

void creat_tree() {
    int n ;
    scanf("%d", &n);
    int parent[n];                              //用顺序存储结构存树
    for (int i=0; i<n; i++) {                   //初始化
        tree[i] = (NODE*)malloc(sizeof(NODE));
        tree[i]->last = NULL;
    }
    for (int i=0; i<n; i++) {                   //读入数据
        scanf("%d", &parent[i]);
        tree[i]->data = i;
    }
    NODE *p;
    STACK *q, *r;
    for (int i=1; i<n; i++) {                   //循环建树
        p = tree[parent[i]];                    //通过顺序存储结构找到双亲树
        r = (STACK*)malloc(sizeof(STACK));
        r->child = i;                           //增长子树的链栈来存储孩子
        q = p->last;
        r->link = q;
        p->last = r;
    }
}

void pos_order(NODE *t) {                   //递归实现后序遍历
    if (t != NULL) {
        STACK *p = t->last;                 //从链栈的尾开始
        while (p != NULL) {
            pos_order(tree[p->child]);
            STACK *q = p->link;             //不断向头移动
            free(p);
            p = q;
        }
        printf("%d ", t->data);                 //打印
        free(t);
    }
}

int main(int argc, const char * argv[]) {
    tree[0] = NULL;
    creat_tree();                                   //调用函数生成树
    pos_order(tree[0]);                             //后序遍历
    puts("");
    return 0;
}
