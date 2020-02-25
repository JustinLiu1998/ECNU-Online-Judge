//
//  main.cpp
//  3101
//
//  Created by 刘靖迪 on 2017/9/26.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
#define N 10

void transpose(int (*m)[N], int n) {
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            int tem = m[i][j];
            m[i][j] = m[j][i];
            m[j][i] = tem;
        }
    }
}

int main(int argc, const char * argv[]) {
    int m[N][N],i,j,n;
    scanf("%d",&n);
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%d", &m[i][j]);
    transpose(m,n);
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            printf("%d%c", m[i][j], j < n-1 ? ' ' : '\n');
    return 0;
}

