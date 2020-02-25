//
//  main.c
//  1027二叉树的深度
//
//  Created by 刘靖迪 on 2017/11/1.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <mm_malloc.h>
#define  N 10010
typedef struct node {
    int de;                                     //de存该结点的深度
    struct node *lchild, *rchild;
} NODE;
NODE *tree[N];

int max (int a, int b) {
    return a < b ? b : a;
}

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {                          //初始化
        tree[i] = (NODE*)malloc(sizeof(NODE));
        tree[i]->lchild = NULL;
        tree[i]->rchild = NULL;
    }
    tree[1]->de = 1;                                //根结点深度为1
    int ans = 1;
    for (int i=1; i<=n; i++) {                      //建树
        int lc, rc;
        scanf("%d%d", &lc, &rc);
        if (lc != 0) {                                  //如果左孩子不空，那么将tree[i]和tree[lc]连接
            tree[i]->lchild = tree[lc];
            tree[lc]->de = tree[i]->de + 1;             //存深度
            ans = max(ans, tree[lc]->de);               //不断更新深度
        }
        if (rc != 0) {                                  //同上
            tree[i]->rchild = tree[rc];
            tree[rc]->de = tree[i]->de + 1;
            ans = max(ans, tree[rc]->de);
        }
    }
    printf("%d\n", ans);                                //最后打印深度即可
    return 0;
}
