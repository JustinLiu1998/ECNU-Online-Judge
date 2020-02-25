//
//  main.c
//  1024三元组稀疏矩阵相加
//
//  Created by 刘靖迪 on 2017/10/31.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#define MAXN 1000010
int A[MAXN][3], B[MAXN][3];
int main(int argc, const char * argv[]) {
    scanf("%d%d%d", &A[0][0], &A[0][1], &A[0][2]);                      //读入A矩阵的行数、列数和非0元素个数
    for (int i=1; i<=A[0][2]; i++) {                                    //读入A[0][2]个三元组
        scanf("%d%d%d", &A[i][0], &A[i][1], &A[i][2]);
    }
    scanf("%d%d%d", &B[0][0], &B[0][1], &B[0][2]);                      //读入B矩阵的行数、列数和非0元素个数
    for (int i=1; i<=B[0][2]; i++) {                                    //读入B[0][2]个三元组
        scanf("%d%d%d", &B[i][0], &B[i][1], &B[i][2]);
    }
    int i=1, j=1;                                                       //让i和j从1遍历到A[0][2]和B[0][2]
    while (i<=A[0][2] && j<=B[0][2]) {                          //i没遍历完三元组A，并且j没有遍历完三元组B
        if (A[i][0] == B[j][0]) {                                       //如果行下标相同
            if (A[i][1] == B[j][1]) {                                   //并且列下标相同
                if (A[i][2]+B[j][2] != 0)                               //并且和不为0。因为为0的话可以不用输出
                    printf("%d %d %d\n", A[i][0], A[i][1], A[i][2]+B[j][2]);    //打印
                i++; j++;                                               //i和j都加1
            }
            else if (A[i][1] < B[j][1]){                                //如果此时A的列下标小于B的，那么打印A
                printf("%d %d %d\n", A[i][0], A[i][1], A[i][2]);
                i++;
            }
            else {                                                      //否则打印B
                printf("%d %d %d\n", B[j][0], B[j][1], B[j][2]);
                j++;
            }
        }
        else if (A[i][0] < B[j][0]) {                                   //如果A的行下标小于B的，那么打印A
                printf("%d %d %d\n", A[i][0], A[i][1], A[i][2]);
                i++;
        }
        else {                                                          //否则打印B
            printf("%d %d %d\n", B[j][0], B[j][1], B[j][2]);
            j++;
        }
    }                                                           //该循环结束时，至少遍历完了A和B中的一个
    while (i<=A[0][2]) {                                    //则接下来两个while最多只会有一个while被执行
        printf("%d %d %d\n", A[i][0], A[i][1], A[i][2]);            //若A有剩余，把A剩下的全打印出来
        i++;
    }
    while (j<=B[0][2]) {                                            //若B有剩余，把B剩下的全打印出来
        printf("%d %d %d\n", B[j][0], B[j][1], B[j][2]);
        j++;
    }                                                               //到此完成了三元组稀疏矩阵的加法
    return 0;
}
