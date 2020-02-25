//
//  main.c
//  1029unknown二叉树
//
//  Created by 刘靖迪 on 2017/11/1.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <mm_malloc.h>
#define  N 1030
typedef struct node {                //lev存结点的层次，tag用来标记这个结点是否左右孩子全空或者全不空，tag=1表示左右孩子全空或者全不空
    int lev, tag;
    struct node *lchild, *rchild;
} NODE;
NODE *tree[N];
int stack[N], top=0;
void pre_order (NODE *root) {         //前序遍历
    if (root != NULL) {
        stack[top++] = root->tag;     //先把根结点的tag入栈，再对左孩子和右孩子进行遍历，遍历完后把栈扫一遍就知道是不是完全二叉树
        pre_order(root->lchild);
        pre_order(root->rchild);
    }
}

int main(int argc, const char * argv[]) {       //加了两个生成的是不是二叉树的特判就过了……
    for (int i=0; i<N; i++) {                   //初始化
        tree[i] = (NODE*)malloc(sizeof(NODE));
        tree[i]->tag = 1;
        tree[i]->lev = N;
        tree[i]->lchild = NULL;
        tree[i]->rchild = NULL;
    }
    int n, t;
    int flag = 1;
    scanf("%d%d", &n, &t);
    tree[t]->lev = 0;                      //根结点的层次为0
    for (int i=1; i<n; i++) {
        int a, b;
        scanf("%d%d", &a, &b);
        if (tree[a]->lev < tree[b]->lev) {       //对两个结点的层次进行比较，层次小的是双亲结点
            if (tree[a]->lchild == NULL) {       //先放左孩子，再放右孩子
                tree[a]->lchild = tree[b];
                tree[a]->tag = 0;                //只有1ge孩子，tag标记为0
            }
            else if (tree[a]->rchild == NULL){
                tree[a]->rchild = tree[b];
                tree[a]->tag = 1;
            }
            else { flag = 0; break; }            //二叉树只有两个孩子，若有第三个孩子，flag=0
            tree[b]->lev = tree[a]->lev+1;
        }
        else if (tree[a]->lev > tree[b]->lev){
            if (tree[b]->lchild == NULL) {
                tree[b]->lchild = tree[a];
                tree[b]->tag = 0;
            }
            else if (tree[b]->rchild == NULL) {
                tree[b]->rchild = tree[a];
                tree[b]->tag = 1;
            }
            else { flag = 0; break; }
            tree[a]->lev = tree[b]->lev+1;
        }
        else { flag = 0; break; }
    }
    if (flag == 0) puts("no");               //如果不是二叉树，直接输出no
    else {                                   //否则进行前序遍历，遍历后对所有tag标记进行检查
        pre_order(tree[t]);
        for (int i=0; i<top; i++) {
            if (stack[i] == 0) {
                flag = 0; break;
            }
        }
        if (flag) puts("yes");
        else puts("no");
        return 0;
    }
}
