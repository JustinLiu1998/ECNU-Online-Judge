//
//  main.c
//  1028树重建
//
//  Created by 刘靖迪 on 2017/11/5.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <mm_malloc.h>
#include <string.h>
#define N 30
typedef struct node {
    char data;
    struct node *lchild, *rchild;
} NODE;
NODE *root;
char s1[N], s2[N];
int pos;

void RBTree(NODE **root, int begin, int end) {         //调用指针的指针
    if(pos >= (int)strlen(s1) || begin > end)
        return ;
    *root = (NODE*)malloc(sizeof(NODE));
    (*root)->data = s1[pos];
    (*root)->lchild = NULL;
    (*root)->rchild = NULL;
    int i;
    char c = s1[pos++];
    for (i=begin; i<end; i++) {
        if (s2[i] == c)
            break;
    }
    int mid = i;
    RBTree(&((*root)->lchild), begin, mid-1);
    RBTree(&((*root)->rchild), mid+1, end);
}

void pos_order (NODE *root) {
    if (root != NULL) {
        pos_order(root->lchild);
        pos_order(root->rchild);
        printf("%c", root->data);
    }
}

int main(int argc, const char * argv[]) {
    scanf("%s%s", s1, s2);
    pos = 0;
    int len = (int)strlen(s1);
    RBTree(&root, 0, len);
    pos_order(root);
    puts("");
    return 0;
}
