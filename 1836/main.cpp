//
//  main.cpp
//  1836
//
//  Created by 刘靖迪 on 2018/1/3.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <stack>
using namespace std;
#define maxsize 100000
struct node {
    int tag;
    union {
        struct node *dlink;
        char op;
        double val;
    }dd;
    struct node *link;
};
class TMyExp{
private:
    node *head;
public:
    node *HEAD;
    TMyExp();
    TMyExp(char *s);
    void pre(char *s);
    node *build(char *s);
    void add_val(node *&p, double val);
    void add_op(node *&p, char ch);
    void add_dlink(node *&p, char *s2);
    void cal(node *&p, node *&q, char ch);
    void travesal();
    void travesal(node *t);
    double solve(node *t);
    void print();
    void print(node *t);
    void print_only_ans();
};
void TMyExp::pre(char *s) {
    for (int i=0; i<strlen(s); i++) {
        if (s[i] == '-')
            if ((i > 0 && s[i-1] == '(') || i == 0)
                s[i] = '~';
        
    }
}
void TMyExp::add_val(node *&p, double val) {
    node *q;
    q = new node;
    q->dd.val = val;
    q->tag = 2;
    p->link = q;
    p = q;
}
void TMyExp::add_op(node *&p, char op) {
    node *q;
    q = new node;
    q->dd.op = op;
    q->tag = 1;
    p->link = q;
    p = q;
}
void TMyExp::add_dlink(node *&p, char *s2) {
    node *q;
    q = new node;
    q->dd.dlink = build(s2);
    q->tag = 0;
    p->link = q;
    p = q;
}
void TMyExp::cal(node *&p, node *&q, char ch) {
    node *r = q->link;
    switch (ch) {
        case '+':
            p->dd.val = p->dd.val + r->dd.val;
            break;
        case '-':
            p->dd.val = p->dd.val - r->dd.val;
            break;
        case '*':
            p->dd.val = p->dd.val * r->dd.val;
            break;
        case '/':
            p->dd.val = p->dd.val / r->dd.val;
            break;
    }
    p->link = r->link;
    delete r;
    delete q;
    q = p->link;
}
TMyExp::TMyExp(char s[]) {
    if (strlen(s) == 0) {
        printf("错误，字符串长度为0\n");
        head = NULL;
    }
    else {
        pre(s);
        head = build(s);
        HEAD = head;
    }
}
node *TMyExp::build(char s[]) {
    node *t, *p;
    t = new node;
    p = t;
    int len = (int)strlen(s);
    int i = 0;
    char ch = s[i];
    while (i<len) {
        if (isdigit(ch) || ch == '~') {
            int flag = 0;
            if (ch == '~') {
                ch = s[++i];
                flag = 1;
            }
            int tem = 0;
            while (isdigit(ch)) {
                tem = tem * 10 + (ch - '0');
                ch = s[++i];
            }
            add_val(p, (flag ? -tem : tem));
        }
        else if (ch == '(') {
            int j = i;
            ch = s[j];
            stack<char> sk;
            sk.push('(');
            while (sk.size()) {
                ch = s[++j];
                if (ch == '(')
                    sk.push('(');
                else if (ch == ')')
                    sk.pop();
            }
            char s2[maxsize];
            int kk = 0;
            for (int k = i+1; k < j; k++) {
                s2[kk++] = s[k];
            }
            s2[kk] = '\0';
            add_dlink(p, s2);
            i = j;
            ch = s[++i];
        }
        else {
            add_op(p, ch);
            ch = s[++i];
        }
    }
    p->link = NULL;
    return t;
}
double TMyExp::solve(node *t) {
    if (t == NULL) {
        printf("错误：传入的指针为空\n");
        return 0;
    }
    t = t->link;
    node *p = t, *q;
    while (p != NULL) {
        if (p->tag == 0) {
            double tem = TMyExp::solve(p->dd.dlink);
            p->dd.val = tem;
            p->tag = 2;
        }
        p = p->link;
    }
    p = t;
    q = p->link;
    while (p != NULL && q != NULL) {
        if (q->tag == 1 && (q->dd.op == '*' || q->dd.op == '/'))
            cal(p, q, q->dd.op);
        else {
            p = q;
            q = p->link;
        }
    }
    while (t->link != NULL) {
        cal(t, t->link, t->link->dd.op);
    }
    return t->dd.val;
}
void TMyExp::print(){
    travesal();
    printf(" = ");
    printf("%lf\n", solve(head));
}
void TMyExp::print(node *t) {
    travesal(t);
    printf("=");
    printf("%lf\n", solve(t));
}
void TMyExp::travesal() {
    travesal(head);
}
void TMyExp::travesal(node *t) {
    node *p = t->link;
    if (p == NULL) {
        printf("错误，传入指针为空\n");
        return ;
    }
    while (p != NULL) {
        if (p->tag == 0) {
            printf("(");
            travesal(p->dd.dlink);
            printf(")");
        }
        else if (p->tag == 1) {
            printf("%c", p->dd.op);
        }
        else if (p->tag == 2) {
            printf("%.0lf", p->dd.val);
        }
        p = p->link;
    }
}
void TMyExp::print_only_ans() {
    printf("%d\n", (int)solve(head));
}
int main(int argc, const char * argv[]) {
    char s[maxsize];
    scanf("%s", s);
    TMyExp a(s);
    a.print_only_ans();
    return 0;
}

