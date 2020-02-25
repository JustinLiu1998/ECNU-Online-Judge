//
//  main.cpp
//  3348
//
//  Created by 刘靖迪 on 2017/11/1.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <mm_malloc.h>
#include <vector>
#include <stack>
using namespace std;
#define N 100
typedef struct node{
    int data;
    int parent;
} NODE;
NODE tree[N];

typedef struct l_node{
    int data;
    vector<struct l_node*> child;
} L_NODE;

vector<L_NODE*> addr;
stack<int> sk;

L_NODE *creta_tree (NODE tree[], int n) {
    int i;
    L_NODE *root, *p, *q, *r;
    if (n < 1) return NULL;
    root = (L_NODE*)malloc(sizeof(L_NODE));
    root->data = tree[0].data;
//    r = (L_NODE*)malloc(sizeof(L_NODE));
    root->child.push_back(r);
    printf("%lu\n", root->child.size());
    addr.push_back(root);
//    for (i=1; i<n; i++) {
//        q = (L_NODE*)malloc(sizeof(L_NODE));
//        addr.push_back(q);
//        q->data = tree[i].data;
//        p = addr[tree[i].parent];
//        r = (L_NODE*)malloc(sizeof(L_NODE));
//        p->child.push_back(r);
//        p->child[p->child.size() - 1] = q;
//    }
    return root;
}


void pre_order(L_NODE *t) {
    if (t != NULL) {
        sk.push(t->data);
        for (int i=0; i < t->child.size(); i++) {
            pre_order(t->child[i]);
        }
        free(t);
    }
}

int main(int argc, const char * argv[]) {
    int n ;
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%d", &tree[i].parent);
        tree[i].data = i;
    }
    L_NODE *root = creta_tree(tree, n);
//
//    pre_order(root);
//
//    while (sk.size()) {
//        printf("%d ", sk.top());
//        sk.pop();
//    }
//    printf("\n");
    return 0;
}

