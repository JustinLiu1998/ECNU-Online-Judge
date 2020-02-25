//
//  main.c
//  1015表达式（AC）
//
//  Created by 刘靖迪 on 2017/10/29.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define MaxSize 1024

int isp(char c){                                //isp求出栈中字符c的优先级别
    switch (c) {
        case '#':
            return 0;
            break;
        case '(':
            return 1;
            break;
        case '*':
            return 5;
            break;
        case '/':
            return 5;
            break;
        case '+':
            return 3;
            break;
        case '-':
            return 3;
            break;
        case ')':
            return 6;
            break;
            
        default:
            break;
    }
    return 0;
}

int icp(char c){                                    //icp求出扫描到的字符的优先级别
    switch (c) {
        case '#':
            return 0;
            break;
        case '(':
            return 6;
            break;
        case '*':
            return 4;
            break;
        case '/':
            return 4;
            break;
        case '+':
            return 2;
            break;
        case '-':
            return 2;
            break;
        case ')':
            return 1;
            break;
            
        default:
            break;
    }
    return 0;
}

void Infix_to_Postfix(char in[],int post[],int *n){                     //中缀转后缀，后缀数组设成int数组
    char stack[MaxSize];
    int top = -1;
    char ch, ch1, op;
    int i = 0,j = 0;
    stack[++top] = '#';                                                   //stack[0]赋值为‘#’
    ch = in[i++];                                                         //ch存扫描到的字符
    while(top!=-1 && ch!=0){
        if(ch >= '0' && ch <= '9'){                                     //如果是一传数字字符，则转成int型
            int c = 0;
            while (ch >= '0' && ch <= '9'){
                c = c * 10 + (ch - '0');
                ch = in[i++];
            }
            post[j++] = c;
        }
        else {
            ch1 = stack[top];
            if (isp(ch1) < icp(ch)){                                        //比较优先级
                stack[++top] = ch;
                ch = in[i++];
            }
            else if(isp(ch1) > icp(ch)){
                op = stack[top--];                                          //取出栈中字符
                if (op == '+') post[j++] = 101;                             //将加减乘除别分用101，102，103，104比表示，并存在后缀表达式的数组里
                else if (op == '-') post[j++] = 102;
                else if (op == '*') post[j++] = 103;
                else post[j++] = 104;
            }
            else {
                op = stack[top--];                                          //遇到'('的处理
                if (op == '(') ch = in[i++];
            }
        }
    }
    *n = j;                                                                 //n记录post中的元素个数，并通过指针传值修改
}


int main(int argc, const char * argv[]) {
    char s[100];
    int t[100];                                             //因为整数的范围是-100到100，故加减乘除可用101，102来表示
    int n;
    scanf("%s",s);
    int len = (int)strlen(s);
    s[len+1] = s[len];                                      //在最后加一个‘#’
    s[len] = '#';
    len++;
    int i;
    int j;
    char str[110];
    for (i = 0, j = 0; i < len; i++){                        //全部存入str中
        if (s[i] == '-') {                                   //对（-3）之类的情况的处理
            if (i > 0 && s[i-1] == '('){
                str[j++] = '0';
            }
        }
        str[j++] = s[i];
    }
    Infix_to_Postfix(str, t, &n);                           //转后缀表达式
    int stack_1[100];
    int top_1 = 0;
    i = n;
    while(i--) {                                            //接下来就是用栈计算
        stack_1[top_1++] = t[i];
    }
    int temp_1, temp_2;
    int stack_2[100];
    int top_2 = 0;
    i = top_1 - 1;
    while ( i >= 0){
        if (stack_1[i] <= 100){
            stack_2[top_2++] = stack_1[i];
        }
        else{
            if (top_2 >= 2){
                temp_1 = stack_2[top_2-2];
                temp_2 = stack_2[top_2-1];
                if ( stack_1[i] == 101){
                    temp_1 += temp_2;
                }
                else if (stack_1[i] == 102){
                    temp_1 -= temp_2;
                }
                else if (stack_1[i] == 103){
                    temp_1 *= temp_2;
                }
                else {
                    temp_1 /= temp_2;
                }
                stack_2[top_2-2] = temp_1;
                top_2--;
            }
            else{
                temp_1 = stack_2[top_2-1];
                if (stack_1[i] == 102){
                    temp_1 = -temp_1;
                }
                stack_2[top_2-1] = temp_1;
            }
        }
        i--;
    }
    printf("%d\n", stack_2[0]);
    return 0;
    
}
