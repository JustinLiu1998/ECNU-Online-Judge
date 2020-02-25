//
//  main.c
//  1005循环打印
//
//  Created by 刘靖迪 on 2017/9/20.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct node{int data; struct node *link;}NODE;

void insert(NODE *head, int i){
    NODE *p;
    p = head;
    while(p->link != head)                      //移到队列的末尾
        p = p->link;
    NODE *q;
    q = (NODE *)malloc(sizeof(NODE));
    q->data = i;
    q->link = p->link;                          //更改link的指向，形成新的环形队列
    p->link = q;
}

void solve(NODE *head, int n, int i, int k){
    NODE *s;
    NODE *p;
    s = head;
    p = s;
    while(s->data != i)                             //先将s移到数i的位置
        s = s->link;
    for (int b=0; b<n-1; b++){                      //打印前n-1次时，末尾要加空格
        for (int j=1; j<k; j++){                    //移动k-1次，到达正确的位置，注意是k-1次而不是k次
            p = s;                                  //这样p总是s的前一个结点（队列中剩余结点个数大于1时）
            s = s->link;
        }
        printf("%d ",s->data);                      //打印
        p->link = s->link;                          //p连到s后一个结点处
        free(s);                                    //释放内存空间
        s = p->link;                                //s指向p的后一个结点
    }
    printf("%d\n",s->data);                         //最后一次打印
}

int main(int argc, const char * argv[]) {
    NODE *list;
    list = (NODE *)malloc(sizeof(NODE));                    //搭建环形队列
    list->data = 1;
    list->link = list;                                      //构成环形
    int n, i, k;
    scanf("%d%d%d", &n, &i, &k);
    for(int j=1; j<n; j++)                                  //进行环形队列的插入操作
        insert(list, j+1);
    solve(list, n, i, k);
    return 0;
}
