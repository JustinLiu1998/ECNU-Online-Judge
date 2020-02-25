//
//  main.c
//  1015表达式
//
//  Created by 刘靖迪 on 2017/9/27.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
#define MAXN 100
char mid_e[MAXN], pos_e[MAXN];

int icp(char c) {
    switch (c) {
        case '*':
        case '/':
            return 2;
        case '+':
        case '-':
            return 1;
        default:
            break;
    }
    return -1;
}

int isp (char c) {
    switch (c) {
        case '*':
        case '/':
            return 2;
        case '+':
        case '-':
            return 1;
        case '(':
            return 0;
        case '$':
            return -1;
    }
    return -1;
}

int mid_to_pos (char mid_e[], char pos_e[]) {
    char stack[MAXN], c;
    int top=0, i=0, j=0;
    stack[0]='$';
    c=mid_e[0];
    while (c != '\0') {
        if (islower(c))
            pos_e[j++] = c;
        else
            switch (c) {
                case '+':
                case '-':
                case '*':
                case '/':
                    while (icp(c) <= isp(stack[top--]))
                        pos_e[j++] = stack[top--];
                    stack[++top] = c;
                    break;
                case '(':
                    stack[++top] = c;
                    break;
                case ')':
                    while (stack[top] != '(')
                        pos_e[j++] = stack[top--];
                    top--;
                    break;
                default:
                    return 1;
            }
        c = mid_e[++i];
    }
    while (top > 0)
        pos_e[j++] = stack[top--];
    pos_e[j] = '\0';
    return 0;
}

int evaluate (char pos_e[], int *p_y) {
    int stack[MAXN];
    int top, i, j, k, x, y, z;
    char c;
    top = -1;
    i=0;
    c = pos_e[0];
    while (c != '\0') {
        if (c >= '0' && c <= '9')
            stack[++top] = c;
        else
            switch (c) {
                case '+':
                    x = stack[top--];
                    stack[top] += x;
                    break;
                case '-':
                    x = stack[top--];
                    stack[top] -= x;
                    break;
                case '*':
                    x = stack[top--];
                    stack[top] *= x;
                    break;
                case '/':
                    x = stack[top--];
                    stack[top] /= x;
                    break;
                default: return 1;
            }
        c = pos_e[++i];
    }
    if (top > 0)
        return 1;
    *p_y = stack[top];
    return 0;
}

int main(int argc, const char * argv[]) {
    scanf("%s", mid_e);
    int ans=0;
    mid_to_pos(mid_e, pos_e);
    evaluate(pos_e, &ans);
    printf("%d\n", ans);
    return 0;
}
