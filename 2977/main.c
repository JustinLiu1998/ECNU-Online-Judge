//
//  main.c
//  2977
//
//  Created by 刘靖迪 on 2017/6/5.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>             
#include <string.h>
#include <stdlib.h>                                             //结构体
typedef struct {char s[11]; int score;} stu;                    //typedef   stu成为一种数据类型
int cmp (const void *a, const void *b) {
    stu *x = (stu *) a; stu *y = (stu *) b;
    if (x->score != y->score)
        return y->score - x->score;
    else
        return strcmp(x->s, y->s);                              //s代表学号
}
int main() {
    int T, pro_num, pro[11], line, stu_num, can_num, temp;      //pro[]表示每道题的分值
    scanf("%d",&T);
    for (int t=0; t<T; t++) {
        
        stu ranking[501];
        scanf("%d%d%d", &stu_num, &pro_num, &line);             //学生人数，考试题目数，分数线
        for (int i=0; i<pro_num; i++) {
            scanf("%d",&pro[i]);
        }
        for (int i=0; i<stu_num; i++) {
            scanf("%s%d", ranking[i].s, &can_num);              //can_num表示对了几题
            ranking[i].score = 0;                               //初始化分值
            for (int j=0; j<can_num; j++) {
                scanf("%d",&temp);                              //表示第几道题
                ranking[i].score += pro[temp - 1];              //总分计算
            }
        }
        qsort(ranking, stu_num, sizeof(ranking[0]), cmp);
        int ans = 0;
        for (int i=0; i<stu_num; i++) {                         //计算合格的人数
            if (ranking[i].score >= line) {                     //排序后这样做能筛掉不合格的人数
                ans++;
            }
            else break;
        }
        printf("case #%d:\n%d\n", t, ans);                      //打印case和合格人数
        for (int i=0; i<ans; i++) {
            printf("%s %d\n", ranking[i].s, ranking[i].score);
        }
    }
    return 0;
}
