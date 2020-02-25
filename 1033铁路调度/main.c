//
//  main.c
//  1033铁路调度
//
//  Created by 刘靖迪 on 2017/10/29.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>

#define MAXN 11
char a[MAXN], b[MAXN];                                      //用两个栈来实现， 栈a是中间过渡的
                                    //通过模拟倒推回去能不能排成1，2，3……来判断出栈序列是不是合法的
int top = 0, Top = 0;

int push (char x) {                                         //push 和 pop对栈a操作
    if (top >= MAXN)
        return 1;
    a[top++] = x;
    return 0;
}

int pop (char *p_y) {
    if (top == 0)
        return 1;
    *p_y = a[--top];
    return 0;
}

int push_ (char x) {                                         //push_ 和 pop_对栈b操作
    if (Top >= MAXN)
        return 1;
    b[Top++] = x;
    return 0;
}

int pop_ (char *p_y) {
    if (Top == 0)
        return 1;
    *p_y = b[--Top];
    return 0;
}

int main(int argc, const char * argv[]) {
    int k;
    scanf("%d", &k);
    for (int i=0; i<k; i++) {
        top = 0; Top = 0;
        int n;
        char s[12];
        scanf("%d%s", &n, s);
        for (int j=0; j<n; j++)                             //先全部放入栈b
            push_(s[j]);
        char t = n + '0', p;                                //t表示此时应该放入栈a的火车编号
        while (1) {
            if(b[Top-1] > t || a[top-1] > t || b[Top-1] == a[top-1])
                break;
                //上面这个if，是为了过老师给的第二组数据特意加的，老师的数据的情况我之前并没有考虑到，
                //比如火车的编号大于火车的数量，或是有两个相同的编号。虽然我原来的代码不影响在OJ上AC
            if (b[Top - 1] == t) {                          //如果b的栈顶和t一样，就pop_，表示它是合法的，并且
                pop_(&p);                                   //本题不需要储存它，直接pop_就行了
                t--;
            }
            else if (top && a[top-1] == t ) {               //如果表示火车调度站的栈a的栈顶等于t，就pop
                pop(&p);
                t--;
            }
            else {                                           //否则放入栈a
                pop_(&p);
                push(p);
            }
            if (t == '0') {                                 //如果t == ‘0’，表示可模拟成功
                break;
            }
            if (top > 1 && a[top-1] < a[top-2]) {             //如果栈a的顶比它下一个元素小
                break;                                        //表示模拟失败，break
            }
        }
        if (t == '0')                                       //只有t == ‘0’，才表示模拟成功
            printf("yes\n");
        else printf("no\n");
    }
    return 0;
}

