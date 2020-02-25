//
//  main.cpp
//  35
//
//  Created by 刘靖迪 on 2018/1/10.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
#define M 100
double Ratio(int (*p)[M], int n, int m) {
    int cnt = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (p[i][j] == 0)
                cnt++;
        }
    }
    return (double)cnt / (n * m);
}

int main(int argc, const char * argv[]) {
    int a[100][M], m, n, i, j;
    scanf("%d%d", &n, &m);
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    printf("%.9f\n", Ratio(a, n, m));
    return 0;
}
