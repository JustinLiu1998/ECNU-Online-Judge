//
//  main.c
//  1014一元多项式乘法（2）
//
//  Created by 刘靖迪 on 2017/10/11.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

typedef struct node{                                    //定义结构体类型
    long long int coef;
    long long int exp;
    struct node *link;
}NODE;


void insert (NODE *head, int coef, int exp) {           //插入函数
    NODE *p;
    p = (NODE*)malloc(sizeof(NODE));                    //生成结点
    p->coef = coef;                                     //赋值
    p->exp = exp;
    NODE *pa;
    pa = head;
    while (pa->link != NULL)
        pa = pa->link;
    pa->link = p;
    p->link = NULL;                                     //赋值为NULL，不赋值的话，代码会出问题
}


void input_node(NODE *q,char s1[]){                     //这道题最复杂的地方
    unsigned long len;
    int coef, exp;
    int i, j, k;
    int flag;
    int t;
    len = strlen(s1);
    for (i=0; i<len; i++) {                             //对char数组从头扫到尾
        if(s1[i] == 'x' && s1[i+1] == '^') {            //以x为中心的判断方式
            coef = 0;
            exp = 0;
            for (j = i+2; j<len; j++) {                 //把后面的一长串数字字符变成int的数据
                if (s1[j] >= '0' && s1[j] <= '9') {
                    exp = exp*10 + s1[j] - '0';
                }
                else break;
            }
            k = i-1;
            if (s1[k] == '-') {                         //前面有‘-’的情况
                insert(q, -1, exp);
            }
            else if(k == -1 || s1[k] < '0' || s1[k] > '9') {            //x前无字符或x前不是数字字符
                                                                        //即‘+’的情况
                if (k == 0 && s1[k] == '-') {
                    insert(q, -1, exp);
                }
                else {
                    insert(q, 1, exp);
                }
            }
            else {                                                      //剩下的就是是数字字符的情况
                while (k>=0 && s1[k] >= '0' && s1[k] <= '9')            //向前移动，直到是正负号或首字符
                    k--;
                if (s1[k]=='-')                                         //先判断符号
                    flag = -1;
                else
                    flag = 1;
                for (k++; k<i; k++) {                                   //累加
                    if (s1[k] >= '0' && s1[k] <= '9'){
                        coef = coef * 10 + s1[k] - '0';
                    }
                }
                insert(q, coef*flag, exp);                              //插入
            }
            
        }
        else if (s1[i] == 'x' && s1[i+1] != '^') {                      //用类似的循环处理
            coef = 0;
            exp = 1;                                                    //指数必为1
            k = i-1;                                                    //不用向后计算指数了
            if (s1[k] == '-') {                                         //此处可用和上个循环一样的代码
                insert(q, -1, 1);
            }
            else if (k == -1 || s1[k] < '0' || s1[k] > '9') {
                if (k == 0 && s1[k] == '-') {
                    insert(q, -1, exp);
                }
                else{
                    insert(q, 1, exp);
                }
            }
            else {
                while (k >= 0 && s1[k] >= '0' && s1[k] <= '9')
                    k--;
                if (s1[k] == '-')
                    flag = -1;
                else
                    flag = 1;
                for (k++; k<i; k++) {
                    
                    if (s1[k] >= '0' && s1[k] <= '9') {
                        coef = coef * 10 + s1[k] - '0';
                    }
                }
                insert(q, coef*flag, exp);
            }
        }
        
        else if (s1[i] >= '0' && s1[i] <= '9') {                        //扫到数字
            k = i-1;
            t = i;
            while (s1[t] >= '0' && s1[t] <= '9' && s1[t] != 0)          //向后移动到不是数字字符的地方
                t++;
            if (t == strlen(s1)) {                                      //如果到了末尾
                if (s1[k] == '^')                                       //s1[k]是'^'，是'x^'的情况，判断过了
                    break;
                coef = 0;                                               //没跳出循环的话，指数必为0，需要算系数
                exp = 0;
                if (s1[k] == '-')                                       //判断符号位
                    flag = -1;
                else
                    flag = 1;
                for (k++; k<t; k++) {                                   //计算系数
                    if (s1[k] >= '0' && s1[k] <= '9'){
                        coef = coef * 10 + s1[k] - '0';
                    }
                }
                insert(q, coef * flag, exp);                            //插入
                break;                                                  //处理到了常数项，可以认为处理完毕了
            }
        }
    }
}

void solve (NODE *a,NODE *b,NODE *c) {
    NODE *pa, *pb, *pc, *qc, *q;
    long long int exp;
    pa = a->link;
    while (pa != NULL){
        pb = b->link;
        while (pb != NULL){
            exp = pa->exp + pb->exp;                                //指数相加
            pc = c;
            qc = pc->link;
            while (qc != NULL && qc->exp > exp){                    //qc后移，直到qc->exp <= exp或后面没结点了
                pc = qc;
                qc = qc->link;
            }
            if (qc == NULL || qc->exp < exp){                       //这种情况需要生成新结点并插入
                q = (NODE*)malloc(sizeof(NODE));
                q->coef = pa->coef * pb->coef;
                q->exp = exp;
                pc->link = q;
                q->link = qc;
            }
            else {                                                  //剩下的就是qc->exp = exp的情况
                qc->coef += pa->coef * pb->coef;
                if (qc->coef == 0){                                 //如果qc->exp=0，就删除该结点
                    pc->link = qc->link;
                    free(qc);
                }
            }
            pb = pb->link;                                          //pb后移
        }
        pa = pa->link;                                              //pa后移
        c = c->link;                                                //c后移
    }
}
int main(int argc, const char * argv[]) {                           //使用带表头结点的链表
    char s1[100],s2[100];
    while(scanf("%s %s",s1,s2) == 2){                               //存在两个char数组里
        NODE *ah, *bh;                                              //生成两个头结点，注意link域赋值成NULL
        ah = (NODE*)malloc(sizeof(NODE));
        ah->link = NULL;
        bh = (NODE*)malloc(sizeof(NODE));
        bh->link = NULL;
        input_node(ah, s1);                                         //处理字符串，存储在链表中
        input_node(bh, s2);
        
        NODE *result;                                               //生成一个链表用来存储答案
        result = (NODE*)malloc(sizeof(NODE));
        result->link = NULL;
        
        solve(bh, ah, result);                                      //计算答案，并存储在result中
        result = result->link;                                      //因为有表头结点，故先后移一个结点
        while(result->link != NULL){                                //打印计算答案
            if (result->coef != 0 && result->link->coef != 0)       //需要判断后一个结点的值是不是0，来决定打不打印空格
                printf("%lld ", result->coef);
            else printf("%lld", result->coef);
            result = result->link;
        }
        if (result->coef != 0)
            printf("%lld\n", result->coef);
        else printf("\n");
    }
    return 0;
}
