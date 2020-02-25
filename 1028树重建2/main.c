//
//  main.c
//  1028树重建2
//
//  Created by 刘靖迪 on 2018/1/15.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <mm_malloc.h>
typedef struct node{
    char data;
    struct node *llink, *rlink;
} NODE;
char s1[30], s2[30];
NODE *build_tree(int l, int r, int pos, int Pos) {          //[l，r)是中序的边界，[pos，Pos)是前序的边界
    NODE *t;
    t = (NODE*)malloc(sizeof(NODE));                    //初始化
    t->llink = NULL;
    t->rlink = NULL;
    int i;
    for (i = l; s2[i] != s1[pos] && i < r; i++);            //用s1[pos]分割中序
    int tem = pos+(i-l);                                    //用pos+(i-l)分割前序
    t->data = s2[i];                                        //对结点t赋值
    if (l < i)                                              //递归建子树
        t->llink = build_tree(l, i, pos+1, tem);
    if (i+1 < r)
        t->rlink = build_tree(i+1, r, tem+1, Pos);
    return t;
}
void pos_order(NODE *t) {                       //后序遍历
    if (t != NULL) {
        pos_order(t->llink);
        pos_order(t->rlink);
        printf("%c", t->data);
    }
}
int main(int argc, const char * argv[]) {
    scanf("%s%s", s1, s2);
    int len1 = (int)strlen(s1), len2 = (int)strlen(s2);
    NODE *t = build_tree(0, len2, 0, len1);
    pos_order(t);
    puts("");
    return 0;
}
