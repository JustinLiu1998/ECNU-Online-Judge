//
//  main.c
//  1024树的遍历
//
//  Created by 刘靖迪 on 2017/10/30.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <mm_malloc.h>
#define MAXN 30
typedef struct node{                                        //按树的层次建树
    char data;
    int lev;
} NODE;

typedef struct l_node{
    char data;
    int lev;
    struct l_node *child[MAXN];
    struct l_node *parent;
} L_NODE;

NODE tree[MAXN];

L_NODE *root;

L_NODE *creat_tree (NODE tree[], int m, int n) {          //m为一个结点最多有几个子孩子，n为结点个数
    if (n < 1) return NULL;                        //如果n=0，那么根结点就是NULL，直接return NULL；即可
    int i, j;
    L_NODE *root, *p, *q;
    root = (L_NODE*)malloc(sizeof(L_NODE));             //生成根结点
    root->data = tree[0].data;                          //存储data
    root->lev = tree[0].lev;                            //标记层号
    root->parent = NULL;
    for (i=0; i<m; i++) {                       //将子孩子全部初始化为NULL
        root->child[i] = NULL;
    }
    p = root;
    for (i=1; i<n; i++) {                       //依次处理n-1个结点
        q = (L_NODE*)malloc(sizeof(L_NODE));
        q->data = tree[i].data;                 //存储data，并标记层号
        q->lev = tree[i].lev;
        for (j=0; j<m; j++) {                   //将子孩子全部初始化为NULL
            q->child[j] = NULL;
        }
        while (q->lev <= p->lev) {              //向上寻找，直到p的层号比q的小
            p = p->parent;
        }
        q->parent = p;                          //双向链接
        j = -1;
        while(p->child[++j] != NULL) ;
        p->child[j] = q;                                //在子树中，从左到右寻找空位置，然后存在该位置中
        p = q;
    }
    return root;                                    //最后返回根结点
}

void posorder (L_NODE *root, int m) {                  //递归形式的后序遍历函数，m表示一个树最多有几颗子树
    if (root != NULL) {                                //如果根结点是NULL，返回
        for (int i=0; i<m; i++) {                      //否则从左到右依次遍历子树
            posorder(root->child[i], m);
        }
        printf("%c", root->data);                      //最后打印根结点
    }
}

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d", &n);                                            //输入n，表示结点个数
    getchar();
    for (int i=0; i<n; i++) {
        scanf("(%d,%c)", &tree[i].lev, &tree[i].data);          //依次输入二元组
        getchar();
    }
    root = creat_tree(tree, MAXN, n);                          //建树
    posorder(root, MAXN);                                       //后序遍历
    printf("\n");                                               //打印换行符
    return 0;
}
