//
//  main.c
//  1032最短路径
//
//  Created by 刘靖迪 on 2017/10/30.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <string.h>

#define MAXN 610
#define INF 0x3f3f3f3f

int v[MAXN], d[MAXN], w[MAXN][MAXN], num[MAXN][MAXN];   //w存路径的权值
int n, m;                                       //d存最小距离
            //数组从0计数，故最后d[n-1]表示结点1到结点n的最小路径， 数组v表示第i个结点是否已确定得到的是最小路径（若值为0，表示未确定最小路径；若值为1，表示确定找到最小路径）
void Dijkstra(int v0) {                         //v0表示起始结点
    memset(v, 0, sizeof(v));
    for (int i = 0; i < n; i++) {
        d[i] = (i == v0 ? 0 : INF);             //除了到起始结点的距离为0，其他都初始化为正无穷
    }
    for (int i = 0; i < n; i++) {              //从0遍历到n-1，以此求出到n个结点的最小路径，但并不是依次求的
        int x, m = INF;
        for (int j = 0; j < n; j++)             //遍历n个结点，目的是从未确立最小路径的点中找到距结点v0最近的结点
            if (!v[j] && d[j] <= m)             //如果结点j的标记为0（表示未找到最小路径），并且是目前距v0最近的
                m = d[x=j];                     //如果找到，就更新x
        v[x] = 1;                               //把结点x标记为找到最小路径
        
        for (int y = 0; y < n; y++)    //接下来更新所有标记为0的结点到v0的最小距离，比较d[y]和d[x]+w[x][y]
            if (!v[y] && d[x] + w[x][y] < d[y]) {           //如果找到更短的路径
                d[y] = d[x] + w[x][y];                  //更新最小的距离
            }
    }
}

int main() {
    scanf("%d%d", &n, &m);
    memset(num, 0, sizeof(num));
    for (int i = 0; i < MAXN; i++)
        for (int j = 0; j < MAXN; j++)
            w[i][j] = INF;                                      //正无穷表示不存在路径
    int a, b, weight;
    while (m--) {                                               //输入和存储路径的权值
        scanf("%d%d%d", &a, &b, &weight);
        w[a-1][b-1] = weight;
        num[a-1][b-1]++;
    }
    Dijkstra(0);                                            //调用函数
    if (d[n-1] == INF)
        d[n-1] = -1;
    printf("%d\n", d[n-1]);                    //打印结果
    return 0;
}
